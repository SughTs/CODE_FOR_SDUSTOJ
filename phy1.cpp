#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	double RX , UR3 , R3 , UR31 , R31;
	cin>>RX>>UR3>>R3>>UR31>>R31;
	double URX;
	URX=RX*sqrt(pow(UR3/(2*R3),2)+pow(UR31/(2*R31),2));
	cout<<URX;
}
