/*
	Main idea: Depth first search implemented by recursion

	copy from Õıµ¿¬€Ã≥£∫—¿«© in his electronic guide book
*/

//#include <stdio.h>
//
//double ary[32],max,q,abc[4];	// q for limit, max for final answer
//int k;	// k for size of array ary(in the above line)
//
//// t for current check
//void Cal(int t , double money , double remain)
//{
//	if( t > k )
//	{
//		if( max < money ) max = money;		//  condition for ending this recursion
//		return;
//	}
//
//	if( money + remain - ary[t] > max )		//  when we don't add this check's money and next call may find potential answer
//		Cal( t+1 , money , remain-ary[t] );
//	if( money + ary[t] <= q && money + remain > max )	//  when we add this check's money and next call may find potential answer
//		Cal( t+1 , money + ary[t] , remain-ary[t] );
//}
//
//int main()
//{
//	int n;
//
//	while( scanf( "%lf%d" , &q , &n ) && n != 0)
//	{
//		k = 0;	// initialization
//		max = 0;
//		
//		while(n--)
//		{	
//			int m;	// number of checks
//			bool tag = true;	// if this check is valid
//			double tot = 0, temp;	
//			char type;
//
//			abc[0] = abc[1] = abc[2] = 0;
//
//			scanf( "%d" , &m );
//			
//			while( m-- )
//			{
//				scanf( " %c:%lf" , &type , &temp );		//  don't miss space
//
//				if( type == 'A' )  abc[0] += temp;
//				else if( type == 'B' )  abc[1] += temp;
//				else if( type == 'C')  abc[2] += temp;
//				else  tag = false;
//
//				if( temp > 600 )  tag = false;
//
//				tot += temp;
//			}
//
//			if( tot > 1000 || abc[0] > 600 || abc[1] > 600 || abc[2] > 600)  tag = false;
//
//			if(tag)  ary[++k] = tot;
//		}
//	
//		double remain = 0;
//
//		for(int i = 1 ; i <= k ; i++ )  remain += ary[i];
//		Cal(1,0,remain);
//
//		printf( "%.2lf\n" , max );
//	}
//
//	return 0;
//}
