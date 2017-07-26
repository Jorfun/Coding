/*
	Use long long type to avoid overflow 
	Must remember step of binary exponentiation
*/

//#include <stdio.h>
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF  &&  n != 0)
//	{
//		while(n--)
//		{
//			long long num1, num2, num3;
//			int k;
//
//			scanf("%lld%lld%lld%d", &num1, &num2, &num3, &k);
//
//			if(num1 == num2 && num2 == num3)
//			{
//				printf("%lld\n", num1);
//				continue;
//			}
//
//			long long d1, d2;
//
//			d1 = num2 - num1;
//			d2 = num3 - num2;
//
//			int temp = k - 1;
//
//			if(d1 == d2)	//	arithmetic
//			{
//				long long ans = num1;
//
//				while(temp != 0)
//				{
//					if(temp % 2 == 1)
//					{
//						ans += d1;
//						ans %= 200907;
//
//					}
//
//					temp /= 2;
//					d1 += d1;
//					d1 %= 200907;
//
//				}
//
//				printf("%lld\n", ans);
//
//			}
//			else		//	geometric
//			{
//				long long q = num2 / num1;
//
//				long long ans = num1;
//
//				while(temp != 0)
//				{
//					if(temp % 2 == 1)
//					{
//						ans *= q;
//						ans %= 200907;
//
//					}
//
//					temp /= 2;
//					q *= q;
//					q %= 200907;
//
//				}
//
//				printf("%lld\n", ans);
//
//			}
//
//		}
//
//	}
//
//	return 0;
//}