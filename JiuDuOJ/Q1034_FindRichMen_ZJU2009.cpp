/*
	Simple question
*/

//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//int num[100001];
//
//int main()
//{
//	int n, m;
//
//	while(scanf("%d%d", &n, &m) != EOF)
//	{
//		if(n == 0 && m == 0)  break;
//
//		for(int i=0; i<n; i++)
//		{
//			scanf("%d", &num[i]);
//		}
//
//		sort(num, num + n);
//
//		if(m > n)
//		{
//			printf("%d", num[0]);
//			
//			for(int i=1; i<n; i++)
//			{
//				printf(" %d", num[i]);
//			}
//
//			printf("\n");
//		}
//		else
//		{
//			
//			printf("%d", num[--n]);
//
//			for(int i=0; i<m-1; i++)
//			{
//				printf(" %d", num[--n]);
//			}
//
//			printf("\n");
//		}
//
//	}
//
//	return 0;
//}