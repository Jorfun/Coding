/*
	2^n is so large that you can't store it in the struct correctly
	Find more details of the method in my CSDN bookmark
*/

//#include <stdio.h>
//#include <string.h>
//
//#define max 300
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
//	void set(int x)
//	{
//		init();
//		
//		do
//		{
//			digit[size++] = x % 10000;
//			x /= 10000;
//
//		}while(x != 0);
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
//	bigInteger operator + (const bigInteger &B) const
//	{
//		bigInteger ret;
//		ret.init();
//
//		int carry = 0;
//
//		for(int i=0; i<B.size || i<size; i++)
//		{
//			int tmp = B.digit[i] + digit[i] + carry;
//			carry = tmp / 10000;
//			tmp %= 10000;
//			ret.digit[ret.size++] = tmp;
//		}
//
//		if(carry != 0)
//		{
//			ret.digit[ret.size++] = carry;
//		}
//
//		return ret;
//
//	}
//
//	bigInteger operator * (int x) const
//	{
//		bigInteger ret;
//		ret.init();
//		int carry = 0;
//
//		for(int i=0; i<size; i++)
//		{
//			int tmp = x * digit[i] + carry;
//			carry = tmp / 10000;
//			tmp %= 10000;
//			ret.digit[ret.size++] = tmp;
//		}
//
//		if(carry != 0)
//		{
//			ret.digit[ret.size++] = carry;
//		}
//
//		return ret;
//	}
//
//	bigInteger operator / (int x) const
//	{
//		bigInteger ret;
//
//		ret.init();
//
//		int remainder = 0;
//
//		for(int i = size - 1; i >= 0; i--)
//		{
//			int t = (remainder * 10000 + digit[i]) / x;
//			int r = (remainder * 10000 + digit[i]) % x;
//
//			ret.digit[i] = t;
//			remainder = r;
//
//		}
//
//		ret.size = 0;
//
//		for(int i=0; i<max; i++)
//		{
//			if(digit[i] != 0)  ret.size = i;
//		}
//
//		ret.size++;
//
//		return ret;
//
//	}
//
//	int operator % (int x) const
//	{
//		int remainder = 0;
//
//		for(int i = size - 1; i >= 0; i--)
//		{
//			int r = (remainder * 10000 + digit[i]) % x;
//			remainder = r;
//		}
//
//		return remainder;
//
//	}
//
//}a, middle, ans;
//
//char temp[1001];
//
//int main()
//{
//
//	while(scanf("%s", temp) != EOF)
//	{	
//		a.set(temp);
//
//		if(a.digit[0] == 0 && a.size == 1)
//		{
//			printf("0\n");
//			continue;
//		}
//
//		ans.init();
//		middle.init();
//
//		//	get final answer
//		int remainder = 0;
//
//		while(true)
//		{
//			if(a.digit[0] == 1 && a.size == 1)	
//			{
//				middle.set(1);
//				ans = ans + middle;
//				break;
//			}
//
//			
//			remainder = a % 2;
//			middle.set(remainder);
//			a = a / 2;
//
//			ans = (ans + middle) * 2;	
//
//		}
//		
//		ans.output();
//
//	}
//
//	return 0;
//}

