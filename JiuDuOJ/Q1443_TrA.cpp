/*
	copy from user flqbestboy in web http://blog.csdn.net/flqbestboy/article/details/8257314

	Pow function is modified to the same version as book
*/

//#include <stdio.h>  
// 
//struct Matrix  
//{  
//int m[11][11];  
//};  
//
//Matrix init, unit;  //��ʼ��������󣬵�λ��������õݹ�дPow�������Բ��õ�λ����  
//int n, K;  
//
//void Init( )  //��ʼ��  
//{  
//    scanf( "%d%d", &n, &K );  
//    for( int i=0; i<n; ++ i )  
//        for( int j=0; j<n; ++ j )  
//        {  
//            scanf( "%d", &init.m[i][j] );  
//            unit.m[i][j]=( i == j );  
//        }  
//}  
//   
//Matrix Mul( Matrix a, Matrix b )  //����˷�  
//{  
//    Matrix c;  
//    for( int i=0; i<n; ++ i )  
//    {  
//        for( int j=0; j<n; ++ j )  
//        {  
//            c.m[i][j] = 0;  //�ر�ע��  
//
//            for( int k=0; k<n; ++ k )  
//            {  
//                c.m[i][j] += a.m[i][k]*b.m[k][j];  
//            }  
//
//            c.m[i][j] %= 9973;  
//        }   
//    }  
//    return c;  
//}  
//   
//   
//Matrix Pow(Matrix a, Matrix b, int k)  
//{
//	while(k != 0)
//	{
//		if(k & 1)
//		{
//			b=Mul(a, b);
//		}
//
//		k /= 2;
//		a = Mul(a, a);
//
//	}
//
//	return b;
//}
//
//int main( )  
//{  
//    int T;  
//    scanf( "%d", &T );  
//
//    while( T -- )  
//    {  
//        Matrix x;  
//        Init( );  
//        x=Pow( init, unit, K );  
//        int sum=0;  
//        n--;  
//
//        while( n >= 0 )  
//        {  
//            sum += x.m[n][n];  
//            sum%=9973;  
//            n --;      
//        }  
//
//        printf( "%d\n", sum);  
//    }  
//}