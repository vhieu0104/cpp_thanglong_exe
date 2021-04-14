// 2. Khu vực lái xe an toàn trong thành phố

// Một thành phố nọ được chia thành 5 khu vực có tên lần lượt là Đông, Nam, Tây, Bắc và Trung tâm. Viết một chương trình nhập vào số vụ tai nạn giao thông của từng khu vực trong thành phố và in ra màn hình khu vực có ít vụ tai nạn nhất.

// Chương trình cần có 2 hàm sau:

// - int getNumAccidents(): đầu vào là tên của khu vực, hàm sẽ yêu cầu người dùng nhập vào số vụ tai nạn của khu vực đó, nếu giá trị nhập vào < 0 thì yêu cầu nhập lại cho đến khi lớn hơn 0. Trong hàm main, mỗi khu vực trong thành phố phải gọi hàm này một lần.

// - void findLowest(): đầu vào là số vụ tai nạn của 5 khu vực lần lượt theo thứ tự đã nói ở đầu bài. In ra màn hình tên của khu vực và số vụ tai nạn của khu vực có ít vụ tai nạn nhất.
#include <iostream>
using namespace std;

int getNumAccidents(int &);
void findLowest(int,int,int,int,int);
int main()
{
    int dong,nam,tay,bac,trung;
    cout << "Nhap khu vuc dong: ";
    getNumAccidents(dong);
    cout << "Nhap khu vuc nam: ";
    getNumAccidents(nam);
    cout << "Nhap khu vuc tay: ";
    getNumAccidents(tay);
    cout << "Nhap khu vuc bac: ";
    getNumAccidents(bac);
    cout << "Nhap khu vuc trung: ";
    getNumAccidents(trung);

    findLowest(dong,nam,tay,bac,trung);
   

    return 0;
}
int getNumAccidents(int & a)
{
    
    do
    {
        cin >> a;
    }while(a<0);
    return a;

}    
void findLowest(int a,int b,int c,int d,int e)
{
    int min = a;
    if(b<min){min=b;}
    if(c<min){min=c;}
    if(d<min){min=d;}
    if(e<min){min=e;}

    if(a==min){cout<<"Khu vuc dong: "<<min<<endl;}  
    if(b==min){cout<<"Khu vuc nam: "<<min<<endl;}
    if(c==min){cout<<"Khu vuc tay: "<<min<<endl;}
    if(d==min){cout<<"Khu vuc bac: "<<min<<endl;}  
    if(e==min){cout<<"Khu vuc trung: "<<min<<endl;}       

}  