COPYING.LIB[TXT] COPYING.LIB 2011-04-13 03:31 26K

Copying-StCopying-Stng-without-Library-Copying-StCopying-Stng-without-Library-ng-without-Libng-without-Library-FunctionCOPYING.LIB[PARENTDIR]	Parent Directory	 	-	 
[TXT]	AUTHORS	2023-04-21 01:06	1.0K	 
[TXT]	COPYING	2023-04-21 01:06	18K	 
[TXT]	COPYING.LIB	2011-04-13 03:31	26K	 
[TXT]	FAQ	2023-04-21 01:06	114K	 
[DIR]	Historic/	2004-10-04 03:17	-	 
[TXT]	INSTALL	2023-04-21 01:06	1.7K	 
[TXT]	NEWS	2023-04-21 01:06	147K	 
[TXT]	NEWS.0	2023-04-21 01:06	91K	 
[   ]	NEWS.1	2023-04-21 01:06	287K	 
[   ]	NEWS.2	2023-04-21 01:06	627K	 
[   ]	NEWS.3	2023-04-21 01:06	317K	 
[DIR]	R-0/	2004-10-04 03:20	-	 
[DIR]	R-1/	2004-10-04 12:02	-	 
[DIR]	R-2/	2013-03-01 02:11	-	 
[DIR]	R-3/	2020-02-29 02:07	-	 
[DIR]	R-4/	2023-04-21 01:06	-	 
[   ]	R-latest.tar.gz	2023-04-21 01:06	33M	 
[TXT]	RESOURCES	2023-04-21 01:06	1.2K	 
[TXT]	THANKS	2023-04-21 01:06	3.8K	 
[   ]	VERSION-INFO.dcf	2023-04-21 01:06	211	donjayamanne.python-extension-pack2023-04-23 17:25:36.123 [info] > git for-each-ref --format=%(refname)%00%(upstream:short)%00%(objectname)%00%(upstream:track)%00%(upstream:remotename)%00%(upstream:remoteref) refs/heads/main refs/remotes/main [30ms]
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
