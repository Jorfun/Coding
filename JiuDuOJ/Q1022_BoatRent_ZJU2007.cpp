/*
	1. A huge mistake made by myself(pay attention)!!!!!!!!!!!!!!
	2. round(int type add 0.5 then convert to double)
	
	while(scanf("%d", &boatNum) != EOF)
	{

		if(boatNum == -1) 
		{
			break;
		}
		else if(boatNum == 0)	// When boatNum = 0, the program print answer but inputs after boatNum haven't been read from 
		{						// input stream. So in next while loop we may read unexpected input(these missed input) into 
			printAnswer();		// boatNum, then the program appear to be in a infinite loop
			init();
			continue;
		}
		else
		{
			char operation;
			int hour, minute;

			scanf(" %c %d:%d", &operation, &hour, &minute);

			........
		}
	}

*/

//#include <stdio.h>
//
//#define max 101
//
//struct R
//{
//	double startTime;		
//	double endTime;
//
//}record[max];		
//
//void init()
//{
//	for(int i=0; i<max; i++)
//	{
//		record[i].startTime = -1.0;
//		record[i].endTime = -1.0;
//	}
//
//}
//
//void printAnswer()
//{
//	int totalRent = 0;
//	double totalTime = 0.0;
//	
//	for(int i=0; i<max; i++)
//	{
//		if(record[i].startTime > 0 && record[i].endTime > 0)
//		{
//			totalRent++;
//			totalTime += (record[i].endTime - record[i].startTime);
//		}
//	}
//
//	if(totalRent == 0)
//	{
//		printf("0 0\n");
//	}
//	else
//	{
//		printf("%d %d\n", totalRent, int(totalTime / totalRent + 0.5));
//	}
//
//}
//
//int main()
//{	
//	int boatNum;
//
//	init();
//
//	while(scanf("%d", &boatNum) != EOF  &&  boatNum != -1)
//	{
//		char operation;
//		int hour, minute;
//
//		scanf(" %c %d:%d", &operation, &hour, &minute);		// Good skill(worth learning)
//
//		if(boatNum == 0)
//		{
//			printAnswer();
//			init();
//			continue;
//		}
//
//		double time = double(hour * 60 + minute);
//
//		if(operation == 'S')
//		{
//			record[boatNum].startTime = time;
//		}
//		else
//		{
//			record[boatNum].endTime = time;
//		}
//
//	}
//
//	return 0;
//}