module test10
signature
  constructors
    Zero  : Nat
    Succ  : Nat -> Nat
    Plus  : Nat * Nat -> Nat

rules

  Eval1 : Plus(Zero, x) -> <Eval2> x
  Eval1 : Plus(Succ(x), y) -> Succ(<Eval2> Plus(x, y))

  Eval2 : Zero -> Zero
  Eval2 : Succ(x) -> Succ(<Eval2>x)
  Eval2 : Plus(x,y) -> <Eval1>Plus(<Eval2>x,<Eval2>y)

strategies

  main =  
    !Plus(Succ(Plus(Succ(Zero), Succ(Zero))), Succ(Zero));
    Eval2


