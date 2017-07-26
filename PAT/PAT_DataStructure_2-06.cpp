/*
	When there is a accumulation. Before finish calculation, you should
	check if "carry" is zero.
*/

//#include <stdio.h>
//
//int ans[100005];
//
//int main()
//{
//	int a, n;
//
//	scanf("%d%d", &a, &n);
//
//	int base = n * a, sum = 0, idx = 0, carry = 0;
//
//	while(n > 0)
//	{
//		sum = base + carry;
//
//		carry = sum / 10;
//
//		//printf("%d\n", temp);
//		ans[idx++] = sum % 10;
//
//		base -= a;
//		n--;
//
//	}
//
//	if(carry != 0)  ans[idx++] = carry;
//
//	//printf("idx:%d\n\n", idx);
//
//	if(idx == 0)  
//	{
//		printf("0\n");
//	}
//	else
//	{
//		for(int i=idx-1; i>=0; i--)
//		{
//			printf("%d", ans[i]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}