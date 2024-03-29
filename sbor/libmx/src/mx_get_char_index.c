#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
	int i = 0;

	if (str == NULL)
		return -2;
	while (str[i] != '\0') {
		if (str[i] == c)
			return i;
		else if (str[i] != c)
			return -1;
		i++;
	}
	return 0;
}
