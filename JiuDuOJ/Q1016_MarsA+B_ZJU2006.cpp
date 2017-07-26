/*
	1. bool isPrime[max + 1];	//  this error cost me many time

	受益于以下两点，由climbing提出在网页 http://t.jobdu.com/thread-7740-2-1.html 上

	2. 以字符串来做题，数组容易定义小了，会发生错误，我看了看，发现楼上的常有定义60个位置的字符数组的，但是还是不够。
	   题目要求的是25位数，位数超过5之后，该位就可能是两位数了，大致估算一下：25*2+24-5+1=70，这样一来，字符数组定义70位
	   以下的童鞋就悲剧了。

	3.超过5位之后会有两位数，储存到字符数组里就得注意了，就要分解位数，再存入数组，否则输出时就会出现乱码，当然童鞋们
	  测试的时候也许很少会测试有两位数的数据，这一点就可能被忽略了。。。
*/

//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//
//#define max 100
//
//bool isPrime[max + 1];		//  very very very important!!!!!!!!!!!
//int prime[max];
//int primeSize;
//
//void getPrime()
//{
//	for(int i=1; i<=max; i++)
//	{
//		isPrime[i] = true;
//	}
//
//	primeSize = 0;
//
//	for(int i=2; i<=max; i++)
//	{
//		if(isPrime[i] == false)  continue;
//
//		prime[primeSize++] = i;
//		
//		if(primeSize >= 25)  break;
//
//		for(int j=i*i; j<=max; j+=i)
//		{
//			isPrime[j] = false;
//		}
//
//	}
//
//}
//
//
//int main()
//{
//
//	getPrime();
//
//	char numA[100], numB[100];
//	int ans[26];
//
//	while(scanf("%s", numA) != EOF)
//	{
//		scanf("%s", numB);
//
//		if((numA[0] - '0') == 0  ||  (numB[0] - '0') == 0)
//		{
//			break;
//		}
//
//		int idxA = strlen(numA) - 1;
//		int idxB = strlen(numB) - 1;
//		int idxAns = 0, carry = 0;
//
//		while(idxA >= 0 || idxB >= 0)
//		{
//			int tempA = 0, tempB = 0;
//
//			int power = 0;
//			
//			while(numA[idxA] != ',' && idxA >= 0)
//			{
//				tempA += (numA[idxA--] - '0') * (int)pow(10.0, power++);
//			}
//
//			power = 0;
//
//			while(numB[idxB] != ',' && idxB >= 0)
//			{
//				tempB += (numB[idxB--] - '0') * (int)pow(10.0, power++);
//			}
//
//			int temp = tempA + tempB + carry;
//
//			ans[idxAns] = temp % prime[idxAns];
//
//			carry = temp / prime[idxAns];
//
//			idxAns++;
//			idxA--;
//			idxB--;
//		}
//
//		if(carry == 1)
//		{
//			ans[idxAns++] = carry;
//		}
//
//		printf("%d", ans[idxAns-1]);
//
//		for(int i=idxAns-2; i>=0; i--)
//		{
//			printf(",%d", ans[i]);
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}