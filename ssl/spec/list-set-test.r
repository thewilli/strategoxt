\literate[list-set-test]

	\begin{abstract}
	Tests for set operations on lists
	\end{abstract}

\begin{code}
module list-set-test
imports list-set sunit

strategies 

 main = 
    test-suite(!"list-set-test",
	test1a;
	test1b;  
	test1c;
	test1d;
	test1e;

	test2a;
	test2b;  
	test2c;
	test2d;
	test2e;

	test3a;
	test3b;  
	test3c;
	test3d;
	test3e;

	test4a;
	test4b;  
	test4c;
	test4d;
	test4e;
  
	test5;
	test5b;
	test6;
	test7;
	test8;
	test9;
	test10
     )

/**
 * union
 */ 
  test1a = 
    apply-test(!"test1a"
	, union
	, !(["a","b"],["c","d"])
	, !["a","b","c","d"]
	)

  test1b =
    apply-test(!"test1b"
	, union
	, !(["a","b"],["b","d"])
	, !["a","b","d"]
	)

  test1c = 
    apply-test(!"test1c"
	, union
	, !([],["c","d"])
	, !["c","d"]
	)

  test1d =
    apply-test(!"test1d"
	, union
	, !(["a","b"],[])
	, !["a","b"]
	)

  test1e =
    apply-test(!"test1e"
	, union
	, !([],[])
	, ![]
	)

/**
 * isect
 */ 
  test2a = 
    apply-test(!"test2a"
	, isect
	, !(["a","b"],["c","d"])
	, ![]
	)

  test2b =
    apply-test(!"test2b"
	, isect
	, !(["a","b"],["b","d"])
	, !["b"]
	)

  test2c = 
    apply-test(!"test2c"
	, isect
	, !([],["c","d"])
	, ![]
	)

  test2d =
    apply-test(!"test2d"
	, isect
	, !(["a","b"],[])
	, ![]
	)

  test2e =
    apply-test(!"test2e"
	, isect
	, !([],[])
	, ![]
	)

/**
 * diff
 */ 
  test3a = 
    apply-test(!"test3a"
	, diff
	, !(["a","b"],["c","d"])
	, !["a", "b"]
	)

  test3b =
    apply-test(!"test3b"
	, diff
	, !(["a","b"],["b","d"])
	, !["a"]
	)

  test3c = 
    apply-test(!"test3c"
	, diff
	, !([],["c","d"])
	, ![]
	)

  test3d =
    apply-test(!"test3d"
	, diff
	, !(["a","b"],[])
	, !["a", "b"]
	)

  test3e =
    apply-test(!"test3e"
	, diff
	, !([],[])
	, ![]
	)

/**
 * sym-diff
 */ 
  test4a = 
    apply-test(!"test4a"
	, sym-diff
	, !(["a","b"],["c","d"])
	, !["a","b", "c","d"]
	)

  test4b =
    apply-test(!"test4b"
	, sym-diff
	, !(["a","b"],["b","d"])
	, !["a", "d"]
	)

  test4c = 
    apply-test(!"test4c"
	, sym-diff
	, !([],["c","d"])
	, !["c", "d"]
	)

  test4d =
    apply-test(!"test4d"
	, sym-diff
	, !(["a","b"],[])
	, !["a", "b"]
	)

  test4e =
    apply-test(!"test4e"
	, sym-diff
	, !([],[])
	, ![]
	)

signature
  constructors
    F : A * A -> A
    G : A * A -> A
    H : A * A -> A
    I : A -> A
    A : A
    B : A
    C : A

strategies

  test5 = 
    apply-test(!"test5"
	, collect-split(\ H(x,y) -> I(x) \, \ H(x,y) -> [H(x,y)] \ )
	, !F(G(A,H(A,B)),H(B,C))
	, !(F(G(A,I(A)), I(B)), [H(A,B),H(B,C)])
	)

  test5b = 
    apply-test(!"test5b"
	, collect-split(\ H(x,y) -> I(x) \, \ H(x,y) -> [H(x,y)] \ )
	, !F(G(A,H(A{"Test1"},B)){"Test2"},H(B,C))
	, !(F(G(A,I(A{"Test1"})){"Test2"}, I(B)), [H(A{"Test1"},B),H(B,C)])
	)

  test6 = 
    apply-test(!"test6"
	, collect-split(\ H(x,y) -> I(x) \, \ H(x,y) -> [H(x,y)] \ )
	, !F(G("a",H(A,3.0)),H(1,C))
	, !(F(G("a",I(A)), I(1)), [H(A,3.0),H(1,C)])
	)

  test7 = 
    apply-test(!"test7a"
	, occurrences(?A)
	, !F(G(A,H(A,3.0)),H(1,C))
	, !2
	); 
    apply-test(!"test7b"
	, occurrences(?H(_,_))
	, !F(G(A,H(A,H(A,A))),H(1,C))
	, !3
	)

  test8 = 
    apply-test(!"test8a"
	, node-size
	, !F(G(A,H(A,3.0)),H(1,C))
	, !2
	);
    apply-test(!"test8b"
	, term-size
	, !F(G(A,H(A,3.0)),H(1,C))
	, !9
	)

  test9 = 
    apply-test(!"test9a"
	, collect-om(G(id,id))
	, !F(G(A,G(A,B)),G(B,C))
	, ![G(A,G(A,B)),G(B,C)]
	);
    apply-test(!"test9b"
	, collect-all(G(id,id))
	, !F(G(A,G(A,B)),G(B,C))
	, ![G(A,G(A,B)),G(A,B),G(B,C)]
	)

  test10 = 
    apply-test(!"test10a"
	, crush(id, ![<Fst> | <Snd>])
	, !F(G(A,G(A,B)),G(B,C))
	, ![G(A,G(A,B)),G(B,C)]
	);
    apply-test(!"test10b"
	, rec x(crush(id, ![<Fst> | <Snd>], x))
	, !F(G(A,G(A,B)),G(B,C))
	, ![[[],[[],[]]],[[],[]]]
	)
\end{code}

% Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.
