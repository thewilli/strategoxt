module test16
imports sunit
signature
  constructors
    A : Term
    B : Term
    C : Term
    D : Term

strategies

  eq-or-c-r = 
    {?(x, x); !x} 
    + {?(r@A, C); !r}
    + {?(r@B, C); !r}

  main = 
    test-suite(!"test16", 
	test1
    )

  test1 = debug;
    apply-test(!"test1a"
	, eq-or-c-r
	, !(D, D)
	, !D
	);
    apply-test(!"test1b"
	, eq-or-c-r
	, !(A, C)
	, !A
	);
    apply-test(!"test1c"
	, eq-or-c-r
	, !(B, C)
	, !B
	);
    apply-test(!"test1d"
	, eq-or-c-r
	, !(B, B)
	, !B
	)

