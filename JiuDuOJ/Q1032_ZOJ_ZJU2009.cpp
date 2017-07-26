/*
	Mix strlen with sizeof
*/

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char input[110];
//
//	while(scanf("%s", input) != EOF && input[0] != 'E')
//	{
//		int length = strlen(input);
//
//		//printf("size %d \n", length);
//
//		int Znum = 0, Onum = 0, Jnum = 0;
//
//		for(int i=0; i<length; i++)
//		{
//			switch(input[i])
//			{
//				case 'Z':  Znum++;break;
//				case 'O':  Onum++;break;
//				case 'J':  Jnum++;
//			}
//		}
//
//		//printf("All num: %d %d %d\n", Znum, Onum, Jnum);
//
//		while(Znum != 0 || Onum != 0 || Jnum != 0)
//		{
//			if(Znum != 0)
//			{
//				printf("Z");
//				Znum--;
//			}
//
//			if(Onum != 0)
//			{
//				printf("O");
//				Onum--;
//			}
//
//			if(Jnum != 0)
//			{
//				printf("J");
//				Jnum--;
//			}		
//
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}