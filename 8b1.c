2023-04-23 17:25:36.123 [info] > git for-each-ref --format=%(refname)%00%(upstream:short)%00%(objectname)%00%(upstream:track)%00%(upstream:remotename)%00%(upstream:remoteref) refs/heads/main refs/remotes/main [30ms]
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
