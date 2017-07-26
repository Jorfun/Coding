//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//
//#define max 1001
//
//struct bigInteger
//{
//	int digit[max];
//	int size;
//
//	void init()
//	{
//		for(int i=0; i<max; i++)
//		{	
//			digit[i] = 0;
//		}
//
//		size = 0;
//
//	}
//
//	void set(char str[])
//	{
//		init();
//
//		int L = strlen(str);
//
//		for(int i=(L - 1), j=0, t=0, c=1; i>=0; i--)
//		{
//			t += (str[i] - '0') * c;
//			j++;
//			c *= 10;
//			
//			if(j == 4 || i == 0)
//			{
//				digit[size++] = t;
//				j = 0;
//				t = 0;
//				c = 1;
//			}
//
//		}
//
//	}
//
//	void output()
//	{
//		for(int i = size - 1; i >= 0; i--)
//		{
//			if(i != size - 1)  printf("%04d", digit[i]);
//			else printf("%d", digit[i]);
//		}
//
//		printf("\n");
//
//	}
//
//	bool operator < (const bigInteger &B) const
//	{
//		int carry = 0;
//
//		for(int i=0; i<B.size || i<size; i++)
//		{
//			int temp = B.digit[i] - digit[i] - carry;
//
//			if(temp < 0)
//			{
//				carry = 1;
//				temp += 10000;
//			}
//			else
//			{
//				carry = 0;
//			}
//
//		}
//
//		if(carry != 0)
//		{
//			return false;
//		}
//		else
//		{
//			return true;
//		}
//
//	}
//
//
//}num[101];
//
//char temp[max];
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF  &&  n != 0)
//	{
//
//		for(int i=0; i<n; i++)
//		{
//			scanf("%s", temp);
//			num[i].set(temp);
//		}
//
//		sort(num, num + n);
//
//		for(int i=0; i<n; i++)
//		{
//			num[i].output();
//		}
//
//	}
//
//	return 0;
//}