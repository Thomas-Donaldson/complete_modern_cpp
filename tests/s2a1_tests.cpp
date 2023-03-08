#define CATCH_CONFIG_MAIN

#include "catch2/catch_test_macros.hpp"
#include "s2a1.hpp"

TEST_CASE( "Section 2 Assignment 1") {
	int a_val = 5;
	int b_val = 10;
	int *a = &a_val;
	int *b = &b_val;

	SECTION( "Add" ) {

		REQUIRE( Add(a, b) == 15 );
	}

	SECTION( "AddVal" ) {
		int c_val = 0;
		int *c = &c_val;

		AddVal(a, b, c);
		REQUIRE( *c == 15 );
	}

	SECTION( "Swap" ) {

		Swap(a, b);
		REQUIRE( *a == 10 );
		REQUIRE( *b == 5 );
	}

	SECTION( "Factorial" ) {
		// more edge cases for factorial
		int i_val = 0;
		int j_val = 1;
		int *i = &i_val;
		int *j = &j_val;

		// create variables to store results
		int k_val = 1;
		int l_val = 1;
		int m_val = 1;
		int n_val = 1;
		int *k = &k_val;
		int *l = &l_val;
		int *m = &m_val;
		int *n = &n_val;

		Factorial(a, k);
		Factorial(b, l);
		Factorial(i, m);
		Factorial(j, n);

		REQUIRE( *k == 120 );
		REQUIRE( *l == 3628800 );
		REQUIRE( *m == 1 );
		REQUIRE( *n == 1 );
	}
}
