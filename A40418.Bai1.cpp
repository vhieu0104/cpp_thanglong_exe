// 1. Lợi nhuận cổ phiếu

// Lợi nhuận từ việc bán cổ phiếu được tính theo công thức sau:

// Profit = ((NS * SP) – SC) – ((NS * PP) + PC), trong đó:

// - NS là số lượng cổ phần

// - SP là giá của mỗi cổ phần

// - SC là hoa hồng bán hàng

// - PP là giá mua vào của mỗi cổ phần

// - PC là hoa hồng phải tra khi mua cổ phần

// Nếu giá trị profit là dương thì cổ phiếu mang lại lợi nhuận và ngược lại là lỗ.

// Viết một hàm nhận các tham số là NS, SP, SC, PP, PC và trả về tổng số lợi nhuận hoặc lỗ của số cổ phiếu đó.

// Sau đó hãy viết chương trình nhập vào số cổ phiếu mà một người đang nắm giữ, rồi với mỗi cổ phiếu hãy nhập vào các tham số NS, SP, SC, PP, PC và in ra màn hình lời / lỗ của mỗi cổ phiếu. Cuối cùng in ra tổng số lời / lỗ của tất cả các cổ phiếu.
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