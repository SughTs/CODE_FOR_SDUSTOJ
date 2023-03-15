#include<iostream>
using namespace std;
class Manadarin
{
	public:
		double w;
		void weight(double we)
		{
			w = we ;
		}
		double getw()
		{
			return w;
		}
};
class MandarinBox
{
	public:
		double p;
		Manadarin mana[6];
		MandarinBox (double p1) : p(p1) {}
		Manadarin &operator [](int n)
		{
			return mana[n];
		}
		double value()
		{
			double s;
			for(int i = 1 ; i <= 6 ; i++)
			{
				s+=mana[i].w*p;
			}
			return s-1;
		}
};
int main()
{
    double price, w;

    cin >> price;
    MandarinBox mandarin(price);
    for(int i = 0; i < 6; i++)
    {
        cin >> w;
        mandarin[i].weight(w);
    }
    cout << mandarin.value() << endl;
}
