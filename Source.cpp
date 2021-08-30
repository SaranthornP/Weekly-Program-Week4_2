#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main() {
	char b[100][100];
	int i = 0;
	while (strcmp(b[i - 1], "finished") != 0) {
		scanf("%s", b[i]);
		i++;
	}
	for (int j = 0; j < i - 1; j++) {
		printf("%c", toupper(b[j][0]));
		for (int k = 1; k < strlen(b[j]); k++) {
			printf("%c", tolower(b[j][k]));
		}
		printf(" ");
	}
	return 0;
}