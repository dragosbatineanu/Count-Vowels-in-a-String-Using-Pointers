#include "Header.h"

int countVowels(char* str) {
	int count = 0;
	char* ptr = str;

	while (*ptr != '\0') {
		if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
			*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
			count++;
		}
		ptr++;
	}
	return count;

}