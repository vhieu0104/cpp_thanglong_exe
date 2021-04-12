#include <iostream>
#include <math.h>
using namespace std;

double kineticEnergy(double,double);

int main()
{
    double m,v;
    cin >> m  >> v;
    double c = kineticEnergy(m,v);
    cout << c;
    return 0;
}
double kineticEnergy(double a,double b)
{
    double c = (a * pow(b,2)) / 2;
   return c;
}