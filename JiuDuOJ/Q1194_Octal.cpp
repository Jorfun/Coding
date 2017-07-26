//#include <stdio.h>
//
//int main()
//{
//	int n;
//	int octal[10];
//
//	while(scanf("%d", &n) != EOF)
//	{
//		if(n == 0) 
//		{
//			printf("0");
//		}
//
//		int idx = 0;
//
//		while(n != 0)
//		{
//			idx++;
//			octal[idx] = n % 8;
//			n /= 8;
//		}
//
//		for(int i=idx; i>0; i--)
//		{
//			printf("%d", octal[i]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}