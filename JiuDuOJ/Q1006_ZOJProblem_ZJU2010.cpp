/*
	My own version. Need to consider every situation carefully. This version is a bit
	of complicated.
*/

//#include <stdio.h>
//#include <string.h>
//
//char input[1010];
//int countF, countM, countB;
//
//int ifAccepted(char x[])
//{
//	int length = strlen(x);
//	
//	if(length < 3)  return -1;
//
//	if(length == 3 && x[0] == 'z' && x[1] == 'o' && x[2] == 'j')
//	{
//		return 1;
//	}
//
//	int idx = 0;
//	countF = 0;
//
//	while(x[idx] == 'o')	// ͳ��zǰ��o����
//	{
//		countF++;
//		idx++;
//	}
//
//	if(x[idx] == 'z' && x[idx + 1] == 'o')
//	{
//		countM = 1;
//		idx += 2;
//
//		while(x[idx] == 'o')	// ͳ��z��j֮���o����
//		{
//			countM++;
//			idx++;
//		}
//
//		if(x[idx] != 'j')  return -1;	//  �ж���ĸj�Ƿ����z��o����!!!!!!
//
//		idx++;
//
//		countB = 0;
//
//		while(idx < length && x[idx] == 'o')	// ͳ��j֮���o����
//		{
//			countB++;
//			idx++;
//		}
//
//		if(idx != length)  return -1;	// ��ֹz��o��j�������ĸ��������!!!!!!
//		//if(x[idx] != '\0')  return -1;
//
//		if(countF == countB && countM == 1)
//		{
//			return 1;
//		}
//		else
//		{
//			if(countB >= countF && countM > 1)
//			{
//				return 0;
//			}
//			else
//			{
//				return -1;
//			}	
//		}
//
//	}
//	else
//	{
//		return -1;
//	}
//
//}
//
//void trim(char x[])
//{
//	int i;
//
//	for(i=0; i<countF; i++)
//	{
//		x[i] = 'o';
//	}
//
//	x[i++] = 'z';
//
//	int temp = countM - 1;
//
//	while(temp != 0)
//	{
//		x[i++] = 'o';
//		temp--;
//	}
//
//	x[i++] = 'j';
//
//	temp = countB - countF;
//
//	while(temp != 0)
//	{
//		x[i++] = 'o';
//		temp--;
//	}
//
//	x[i] = '\0';
//}
//
//
//int main()
//{
//	while(scanf("%s", input) != EOF)
//	{	
//		countF = countM = countB = 0;
//
//		do
//		{
//			int i = ifAccepted(input);
//
//			if(i == -1)
//			{
//				printf("Wrong Answer\n");
//				break;
//			}
//			else if(i == 1)
//			{
//				printf("Accepted\n");
//				break;
//			}
//			else
//			{
//				trim(input);
//			}
//
//		}while(1);
//
//	}
//
//	return 0;
//}	