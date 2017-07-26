/*
	double sqrt (double);开平方
	double pow(double x,double y);计算以x为底数的y次幂
*/

//#include <stdio.h>
//#include <math.h>
//
//double num[10001];
//
//int main()
//{
//	double n;
//
//	scanf("%lf", &n);
//
//	double sum = 0;
//
//	for(int i=0; i<n; i++)
//	{
//		scanf("%lf", &num[i]);
//		sum += num[i];
//	}
//
//	double avg = sum / n;
//
//	double ans = 0;
//
//	for(int i=0; i<n; i++)
//	{
//		ans += pow(num[i] - avg, 2);
//	}
//
//	ans /= n;
//
//	ans = sqrt(ans);
//
//	printf("%.5lf\n", ans);
//
//	return 0;
//}