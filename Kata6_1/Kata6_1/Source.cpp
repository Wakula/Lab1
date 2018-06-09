#include <iostream>
char* revrot(char* s, int sz) {

	if (sz <= 0 || strlen(s) == 0 || sz > strlen(s)) {
		char b[] = "";
		return b;
	}
	char *result;
	int length = strlen(s) / sz * sz;
	result = (char*)malloc((length + 1) * sizeof(char));
	result[length] = '\0';

	for (int main_route = 0, j = 1, a = 0, index = 0; main_route < length; main_route++, j++) {
		a += (int)s[main_route] - 48;
		if (j == sz) {
			if (a % 2 > 0) {
				int p = main_route - (sz - 1);
				result[index + (sz - 1)] = s[p];
				for (int i = 0; i < sz - 1; i++, index++, p++) result[index] = s[p + 1];
				index++;
			}
			else {
				int p = main_route;
				for (int i = 0; i < sz; i++, index++, p--) result[index] = s[p];
			}
			j = 0;
			a = 0;
		}
	}
	return result;
}