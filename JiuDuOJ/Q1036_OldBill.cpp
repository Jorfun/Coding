//#include <stdio.h>
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF)
//	{
//		int x, y, z;
//
//		scanf("%d%d%d", &x, &y, &z);
//
//		int temp = x * 1000 + y * 100 + z * 10;
//
//		int i, j;
//		bool find = false;
//
//		for(i=9; i>0; i--)
//		{
//			for(j=9; j>=0; j--)
//			{
//				int num = i * 10000 + temp + j;
//
//				if(num % n == 0)
//				{
//					printf("%d %d %d\n", i, j, num / n);
//					find = true;
//					break;
//				}
//			}
//
//			if(find)  break;
//		}
//
//		if(i == 0  &&  j == -1)  printf("0\n");
//
//	}
//
//	return 0;
//
//}