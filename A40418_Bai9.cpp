// 9.Đơn vị bán hàng tốt nhất

// Viết một chương trình xác định đơn vị bán hàng tốt nhất trong một quý của một công ty, biết rằng công ty có 4 bộ phận sau: Đông Bắc, Đông Nam, Tây Bắc và Tây Nam. Chương trình phải bao gồm hai hàm sau, được gọi bởi hàm main:

// - double getSales () với tham số đầu vào là tên của một đơn vị. Nó hỏi người dùng doanh số bán hàng trong quý của đơn vị đó, kiểm tra tính hợp lệ của giá trị nhập vào (doanh số phải không âm), nếu giá trị nhập vào không hợp lệ thì yêu cầu nhập lại đến khi hợp lệ thì thôi, sau đó trả về nó trả về giá trị người dùng nhập vào. Mỗi đơn vị sẽ được gọi một lần.

// - void findHighest () với 4 tham số đầu vào lần lượt là doanh số bán hàng của các đơn vị theo thứ tự liệt kê ở trên. Hàm này sẽ in ra màn hình tên của đơn vị có doanh số lớn nhất cùng với doanh số bán hàng của nó.
#include <iostream>
using namespace std;

double getSales(string);
void findHighest(double,double,double,double);
int main()
{
    double a,b,c,d;
    
    a = getSales("dong bac");
    b = getSales("dong nam");
    c = getSales("tay bac");
    d = getSales("tay nam");
    
    findHighest(a,b,c,d);
    return 0;
}
double getSales(string a)
{
    double x;

    do
    {
        
        cout << a << " ";
        cin >> x;
      
    } while (x<0);
    
   
    return x;
}
void findHighest(double a,double b,double c,double d)
{
   int j[4];
   j[0]=a;
   j[1]=b;
   j[2]=c;
   j[3]=d;


    int max =j[0];
    
    for(int i = 1;i <=3;i++)
    {
        if(j[i]>max)
        {
            max=j[i];
        }
    
    } 
    
}