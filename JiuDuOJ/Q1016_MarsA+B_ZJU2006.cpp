/*
	1. bool isPrime[max + 1];	//  this error cost me many time

	�������������㣬��climbing�������ҳ http://t.jobdu.com/thread-7740-2-1.html ��

	2. ���ַ��������⣬�������׶���С�ˣ��ᷢ�������ҿ��˿�������¥�ϵĳ��ж���60��λ�õ��ַ�����ģ����ǻ��ǲ�����
	   ��ĿҪ�����25λ����λ������5֮�󣬸�λ�Ϳ�������λ���ˣ����¹���һ�£�25*2+24-5+1=70������һ�����ַ����鶨��70λ
	   ���µ�ͯЬ�ͱ����ˡ�

	3.����5λ֮�������λ�������浽�ַ�������͵�ע���ˣ���Ҫ�ֽ�λ�����ٴ������飬�������ʱ�ͻ�������룬��ȻͯЬ��
	  ���Ե�ʱ��Ҳ����ٻ��������λ�������ݣ���һ��Ϳ��ܱ������ˡ�����
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