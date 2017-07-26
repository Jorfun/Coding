/*
	string transform to normal number

	Pay attention: 1. gets() cause unexpected error. Use scanf() is right !!!!!!!!!!
*/

//#include <stdio.h>
//
//int getNum(char x[])
//{
//	int idx = 0, num = 0;
//	bool isPositive = true;
//
//	while(x[idx] != '\0')
//	{
//		char temp = x[idx];
//
//		if(temp == '-')
//		{
//			isPositive = false;
//			idx++;
//			continue;
//		}
//		else if(temp == ',')
//		{
//			idx++;
//			continue;
//		}
//
//		num = num * 10 + (x[idx] - '0');
//
//		idx++;
//	}
//
//	if(!isPositive)  num *= -1;
//
//	return num;
//
//}
//
//
//int main()
//{
//	char input1[20], input2[20];
//
//	while(scanf("%s %s", input1, input2) != EOF)
//	{
//		int num1 = getNum(input1);
//		int num2 = getNum(input2);
//
//		num1 = num1 + num2;
//
//		printf("%d\n", num1);
//
//	}
//
//}