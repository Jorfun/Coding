//#include <stdio.h>
//#include <algorithm>	// forgot
//
//using namespace std;	// forgot
//
//int main()
//{
//	int numbers[1000];
//	int count;
//
//	while(scanf("%d", &count) != EOF)
//	{
//		for(int i=0; i<count; i++)
//		{
//			scanf("%d", &numbers[i]);
//		}
//
//		sort(numbers, numbers + count);
//
//		if(count == 1)
//		{
//			printf("%d\n", numbers[count - 1]);
//			printf("%d\n", -1);
//		}
//		else
//		{
//			printf("%d\n", numbers[count - 1]);
//		
//			for(int i=0; i<count - 2; i++)
//			{
//				printf("%d ", numbers[i]);
//			}
//
//			printf("%d\n", numbers[count - 2]);
//		}
//
//	}
//
//	return 0;
//}