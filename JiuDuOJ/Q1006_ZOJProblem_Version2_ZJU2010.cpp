/*
	Version 2: Make codes more concise by getting rule from the question
			   when a[1]>0 && a[2] == a[0] * a[1] is true then the string
			   can be accepted
*/

//#include <stdio.h>
//#include <string.h>
//
//char s[1001];
//int a[3];
//
//int main()
//{
//	while(scanf("%s",s) != EOF)		// don't miss != EOF
//	{
//		a[0] = a[1] = a[2] = 0;
//		int i=0, len = strlen(s);
//
//		while(s[i]=='o' && i<len) {a[0]++; i++;}
//
//		if(s[i]=='z')
//		{
//			++i;
//
//			while(s[i]=='o' && i<len) {a[1]++; i++;}
//
//			if(s[i]=='j')
//			{
//				++i;
//
//				while(s[i]=='o' && i<len) {a[2]++; i++;}
//
//				if(s[i]=='\0')
//				{
//					if(a[1]>0 && a[2] == a[0] * a[1])
//					{
//						printf("Accepted\n");
//						continue;
//					}	
//				}
//			}
//		}
//
//		printf("Wrong Answer\n");
//
//	}
//
//	return 0;
//}