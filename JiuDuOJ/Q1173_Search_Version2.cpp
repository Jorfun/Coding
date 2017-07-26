/*
	The way to search the target is dichotomy.
*/

//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
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
//		sort(buf, buf + n);
//
//		scanf("%d", &m);
//
//		for(int i=0; i<m; i++)
//		{
//			scanf("%d", &temp);
//
//			int bottom = 0, top = n - 1;
//
//			while(bottom <= top)
//			{
//				int mid = (bottom + top) / 2;
//
//				if(buf[mid] == temp)
//				{
//					printf("%s\n", "YES");
//					break;
//				}
//				else if(buf[mid] < temp)
//				{
//					bottom = mid + 1;
//				}
//				else 
//				{
//					top = mid - 1;
//				}
//
//			}
//
//			if(bottom > top)
//			{
//				printf("%s\n", "NO");
//			}
//
//		}
//
//	}
//
//	return 0;
//}