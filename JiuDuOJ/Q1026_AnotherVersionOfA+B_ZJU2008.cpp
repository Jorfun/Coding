/*
	1. Use do while instead of while ( guard against a=0 b=0 input)
	2. Use long long type to store a and b guard against overflow

*/

//#include <stdio.h>
//
//int ans[20], size;
//
//int main()
//{
//	int m;
//
//	while(scanf("%d", &m)  &&  m != 0)
//	{
//		long long a, b;
//		
//		scanf("%lld%lld", &a, &b);
//		
//		a = a + b;
//
//		size = 0;
//
//		do
//		{
//			ans[size++] = a % m;
//			a /= m;
//
//		}while(a != 0);
//
//		for(int i=size-1; i>=0; i--)
//		{
//			printf("%d", ans[i]);
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//
//}