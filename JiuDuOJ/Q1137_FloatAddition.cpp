/*
	one element of array store only one digit of number
*/

//#include <stdio.h>
//#include <string.h>
//
//#define max 201
//
//struct bigInteger
//{
//	int digit[max];
//	int lBound, uBound;
//
//	void init()
//	{
//		for(int i=0; i<max; i++)
//		{
//			if(i == 100)
//			{
//				digit[i] = -1;
//				continue;
//			}
//			
//			digit[i] = 0;
//		}
//
//		lBound = uBound = 0;
//
//	}
//
//	void set(char str[])
//	{
//		init();
//
//		int L = strlen(str);
//
//		for(int i=0; i<L; i++)
//		{
//			if(str[i] == '.')
//			{
//				lBound = i;
//				uBound = L -lBound - 1;
//				break;
//			}
//
//		}
//
//		int idx = 0;
//
//		for(int i=(100 - lBound); i<=(100 + uBound); i++)
//		{
//			
//			if(i == 100)
//			{
//				idx++;
//				continue;
//			}
//
//			digit[i] = str[idx++] - '0';
//
//		}
//
//	}
//
//	void output()
//	{
//		for(int i=(100 - lBound); i<=(100 + uBound); i++)
//		{
//			if(i == 100)
//			{
//				printf(".");
//				continue;
//			}
//
//			printf("%d", digit[i]);
//
//		}
//
//		printf("\n");
//
//	}
//
//	bigInteger operator + (const bigInteger &B) const
//	{
//		bigInteger temp;
//		temp.init();
//
//		if(lBound >= B.lBound)
//		{
//			temp.lBound = lBound;
//		}
//		else
//		{
//			temp.lBound = B.lBound;
//		}
//
//		if(uBound >= B.uBound)
//		{
//			temp.uBound = uBound;
//		}
//		else
//		{
//			temp.uBound = B.uBound;
//		}
//
//		int carry = 0;
//
//		for(int i=(100 + temp.uBound); i>=(100 - temp.lBound); i--)
//		{
//			if(i == 100)  continue;
//			
//			temp.digit[i] = digit[i] + B.digit[i] + carry;
//
//			carry = temp.digit[i] / 10;
//
//			temp.digit[i] %= 10;
//
//		}
//
//		if(carry != 0)
//		{
//			temp.digit[100 - temp.lBound - 1] = carry;
//			temp.lBound++;
//		}
//
//		// erase 0 that we don't need
//
//		int n = temp.uBound;
//
//		for(int i=(100 + temp.uBound); i>100; i--)
//		{
//			if(temp.digit[i] == 0)
//			{
//				n--;
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		temp.uBound = n;
//
//		return temp;
//
//	}
//
//
//
//}a, b, c;
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF  &&  n != 0)
//	{
//		while(n--)
//		{
//			char str1[max], str2[max];
//
//			scanf("%s%s", str1, str2);
//
//			a.set(str1);
//			b.set(str2);
//
//			c = a + b;
//
//			//a.output();
//			//b.output();
//			c.output();
//		}
//
//	}
//
//	return 0;
//}