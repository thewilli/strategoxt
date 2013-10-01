{ nixpkgs ? ../../nixpkgs
, javaFront ? { outPath = ../../java-front ; rev = 1234; }
, strategoxtJava ? { outPath = ../../strategoxt ; rev = 1234; }
, baseline ? ../../strategoxt.jar
} :
let
  pkgs = import nixpkgs {};

  bootstrap = baseline: nr:
    pkgs.releaseTools.antBuild {
      name = "strategoxt-java-${toString nr}";
      src = strategoxtJava;
      buildInputs = with pkgs; [ strategoPackages.sdf strategoPackages.strategoxt ecj openjdk ];

      preConfigure = ''
        cd strategoxt
        ulimit -s unlimited
      '';

      postUnpack = ''
        cd $sourceRoot
        rm -f strategoxt/syntax/java-front
        mkdir -p strategoxt/syntax/java-front
        cp -Rv ${javaFront}/* strategoxt/syntax/java-front/
        chmod -R a+w strategoxt/syntax/java-front
        cd ..
      '';

      antTargets = ["all" "install"] ++ (pkgs.lib.optional (nr == 3) "test");
      antProperties = [
        { name = "revision"; value = "${toString strategoxtJava.rev}"; }
        { name = "sdf2bundle"; value = pkgs.strategoPackages.sdf; }
        { name = "install-prefix-out"; value = "$out"; }
      ] ;
      antBuildInputs = [ pkgs.ecj baseline] ;

      ANT_OPTS="-Xss8m -Xmx1024m";

      dontInstall = true;
    };

  jobs = {

    bootstrap1 = bootstrap baseline 1;
    bootstrap2 = bootstrap jobs.bootstrap1 2;
    bootstrap3 = bootstrap jobs.bootstrap2 3;

  };
in
  jobs