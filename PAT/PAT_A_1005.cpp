/*
	As soon as I see the question, I realized that this question need the knowledge of high precision integer.
	In this question, what I need to pay attention to is how to build the struct of big integer.
*/


//#include <stdio.h>
//#include <string.h>
//
//struct bigInteger
//{
//	int digit[1001];
//	int size;
//
//	void init()
//	{
//		for(int i=0; i<1001; i++)  digit[i] = 0;
//		size = 0;
//	}
//
//
//	void set(char str[])
//	{
//		init();
//
//		int L = strlen(str);
//
//		for(int i=0; i<L; i++)
//		{
//			digit[i] = str[i] - '0';
//			size++;
//		}
//
//	}
//
//	int getSum()
//	{
//		int sum = 0;
//
//		for(int i=0; i<size; i++)
//		{
//			sum += digit[i];
//		}
//
//		return sum;
//
//	}
//
//}aInteger;
//
//void printAnswer(int num)
//{
//	switch(num)
//	{
//		case 0:	 printf("zero");break;
//		case 1:  printf("one");break;
//		case 2:	 printf("two");break;
//		case 3:	 printf("three");break;
//		case 4:	 printf("four");break;
//		case 5:	 printf("five");break;
//		case 6:	 printf("six");break;
//		case 7:	 printf("seven");break;
//		case 8:	 printf("eight");break;
//		case 9:	 printf("nine");
//	}
//
//}
//
//
//int ans[4];
//int ansSize;
//
//int main()
//{
//	char input[1001];
//
//	while(scanf("%s", input) != EOF)
//	{	
//		aInteger.set(input);
//
//		int sum = aInteger.getSum();
//
//		if(sum == 0)  //  special situation!!!
//		{
//			printf("zero\n");
//			continue;
//		}
//
//		for(int i=0; i<4; i++)
//		{
//			ans[i] = 0;
//		}
//
//		ansSize = 0;
//
//		while(sum != 0)
//		{
//			ans[ansSize++] = sum % 10;
//			sum /= 10;
//		}
//
//		bool isFirst = true;
//
//		for(int i = ansSize - 1; i >= 0; i--)
//		{
//			if(isFirst == false)
//			{
//				printf(" ");
//			}
//
//			printAnswer(ans[i]);
//			isFirst = false;
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//
//}