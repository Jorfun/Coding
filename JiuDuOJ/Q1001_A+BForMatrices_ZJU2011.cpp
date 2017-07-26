/*
	Simple question.
*/

//#include <stdio.h>
//
//int matrix[11][11];
//
//int main()
//{
//	int m, n;
//
//	while(scanf("%d", &m) != EOF  &&  m != 0)
//	{
//		scanf("%d", &n);
//
//		for(int i=0; i<11; i++)	// initialization
//			for(int j=0; j<11; j++)
//				matrix[i][j] = 0;
//
//		int temp;
//
//		for(int i=0; i<2; i++)	// 2 matrix addition
//			for(int j=0; j<m; j++)	// m rows
//				for(int k=0; k<n; k++)	// k columns
//				{
//					scanf("%d", &temp);
//
//					matrix[j][k] += temp;
//
//				}
//
//		// count zero rows and columns
//		int count = 0;
//		bool ifZero = true;
//
//		for(int i=0; i<m; i++)
//		{
//			for(int j=0; j<n; j++)
//			{
//				if(matrix[i][j] != 0)  
//				{
//					ifZero = false;
//					break;
//				}
//			}
//
//			if(ifZero == true)  
//			{
//				//printf("row :%d\n", i);
//				count++;
//			}
//			else
//			{
//				ifZero = true;
//			}
//
//		}
//
//		for(int j=0; j<n; j++)
//		{
//			for(int i=0; i<m; i++)
//			{
//				if(matrix[i][j] != 0)  
//				{
//					ifZero = false;
//					break;
//				}
//			}
//
//			if(ifZero == true)  
//			{
//				//printf("column :%d\n", i);
//				count++;
//			}
//			else
//			{
//				ifZero = true;
//			}
//
//		}
//
//		printf("%d\n", count);
//
//	}
//
//	return 0;
//}