/*
	Main idea: Dynamic programming. 0-1 package problem.
	Reference from textbook and Danty in web http://www.cnblogs.com/aiyite826/archive/2010/07/23/1783859.html

*/

//#include <stdio.h>
//#include <string.h>
//
//int max(int a, int b)
//{
//	return (a > b) ? a : b;
//}
//
//int size, check[31], dp[3000100];
//
//int main()
//{
//	double qInput;
//	int q, n;
//
//	while(scanf("%lf%d", &qInput, &n) != EOF  &&  n != 0)
//	{
//		size = 0;
//		
//		q = int(qInput * 100);	
//
//		for(int i=0; i<n; i++)
//		{
//			int m;
//			
//			scanf("%d", &m);
//
//			int totalA = 0, totalB = 0, totalC = 0;
//			bool valid = true;
//
//			while(m--)
//			{
//				char type;
//				double valueInput;
//
//				scanf(" %c:%lf", &type, &valueInput);	// miss :
//
//				int value = int(valueInput * 100);
//
//				switch(type)
//				{
//					case 'A': totalA += value;break;
//					case 'B': totalB += value;break;
//					case 'C': totalC += value;break;
//					default: valid = false;
//				}
//
//			}
//
//			int sum = totalA + totalB + totalC;
//
//			if(valid && totalA <= 60000 && totalB <= 60000 && totalC <= 60000 && sum <= 100000)
//			{
//				check[++size] = sum;
//			}
//
//		}
//
//		memset(dp, 0, sizeof(dp));
//
//		for(int i=1; i<=size; i++)
//		{
//			for(int j=q; j>=check[i]; j--)
//			{
//				dp[j] = max(dp[j], dp[j - check[i]] + check[i]);
//			}
//
//		}
//
//		printf("%.2lf\n", double(dp[q]) / 100);
//
//	}
//
//	return 0;
//
//}