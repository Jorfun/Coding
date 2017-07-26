/*
	This question is not very difficult. But it's hard for me to find special situations hide behind this question.
	1. Coefficients can be negative. The question not this point, but I should consider this.
	2. Some coefficients after round will be 0.0. These cases should not appear in the output. 

*/

//#include <stdio.h>
//#include <math.h>
//
//#define eps 1e-8
//
//int main()
//{
//
//	int n1[10], n2[10];
//	double a1[10], a2[10];
//	double ans[2001];
//	
//	int k1;
//
//	while(scanf("%d", &k1) != EOF)
//	{
//		
//		for(int i=0; i<=2000; i++)
//		{
//			ans[i] = 0.0;
//		}
//		
//		for(int i=0; i<k1; i++)
//		{
//			scanf("%d%lf", &n1[i], &a1[i]);
//		}
//
//		int k2;
//
//		scanf("%d", &k2);
//
//		for(int i=0; i<k2; i++)
//		{
//			scanf("%d%lf", &n2[i], &a2[i]);
//		}
//
//		int expo, count = 0;
//		double coeffi;
//
//		for(int i=0; i<k1; i++)
//		{
//			for(int j=0; j<k2; j++)
//			{
//				expo = n1[i] + n2[j];
//				coeffi = a1[i] * a2[j];
//
//				if(fabs(ans[expo] - 0.0) < eps)
//				{
//					count++;
//				}
//
//				ans[expo] += coeffi;
//
//				if(ans[expo] < 0.05  && ans[expo] > -0.05)
//				{
//					count--;
//				}
//
//
//			}
//
//		}
//
//		printf("%d", count);
//
//		for(int i=2000; i>=0; i--)
//		{
//			if(ans[i] >= 0.05  ||  ans[i] <= -0.05)
//			{
//				printf(" %d %.1lf", i, ans[i]);
//
//			}
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}