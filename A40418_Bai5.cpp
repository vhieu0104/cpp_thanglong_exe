#include <iostream>
using namespace std;

double fallingDistance(double);
const double g = 9.8;
int main()
{
    for(int i = 1;i <= 10;i++)
    {
        
        cout << fallingDistance(i)<<endl;
    }

    return 0;
}
double fallingDistance(double t)
{

   double b = ( g * t * t ) / 2;
   return b;
}