//#include <stdio.h>
//
//int main()
//{
//	int original[5], nineTimes[5];
//	int tempOrigin, tempNine, idx;
//	bool isReverseNum;
//
//	for(int i=1000; i<=1111; i++)
//	{
//		isReverseNum = true;
//
//		tempOrigin = i;
//
//		//if(i == 1089) getchar();
//		
//		for(int j=4; j>=1; j--)
//		{
//			original[j] = tempOrigin % 10;
//			tempOrigin /= 10;
//		}		
//		
//		//printf("%d  %d  %d  %d\n", original[1], original[2], original[3], original[4]);
//
//		tempNine = i * 9;
//
//		for(int j=4; j>=1; j--)
//		{
//			nineTimes[j] = tempNine % 10;
//			tempNine /= 10;
//		}
//		
//		//printf("%d  %d  %d  %d\n", nineTimes[1], nineTimes[2], nineTimes[3], nineTimes[4]);
//
//		for(idx=1; idx<=4; idx++)
//		{
//			if(original[idx] != nineTimes[5 - idx])
//			{
//				isReverseNum = false;
//				break;
//			}
//		}
//
//		if(isReverseNum == true)
//		{
//			printf("%d\n", i);
//		}
//
//		//if(i == 1089) getchar();
//
//	}
//
//	return 0;
//}