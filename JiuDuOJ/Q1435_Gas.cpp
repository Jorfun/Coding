/*
	greedy algorithm: mix with lowest concentration medicine first
*/

//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//int buf[100];
//
//int main()
//{
//	int groupNum;
//
//	while(scanf("%d", &groupNum) != EOF)
//	{
//		
//		while(groupNum-- != 0)
//		{
//
//			int medicineNum, volume, target;
//
//			scanf("%d%d%d", &medicineNum, &volume, &target);
//
//			for(int i=0; i<medicineNum; i++)
//			{
//				scanf("%d", &buf[i]);
//			}
//
//			sort(buf, buf + medicineNum);
//
//			double concentration = 0, temp = 0;
//			int totalVolume = 0;
//
//			for(int i=0; i<medicineNum; i++)
//			{
//				temp = (totalVolume * concentration + volume * buf[i]) / (totalVolume + volume);
//
//				if(temp <= target)
//				{
//					totalVolume += volume;
//					concentration = temp;
//				}
//				else
//				{
//					break;
//				}
//
//			}
//
//			printf("%d %.2lf\n", totalVolume, concentration / 100); 
//
//		}	
//
//	}
//
//	return 0;
//}