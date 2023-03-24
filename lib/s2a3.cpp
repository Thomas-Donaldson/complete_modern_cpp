#include <iostream>

using namespace std;

int main() {

	// Try to modify x1 & x2 and see the compilation output
	int x = 5;
	const int MAX = 12;
	int &ref_x1 = x;
	const int &ref_x2 = x;

	x = 7;
	// MAX = 15; throws "error: assignment of read-only variable"
	ref_x1 = 9;
	// ref_x2 = 18; throws "error: assignment of read-only reference"

	cout << "x=" << x << endl;
	cout << "MAX=" << MAX << endl;
	cout << "ref_x1=" << ref_x1 << endl;
	cout << "ref_x2=" << ref_x2 << endl;

	/* OUTPUT
		x=9
		MAX=12
		ref_x1=9
		ref_x2=9 */

	// Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
	const int *ptr1 = &x;
	int *const ptr2 = &x;
	const int *const ptr3 = &x;

	int y = 2;
	ptr1 = &y;
	// ptr2 = &y; throws "error: assignment of read-only variable"
	// ptr3 = &y; throws "error: assignment of read-only variable"

	// *ptr1 = y; throws "error: assignment of read-only location"
	*ptr2 = y;
	// *ptr3 = y; throws "error: assignment of read-only location"

	cout << "x=" << x << endl;
	cout << "*ptr1=" << *ptr1 << endl;
	cout << "*ptr2=" << *ptr2 << endl;
	cout << "*ptr3=" << *ptr3 << endl;

	/* OUTPUT
		x=2
		*ptr1=2
		*ptr2=2
		*ptr3=2 */

	// Find which declarations are valid. If invalid, correct the declaration
	const int *ptr4 = &MAX;
	// int *ptr5 = &MAX; invalid conversion from 'const int*' to 'int*'

	const int &r1 = ref_x1;
	// int &r2 = ref_x2; invalid conversion from 'const int*' to 'int*'

	const int *p_ref1 = ptr1;
	// const int &p_ref2 = ptr2; invalid conversion from 'int*' to 'int'

	cout << "*ptr4=" << *ptr4 << endl;
	cout << "r1=" << r1 << endl;
	cout << "p_ref1=" << *p_ref1 << endl;

	/* OUTPUT 
		*ptr4=12
		r1=2
		p_ref1=2 */
}
