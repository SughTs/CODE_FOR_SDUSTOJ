#include<iostream>
using namespace std;
template <class T>
inline T swap(T &a , T &b)
{
	int *a_,*b_;
	a_ = &a ;
	b_ = &b;
	int c ;
	c = *a_;
	*a_ = *b_;
	*b_ = c ;
}
int main()
{
	int a , b ;
	cout<<"num a & b ."<<endl;
	cin>>a>>b;
	cout<<a<<b<<endl;
	swap(&a,&b);
	cout<<a<<b<<endl;
} 
