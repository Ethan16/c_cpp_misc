#include <stdio.h>

int main(int argc,char *argv[])
{
	char c;
	int isLowcaseVowel,isUppercaseVowel;
	
	printf("Pls input a char:\n");
	scanf("%c",&c);
	
	isLowcaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	
	if (isLowcaseVowel || isUppercaseVowel)
	{
		printf("%c is vowel.",c);
	}
	else
	{
		printf("%c is consonant.");
	}
	
	system("pause");
	
	return 0;
}
