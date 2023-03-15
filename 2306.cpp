#include<iostream>
using namespace std;
class Banana
{
	public:
	double weight1;
	Banana(double w):weight1(w){}
	double weight()
	{
		return weight1;
	}
	void operator-=(double w)
	{
		weight1 += w;
	}
};
int main()
{
    double weight, sale_weight;

    cin >> weight;
    Banana banana(weight);
    while(cin >> sale_weight)
        banana -= sale_weight;
    cout << banana.weight() << endl;
}
