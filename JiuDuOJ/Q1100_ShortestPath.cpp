/*
	At first, I made a error. Each time a new Dis[i] is calculated, I mod the result and then store.
	But, we need to compare with each Dis[i] during the loop. If I mod them every time they are calculated,
	then we can't compare them correctly.
	Also I should reinforce the memory of high precision number and Dijstra.
*/

//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//struct bigInteger
//{
//	int digit[100];
//	int size;
//
//	void init()
//	{
//		for(int i=0; i<100; i++)  digit[i] = 0;
//		size = 0;
//	}
//
//	void setMax()
//	{
//		for(int i=0; i<100; i++)  digit[i] = 9999;
//		size = 100;
//	}
//
//	void set(int x)
//	{
//		init();
//
//		do
//		{
//			digit[size++] = x % 10000;
//			x /= 10000;
//
//		}while(x != 0);
//
//	}
//
//	bool operator < (const bigInteger &B) const
//	{
//		int carry = 0;
//
//		for(int i=0; i<size || i<B.size; i++)
//		{
//			int tmp = digit[i] - B.digit[i] - carry;
//			
//			if(tmp < 0)
//			{
//				carry = 1;
//			}
//			else
//			{
//				carry = 0;
//			}
//
//		}
//
//		if(carry != 0)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//
//	}
//
//
//	bigInteger operator * (int x) const
//	{
//		bigInteger ret;
//		ret.init();
//		int carry = 0;
//
//		for(int i=0; i<size; i++)
//		{
//			int tmp = x * digit[i] + carry;
//			carry = tmp / 10000;
//			tmp %= 10000;
//			ret.digit[ret.size++] = tmp;
//		}
//
//		if(carry != 0)
//		{
//			ret.digit[ret.size++] = carry;
//		}
//
//		return ret;
//
//	}
//
//	bigInteger operator + (const bigInteger &B) const
//	{
//		bigInteger ret;
//		ret.init();
//
//		int carry = 0;
//
//		for(int i=0; i<size || i<B.size; i++)
//		{
//			int tmp = digit[i] + B.digit[i] + carry;
//			carry = tmp / 10000;		// reverse with next statement
//			tmp %= 10000;
//
//			ret.digit[ret.size++] = tmp;
//		}
//
//		if(carry != 0)
//		{
//			ret.digit[ret.size++] = carry;
//		}
//
//		return ret;
//
//	}
//
//	int operator % (int x) const
//	{
//		int remainder = 0;
//
//		for(int i=(size - 1); i>=0; i--)
//		{
//			int r = (remainder * 10000 + digit[i]) % x;
//			remainder =  r;
//		}
//
//		return remainder;
//	}
//
//};
//
//struct E
//{
//	int next;
//	bigInteger c;
//
//};
//
//vector<E> edge[101];
//bigInteger Dis[101];
//bool mark[101];
//
//int main()
//{
//	int n, m;
//
//	while(scanf("%d%d", &n, &m) != EOF)
//	{
//		for(int i=0; i<n; i++)  edge[i].clear();
//
//		bigInteger power;
//		power.set(1);
//
//		//	read input
//		while(m--)
//		{
//			int a, b;
//
//			scanf("%d%d", &a, &b);
//
//			E tmp;
//
//			tmp.c = power;
//
//			tmp.next = b;
//			edge[a].push_back(tmp);
//			tmp.next = a;
//			edge[b].push_back(tmp);
//
//			power = power * 2;
//
//		}
//
//		// Initialize
//		for(int i=0; i<n; i++)
//		{
//			Dis[i].set(-1);
//			mark[i] = false;
//		}
//
//		Dis[0].set(0);
//		mark[0] = true;
//		int newP = 0;
//
//		// Dikastra
//		for(int i=1; i<n; i++)		//	proceed the loop for n-1 times
//		{
//			for(int j=0; j<edge[newP].size(); j++)		//  update current newP's shortest paths to its neighbors
//			{
//				int t = edge[newP][j].next;
//				bigInteger c = edge[newP][j].c;
//
//				if(mark[t] == true)  continue;
//
//				if(Dis[t].digit[0] == -1  ||  (Dis[newP] + c) < Dis[t])
//				{
//					Dis[t] = Dis[newP] + c;
//				}
//			}
//
//			bigInteger min;
//			min.setMax();
//
//			for(int j=0; j<n; j++)		//  find next point for move in K set
//			{
//				if(mark[j] == true)  continue;
//
//				if(Dis[j].digit[0] == -1)  continue;
//
//				if(Dis[j] < min)	
//				{
//					min = Dis[j];
//					newP = j;
//				}
//
//			}
//
//			mark[newP] = true;
//
//		}
//
//		for(int i=1; i<n; i++)
//		{
//			if(mark[i])
//			{
//				printf("%d\n", Dis[i] % 100000);
//			}
//			else
//			{
//				printf("-1\n");
//			}
//			
//		}
//
//	}
//
//	return 0;
//
//}