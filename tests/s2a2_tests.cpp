#define CATCH_CONFIG_MAIN

#include "catch2/catch_test_macros.hpp"
#include "s2a2.hpp"

TEST_CASE( "Section 2 Assignment 2" ) {
	int x = 11;
	int y = 13;
	int z = 1;
	int &z_ref = z;

	SECTION( "Add" ) {
		Add(x, y, z_ref);
		REQUIRE( z == 24 );
	}

	SECTION( "Factorial" ) {
		// factorials to calculate
		int i = 0;
		int j = 1;
		int k = 2;
		int l = 3;
		int m = 4;

		int &i_ref = i;
		int &j_ref = j;
		int &k_ref = k;
		int &l_ref = l;
		int &m_ref = m;

		// variable to store results
		int a = 1;
		int b = 1;
		int c = 1;
		int d = 1;
		int e = 1;

		Factorial(i_ref, a);
		Factorial(j_ref, b);
		Factorial(k_ref, c);
		Factorial(l_ref, d);
		Factorial(m_ref, e);

		REQUIRE( a == 1 );
		REQUIRE( b == 1 );
		REQUIRE( c == 2 );
		REQUIRE( d == 6 );
		REQUIRE( e == 24 );
	}

	SECTION( "Swap" ) {
		Swap(x, y);
		REQUIRE(x == 13);
		REQUIRE(y == 11);
	}
}
