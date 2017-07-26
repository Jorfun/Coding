//#include <stdio.h>
//
//int buf[100];
//
//int main()
//{
//	int n, m, temp;
//	
//	while(scanf("%d", &n) != EOF)
//	{
//		for(int i=0; i<n; i++)
//		{
//			scanf("%d", &buf[i]);
//		}
//
//		scanf("%d", &m);
//
//		for(int i=0; i<m; i++)
//		{
//			scanf("%d", &temp);
//
//			for(int i=0; i<n; i++)
//			{
//				if(temp == buf[i])
//				{
//					printf("%s\n", "YES");
//					break;
//				}
//
//				if(i == n-1)
//				{
//					printf("%s\n", "NO");
//				}
//			}
//		}
//
//	}
//
//	return 0;
//}