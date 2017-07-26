//#include <stdio.h>
//
//int left[101];
//int right[101];
//int height[101];
//
//int max(int a, int b)
//{
//	return (a > b) ? a : b;
//}
//
//void init()
//{
//	for(int i=1; i<101; i++)
//	{
//		left[i] = 1;
//		right[i] = 1;
//	}
//
//}
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF)
//	{
//		for(int i=1; i<=n; i++)
//		{
//			scanf("%d", &height[i]);
//		}
//
//		init();
//
//		//  from left to right
//		for(int i=1; i<=n; i++)
//		{
//			int tmax = 1;
//
//			for(int j=1; j<i; j++)
//			{
//				if(height[j] < height[i])
//				{
//					tmax = max(tmax, left[j] + 1);
//				}
//				
//			}
//
//			left[i] = tmax;
//			//printf("left[%d] = %d\n", i, left[i]);
//
//		}
//
//		//  from right to left
//		for(int i=n; i>=1; i--)
//		{
//			int tmax = 1;
//
//			for(int j=n; j>i; j--)
//			{
//				if(height[j] < height[i])
//				{
//					tmax = max(tmax, right[j] + 1);
//				}
//				
//			}
//
//			right[i] = tmax;
//			//printf("right[%d] = %d\n", i, right[i]);
//
//		}
//
//		int totalMax = 1;	//  !!!!!!!! At first I set this variable value 2.. I omitted the situation of same heights.
//
//		for(int i=1; i<=n; i++)
//		{
//			totalMax = max(left[i] + right[i] - 1, totalMax);
//		}
//
//		printf("%d\n",n - totalMax);
//
//	}
//
//	return 0;
//}