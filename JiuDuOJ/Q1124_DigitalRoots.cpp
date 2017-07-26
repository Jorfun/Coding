/*
	when the number is very very large, use string variable to store this number
*/

//#include <stdio.h>
//
//int main()
//{
//	char n[100];
//	unsigned long sum, temp;
//
//	while(scanf("%s", n) != EOF && n[0] != '0')
//	{
//		sum = 0;
//
//		for(int i=0; n[i] != 0; i++)
//		{
//			sum += n[i] - '0';
//		}
//
//		temp = sum;
//
//		while(sum/10 != 0)
//		{
//			sum = 0;
//
//			while(temp != 0)
//			{
//				sum += temp % 10;
//				temp /= 10;
//			}
//
//			temp = sum;
//
//		}
//
//		printf("%d\n", sum);
//
//	}
//
//	return 0;
//}