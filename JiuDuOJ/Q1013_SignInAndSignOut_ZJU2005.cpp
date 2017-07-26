/*
	This question is same as PAT_A_1006
*/

//#include <stdio.h>
//#include <string>
//#include <iostream>
//
//using namespace std;
//
//string lockID, unlockID;
//string minTime, maxTime;
//
//int main()
//{
//	int n;
//
//	scanf("%d", &n);
//
//	while(n--)
//	{
//		minTime = "24:00:00";
//		maxTime = "00:00:00";
//
//		char ID[16], Time[9];
//		string tempID, tempTime;
//
//		int m;
//
//		scanf("%d", &m);
//		
//		while(m--)
//		{
//			scanf("%s", ID);
//			tempID = ID;
//
//			scanf("%s", Time);
//			tempTime = Time;
//
//			if(tempTime < minTime)
//			{
//				minTime = tempTime;
//				unlockID = tempID;
//			}
//			
//			scanf("%s", Time);
//			tempTime = Time;
//
//			if(tempTime > maxTime)
//			{
//				maxTime = tempTime;
//				lockID = tempID;
//			}
//
//		}
//
//		cout<<unlockID<<" "<<lockID<<endl;
//
//	}
//
//	return 0;
//}