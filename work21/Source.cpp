#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void letter(char *arr) {
	int i = 0;
	while (arr[i] != '\0') {
		if (arr[i] >= 'a' and arr[i] <= 'z' or arr[i] >= 'A' and arr[i] <= 'Z' or arr[i] == ' ') {
			printf("%c", arr[i]);
		}
		i++;
	}
}
int main() {
	char arr[1000];
	scanf("%[^\n]",&arr);
	letter(arr);
}