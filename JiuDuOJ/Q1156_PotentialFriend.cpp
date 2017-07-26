//#include <stdio.h>
//
//int book[201] = {0};
//int reader[201] = {0};
//
//int main()
//{
//	int n, m, temp;
//
//
//	while(scanf("%d%d", &n, &m) != EOF)
//	{
//		for(int i=1; i<=n; i++)
//		{
//			scanf("%d", &temp);
//
//			reader[i] = temp;
//			book[temp]++;
//		}
//
//		for(int i=1; i<=n; i++)
//		{
//			if(book[reader[i]] > 1)
//			{
//				printf("%d\n", book[reader[i]] - 1);
//			}
//			else
//			{
//				printf("%s\n", "BeiJu");
//			}
//		}
//
//		for(int i=0; i<=201; i++)		// clear all elements (forgot)
//		{
//			book[i] = 0;
//		}
//
//	}
//
//	return 0;
//}