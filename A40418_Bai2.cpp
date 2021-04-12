// 2.Hình chữ nhật

// Viết một chương trình yêu cầu người dùng nhập vào chiều rộng và dài của một hình chữ nhật. In ra màn hình diện tích của hình chữ nhật đó. Yêu cầu tạo các hàm và triệu gọi nó như sau:

// - Có một hàm tên là getLength(): hàm này yêu cầu người dùng nhập vào chiều dài hình chữ nhật và trả lại giá trị đó kiểu double.

// - Có một hàm tên là getWidth(): hàm này yêu cầu người dùng nhập vào chiều rộng hình chữ nhật và trả lại giá trị đó kiểu double.

// - Có một hàm tên là getArea(): hàm này có 2 tham số là chiều rộng và dài của hình chữ nhật và khi gọi hàm này sẽ trả về diện tích của hình chữ nhật đó. Diện tích hình chữ nhật được tính theo công thức là chiều dài nhân chiều rộng.

// - Có một hàm tên là displayData(): hàm này có 3 tham số là chiều rộng, chiều dài và diện tích của hình chữ nhật. Nhiệm vụ của hàm này là in ra màn hình thông báo chiều rộng, chiều dài và diện tích của hình chữ nhật đó.







#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double,double);
void displayDate(double,double,double);

int main()
{
    int l,w,a;
    l = getLength(); 
    w = getWidth();
    a = getArea(l,w);
    
    displayDate(l,w,a);
    return 0;
}
double getLength()
{
    double l;
    cout << "Nhap chieu dai hinh chu nhat: ";
    cin >> l;
    return l;
}
double getWidth()
{
    double w;
    cout << "Nhap Chieu rong hinh chu nhat: ";
    cin >> w;
    return w;
}
double getArea(double a , double b)
{
    return a * b;

}
void displayDate(double a , double b , double c)
{
    cout << "Length: " << a <<endl;
    cout << "Witch: " << b << endl;
    cout << "Area: " << c << endl;
}