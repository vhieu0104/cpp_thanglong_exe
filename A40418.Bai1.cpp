#include <iostream>
using namespace std;

double profit(double,double,double,double,double);
int main()
{
    double a,b,c,d,e;
    cout << "So luong co phan: ";
    cin >> a;
    cout << "Gia cua moi co phan: ";
    cin >> b;
    cout << "Hoa hong ban hang: ";
    cin >> c;
    cout << "Gia mua vao moi co phan: ";
    cin >> d;
    cout << "Hoa hong phai tra khi mua co phan: ";
    cin >> e;
    double x = profit(a,b,c,d,e);
    if(a>0)
    {
        cout << "Mang lai loi nhuan. ";
    }
    else
    {
        cout << "Lo.";
    }
    return 0;
}
double profit(double ns,double sp,double sc,double pp,double pc)
{
    double profit = ((ns*sp)-sc)-((ns*pp)+pc);
    return profit;
}