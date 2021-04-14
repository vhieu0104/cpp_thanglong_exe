// 5.Quãng đường rơi của vật thể

// Chúng ta có công thức sau để tính quãng đường rơi của vật thể dưới tác dụng của trọng lực: d = 12𝑔𝑡2 trong đó:

// - d là khoảng cách vật chuyển động theo thời gian t (đơn vị tính là m).

// - g là trọng lực và có giá trị bằng 9.8.

// - t là thời gian rơi của vật thể tính bằng giây.

// Viết một hàm có tên là fallingDistance() có đầu vào là thời gian rơi của vật (tính theo giây), trả ra quãng đường rơi của vật (m) theo công thức trên.

// Cuối cùng viết một chương trình sử dụng vòng lặp để in ra màn hình quãng đường rơi của vật thể theo thời gian từ 1 đến 10 giây.
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