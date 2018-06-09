#include <ctype.h>
#include <string.h>
#include <stdlib.h>
char *DuplicateEncoder(char *str)
{
	int count = 0, length = strlen(str);
	char* new_str;

	new_str = (char*)malloc(length * sizeof(char));

	for (int i = 0; i < length; i++) {
		int a = tolower(str[i]);
		for (int j = 0; j < length; j++) {
			int b = tolower(str[j]);
			if (a == b && i != j && new_str[i] != ')' && new_str[i] != '(') new_str[i] = ')';
			else if (j == length - 1 && new_str[i] != ')' && new_str[i] != '(') new_str[i] = '(';
		}
	}
	new_str[length] = '\0';

	return  new_str;
}