// 4.Bài toán động năng

// Trong vật lý, một vật thể chuyển độngt thì ta nói nó có động năng. Và động năng được tính theo công thức sau: KE = 12𝑚𝑣2, trong đó:

// - KE: là động năng của vật khi rơi

// - m: Khối lượng của vật (đơn vị tính là kg)

// - v: vận tốc rơi của vật (đơn vị tính là m/s)

// Viết một hàm có tên là kineticEnergy() với 2 đầu vào là khối lượng của vật (kg) và vận tốc (m/s), đầu ra là động năng của vật.

// Cuối cùng viết một chương trình minh họa để gọi hàm đó bằng cách yêu cầu người dùng nhập vào khối lượng và vận tốc của vật, in ra màn hình động năng.
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