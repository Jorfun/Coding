//#include <stdio.h>
//
//int main()
//{
//	int square, count;
//	int squareArray[6];
//	bool isSymSquare;
//
//	for(int i=0; i<256; i++)	// negative?
//	{
//		if(i == 0)
//		{
//			printf("%d\n", 0);
//			continue;
//		}
//		
//		square = i * i;
//		count = 0;
//		isSymSquare = true;
//
//		while(square != 0)
//		{
//			squareArray[++count] = square % 10;
//			square /= 10;
//		}
//
//		for(int j=1; j<=(count / 2); j++)
//		{
//			if(squareArray[j] != squareArray[count - j + 1])
//			{
//				isSymSquare = false;
//				break;
//			}
//		}
//
//		if(isSymSquare)
//		{
//			printf("%d\n", i);
//		}
//
//		//getchar();
//
//	}
//
//	return 0;
//
//}