/*
	store all the elements, then linear traverse and judge
*/

//#include <stdio.h>
//
//int buf[80];
//
//int main()
//{
//	int n, eNum;
//	bool ifFirst;
//
//	while(scanf("%d", &n) != EOF)
//	{
//		while(n-- != 0)
//		{
//			scanf("%d", &eNum);
//
//			for(int i=0; i<eNum; i++)
//			{
//				scanf("%d", &buf[i]);
//			}
//
//			ifFirst = true;
//
//			if(buf[0] != buf[1])	
//			{
//				printf("%d", 0);
//				ifFirst = false;
//			}
//
//			for(int i=1; i< (eNum - 1); i++)
//			{
//				if((buf[i] > buf[i-1] && buf[i] > buf[i+1]) || (buf[i] < buf[i-1] && buf[i] < buf[i+1]))
//				{
//					if(!ifFirst)
//					{
//						printf(" %d", i);
//					}
//					else
//					{
//						printf("%d", i);
//						ifFirst = false;
//					}
//					
//				}
//	
//			}
//
//			if(buf[eNum - 1] != buf[eNum - 2])	
//			{
//				printf(" %d", eNum - 1);
//			}
//
//			printf("\n");
//
//		}
//
//	}
//
//	return 0;
//}