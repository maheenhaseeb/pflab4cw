#include <stdio.h>
int main()
{
	char chr;
	printf("enter a character to check: ");
	scanf("%c",&chr);
	if (chr == 'a'|| chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u'){
		printf("the character is a vowel.");
	}
	else{
		printf("the character is a consonant.");
	}
	return 0;
}
