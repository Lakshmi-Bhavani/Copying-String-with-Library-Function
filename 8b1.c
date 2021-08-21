#include<stdio.h>
main()
{
	char str1[100];
	char str2[100];
	int i;
	printf("Enter a string");
	gets(str1);
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	
	}
	str2[i]='\0';
	printf("Copied String is %s",str2);
	
}
