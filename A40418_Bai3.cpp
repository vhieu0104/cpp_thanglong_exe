// 3.Số ngày nghỉ

// Viết một chương trình tính số ngày nghỉ trung bình của các nhân viên trong một công ty. Chương trình phải có những hàm sau:

// - Một hàm được gọi ở trong hàm main mà yêu cầu người dùng nhập vào số nhân viên của công ty. Hàm này không có tham số, trả về số nguyên dương do người dùng nhập vào.

// - Một hàm được gọi trong hàm main, hàm này có một tham số (số nhân viên trong công ty). Hàm này sẽ thực hiện nhập số ngày nghỉ của mỗi nhân viên, sau đó sẽ trả về tổng số ngày nghỉ của các nhân viên.

// - Một hàm được gọi trong hàm main, hàm này có hai tham số lần lượt là số nhân viên và tổng số giờ nghỉ của các nhân viên. Hàm này trả về trung bình số ngày nghỉ của các nhân viên trong công ty. Kiểu trả về là double.





#include <iostream>
using namespace std;

int staff();
int dayoff(int);
double total(double,double);


int main()
{
    int s,d,t;
    s = staff();
    d = dayoff(s);
    t = total (s,d);
}
int staff()
{
    int a;
    cout << "Nhap so nhan vien: ";
    cin >> a;
    return a;
}
int dayoff(int a)
{
    int j = 0,b;
    for(int i=1;i<=a;i++)
    {
        
        cout << "Nhap so ngay nghi: ";
        cin >> b;
        j+=b;
    }  
cout << j <<endl;
return j;      
}
double total(double a,double b)
{
    cout << "Trung binh so ngay nghi: " << b / a;
    return 0;
}