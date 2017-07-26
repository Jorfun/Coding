//#include <stdio.h>
//
//long long num[20];
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF)
//	{
//		num[1] = 1;
//		num[2] = 2;
//
//		for(int i=3; i<=n; i++)
//		{
//			num[i] = num[i - 1] + num[i - 2];
//		}
//
//		printf("%lld\n", num[n]);
//
//	}
//
//	return 0;
//
//}