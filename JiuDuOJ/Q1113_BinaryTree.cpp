/*
	Time Limit Exceed~

	Use recursion
*/

//#include <stdio.h>
//
//int m, n, total;
//
//int count(int num)
//{
//	int ans = 0;
//
//	if(num <= n)
//	{
//		ans = ans + count(num * 2) + 1;
//	}
//
//	if(num + 1 <= n)
//	{
//		ans = ans + count((num + 1) * 2) + 1;
//	}
//
//	return ans;
//
//}
//
//int main()
//{
//	
//	while(scanf("%d%d", &m, &n) != EOF)
//	{
//		if(m == 0 && n == 0) break;
//
//		//printf("m: %d   n: %d\n", m, n);	
//
//		printf("%d\n", count(m * 2) + 1);
//
//	}
//
//	return 0;
//}