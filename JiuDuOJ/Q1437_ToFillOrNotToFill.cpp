//#include <stdio.h>
//#include <algorithm>
//#include <math.h>
//
//using namespace std;
//
//const double eps=1e-8;
//
//struct S
//{
//	double price;
//	double distance;
//	
//	bool operator < (const S &b) const		// forgot proper format
//	{
//		return distance < b.distance;
//	}
//
//}station[501];
//
//
//int main()
//{
//	double Cmax, D, Davg;
//	int N;
//
//	while(scanf("%lf%lf%lf%d", &Cmax, &D, &Davg, &N) != EOF)
//	{
//		for(int i=0; i<N; i++)
//		{
//			scanf("%lf%lf", &station[i].price, &station[i].distance);
//		}
//
//		// assume destination as the last station for making calcalution more convenient
//		station[N].price = -1;
//		station[N].distance = D;
//
//		sort(station, station + N + 1);
//
//		if(station[0].distance > 0)		// !!!!!!!!!!!(very important) a special situation!!!!!!!!!!!!!!
//		{
//			printf("The maximum travel distance = %.2lf\n", 0);
//			continue;
//		}
//
//		double totalCost = 0, totalDistance = 0, gap = 0, currentPrice = station[0].price, currentGas = 0, minPrice = 0, Dmax = Cmax * Davg;
//		int current = 0, temp = 1, minStation = 0;
//
//		while(fabs(D - totalDistance) > eps)   //fabs and abs
//		{
//			if(temp - current == 1)	// if adjacent station
//			{
//				gap = station[temp].distance - station[current].distance;
//
//				if(gap <= Dmax)	// if the car can reach adjacent station
//				{
//					if(station[current].price >= station[temp].price)	//	adjacent station's price is lower
//					{
//						if(currentGas >= gap / Davg)	//	current gas is enough to adjacent station
//						{
//							currentGas -= gap / Davg;
//						}
//						else	//	current gas is not enough to adjacent station
//						{
//							totalCost += (gap / Davg - currentGas) * station[current].price;
//							currentGas = 0;
//						}
//						
//						totalDistance = station[temp].distance;
//						currentPrice = station[temp].price;
//						current = temp;
//						temp = current + 1;		
//					}
//					else	//	adjacent station's price is higher
//					{			
//						minPrice = station[temp].price;
//						minStation = temp;
//						temp++;
//					}					
//				}
//				else	// if the car can't reach adjacent station
//				{				
//					totalDistance += Dmax;
//					totalCost += (Cmax - currentGas) * station[current].price;
//					break;	// can't reach destination we quit the loop
//
//				}
//				
//			}
//			else	//	if not adjacent station
//			{
//				gap = station[temp].distance - station[current].distance;
//				
//				if(gap > Dmax)	// if the car can't reach temp station(move to min station)
//				{
//					totalDistance = station[minStation].distance;
//					totalCost +=  (Cmax - currentGas) * currentPrice;
//					currentPrice = station[minStation].price;
//					currentGas = Cmax - (station[minStation].distance - station[current].distance) / Davg;
//					current = minStation;
//					temp = current + 1;
//				}
//				else	// if the car can reach temp station
//				{
//					if(station[current].price >= station[temp].price)	// station's price is lower
//					{		
//						if(currentGas >= gap / Davg)	//	current gas is enough to temp station
//						{
//							currentGas -= gap / Davg;
//						}
//						else	//	current gas is not enough to temp station
//						{
//							totalCost += (gap / Davg - currentGas) * station[current].price;
//							currentGas = 0;
//						}						
//						
//						totalDistance = station[temp].distance;
//						currentPrice = station[temp].price;
//						current = temp;
//						temp = current + 1;		
//					}
//					else	// station's price is higher
//					{
//						if(station[temp].price < station[minStation].price)
//						{
//							minPrice = station[temp].price;
//							minStation = temp;
//						}
//						
//						temp++;
//					}
//
//				}
//
//			}
//		}
//
//		if(totalDistance < D)
//		{
//			printf("The maximum travel distance = %.2lf\n", totalDistance);
//		}
//		else
//		{
//			printf("%.2lf\n", totalCost);
//		}
//		
//	}
//
//	return 0;
//}