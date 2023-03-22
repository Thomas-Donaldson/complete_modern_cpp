void Add(int a, int b, int &result) {
	result = a + b;
}

void Factorial(int a, int &result) {
	if (a <= 0) {
		return;

	} else {
		result *= a;
		a -= 1;
		Factorial(a, result);
	}
}

void Swap(int &a, int &b) {
	int c = b;
	b = a;
	a = c;
}
