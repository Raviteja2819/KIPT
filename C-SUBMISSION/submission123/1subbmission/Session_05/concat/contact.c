#include<stdio.h>
#include<string.h>
void concatenation(char[], char[]);
int main() {
	char string1[50], string2[30];
	printf("\nplease enter String 1 :");
	gets(string1);
	printf("\nplease enter String 2 :");
	gets(string2);
	concatenation(string1, string2);
	printf("\nconcated string is :%s", string1);
	return (0);
}
void concatenation(char string1[], char string2[]) {
	int i, j;
	i = strlen(string1);
	for (j = 0; string2[j] != '\0'; i++, j++) {
		string1[i] = string2[j];
	}
	string1[i] = '\0';
}
