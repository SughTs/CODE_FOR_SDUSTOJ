#include<iostream>
using namespace std;
int array[800000];
	int main()
	{
		int s ;
		cin>>s;
		for (int i1 = 1 ; i1 <= s ; i1++)
		{
			cin>>array[i1];
		}
		int x , y ;
		cin>>x>>y;
		bool jud = 1;
		for (int i2 = 1 ; i2 <= s ; i2++)
		{
			if (jud==1)
			{
				if(array[i2]<x||array[i2]>y)
				{
					cout<<array[i2];
					jud = 0;
				} 
			}
			else
			{
				if (array[i2]<x||array[i2]>y)
				{
					cout<<' '<<array[i2];
				}
			}
		}
	}
