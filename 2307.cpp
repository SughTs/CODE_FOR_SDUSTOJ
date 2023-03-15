#include<iostream>
using namespace std;
class Cherry
{
	public:
		double wht;
		int amt;
		Cherry(double w,double a):wht(w),amt(a){}
		double weight()
		{
			return wht;
		}
		void weight (double w)
		{
			wht = w;
		}
		sold_weight(double w)
		{
			wht-=w;
		}
};
int main()
{
    double weight, amount;
    cin >> weight >> amount;

    Cherry cherry(weight, amount);
    Cherry sold_cherry[100];

    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
        double w;
        cin >> w;
        sold_cherry[i].weight(w);
        cherry.sold_weight(w);
    }
    cout << cherry.weight() << endl;
}
