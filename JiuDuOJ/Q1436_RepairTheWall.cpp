//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//int buf[600];
//
//int main()
//{
//	int l, n;
//
//	while(scanf("%d%d", &l, &n) != EOF)
//	{
//		for(int i=0; i<n; i++)
//		{
//			scanf("%d", &buf[i]);
//		}
//
//		sort(buf, buf + n);
//
//		int currentLength = 0, count = 0;
//
//		for(int i=(n - 1); i>=0; i--)
//		{
//			if(currentLength < l)
//			{
//				currentLength += buf[i];
//				count++;
//			}
//			else
//			{
//				break;
//			}
//
//		}
//
//		if(currentLength >= l)
//		{
//			printf("%d\n", count);
//		}
//		else
//		{
//			printf("%s\n", "impossible");
//		}
//
//	}
//
//	return 0;
//}