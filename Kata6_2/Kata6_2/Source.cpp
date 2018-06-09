int find_even_index(const int *values, int length) {

	int a = 0, b = 0;

	for (int i = 0; i < length; i++, a = 0, b = 0) {
		for (int k = 0; k < i; k++) a += values[k];
		for (int k = i + 1; k < length; k++) b += values[k];
		if (a == b) return i;
	}
	return -1;
}