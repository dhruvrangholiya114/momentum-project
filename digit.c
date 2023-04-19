#include<stdio.h>

main()

{
	char ch;
	
	printf("enter any character:\n");
	scanf("%c",&ch);
	
	if(ch>='a'&& ch<='z')
	{
		printf("The character is small alphabet");
	}
	else if(ch>='A'&& ch<='Z')
	{
		printf("The character is capital alphabet");
	}
    
    else if(ch>='0' && ch<='99999999999')
	{
		printf("The character is digit");
	}
    else
	{
		printf("The character is special");
    }
    
}
