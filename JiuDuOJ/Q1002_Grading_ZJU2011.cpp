/*
	Simple question. Figure out the relationship between different situations
*/

//#include <stdio.h>
//#include <math.h>
//
//double max(double x1, double x2, double x3)
//{
//	int temp = x1;
//
//	if(x2 > temp)
//	{
//		temp = x2;
//	}
//
//	if(x3 > temp)
//	{
//		temp = x3;
//	}
//
//	return temp;
//
//}
//
//
//int main()
//{
//	double P, T, G1, G2, G3, GJ;
//
//	while(scanf("%lf%lf%lf%lf%lf%lf", &P, &T, &G1, &G2, &G3, &GJ) != EOF)
//	{
//		if(fabs(G1 - G2) <= T)
//		{
//			printf("%.1lf\n", (G1 + G2) / 2);
//		}
//		else
//		{
//			if(fabs(G3 - G1) <= T || fabs(G3 - G2) <= T)
//			{
//				if(fabs(G3 - G1) <= T && fabs(G3 - G2) <= T)
//				{
//					printf("%.1lf\n", max(G1, G2, G3));
//				}
//				else if(fabs(G3 - G1) <= T)
//				{
//					printf("%.1lf\n", (G3 + G1) / 2);
//				}
//				else if(fabs(G3 - G2) <= T)
//				{
//					printf("%.1lf\n", (G3 + G2) / 2);
//				}
//
//			}
//			else
//			{
//				printf("%.1lf\n", GJ);
//			}
//
//		}
//
//	}
//
//	return 0;
//}