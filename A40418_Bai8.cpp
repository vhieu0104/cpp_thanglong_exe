// 8a.Tính tiền nằm viện

// Viết một chương trình tính toán và hiển thị các khoản phí phải trả cho thời gian nằm viện của một bệnh nhân. Đầu tiên chương trình sẽ hỏi xem bệnh nhân là nhập viện nội trú hay ngoại trú. Nếu bệnh nhân là nội trú thì cần nhập các thông tin sau:

// - Số ngày nằm viện

// - Phí nằm viện một ngày

// - Chi phí thuốc men

// - Phí khám chữa bệnh (xét nghiệm, …)

// Nếu là bệnh nhân ngoại trú, chương trình sẽ hỏi các thông tin sau:

// - Phí khám chữa bệnh (xét nghiệm, …)

// - Chi phí thuốc men

// Chương trình phải có 2 quá tải hàm để tính toán chi phí phải trả cho bệnh nhân. Một quá tải có 4 tham số để tính chi phí phải trả cho bệnh nhân nội trú và một quá tải còn lại có 2 tham số để tính chi phí phải trả cho bệnh nhân ngoại trú. Cả 2 quá tải đều trả về số tiền phải trả của bệnh nhân.
#include <iostream>
using namespace std;

float vienphi(float,float,float,float);
float vienphi(float,float);
int main()
{
    string x,y,z;
    cout << "Nhap vien noi tru hay ngoai tru: ";
    z = "noi tru";
    getline(cin,x);
  
    if(x==z)
    {
        float a,b,c,d;
        cout << "Nhap so ngay: ";cin >> a;
        cout << "Chi phi mot ngay: ";cin >> b;
        cout << "Chi phi thuoc men: ";cin >> c;
        cout << "Phi kham benh: ";cin >> d;
        float e = vienphi(a,b,c,d);
        cout <<e;
    }
    else
        {
        float a,b;      
        cout << "Chi phi kham benh: ";cin >> a;
        cout << "Phi kham benh: ";cin >> b;
        float c =vienphi(a,b);
        cout << c;
        }
    
    return 0;
}
float vienphi(float a,float b,float c,float d)
{
    float n = a * b + c + d;
    return n; 
}
float vienphi(float a,float b)
{
    float n = a + b;
    return n;
}