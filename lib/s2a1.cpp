int Add(int *a, int *b) {
  return *a + *b;
}

void AddVal(int *a, int *b, int *result) {
  *result = *a + *b;
}

void Swap(int *a, int *b) {
  int c = *b;
  *b = *a;
  *a = c;
}

void Factorial(int *a, int *result) {

  if (*a <= 0) {
	return;

  } else {
	*result *= *a;
	*a -= 1;
	Factorial(a, result);
  }
}
