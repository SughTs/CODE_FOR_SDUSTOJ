#include<iostream>
using namespace std;
class Grape
{
	public:
		double price;
		double we;
		Grape(double p,double w):price(p),we(w)
		{
			
		}
		Grape(double p):price(p)
		{
			
		}
		void weight(double w) 
		{
			we+=w;
		}
		double weight() const
		{
			return we;
		}
		double value() const
		{
			return price;
		}
};
int main()
{
    double w, price;
    cin >> price;
    cin >> w;
    const Grape grap(price, w);
    Grape grape(price);
    cin >> w;
    grape.weight(w);
    cout << grape.weight() + grap.weight() << endl;
    cout << grape.value() + grap.value() << endl;
}
