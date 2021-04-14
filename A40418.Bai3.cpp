// 3.Tìm kiếm tài năng

// Một cuộc thi tìm kiếm tài năng có 05 giám khảo, mỗi thí sinh sẽ được 05 giám khảo cho điểm từ 0 – 10, điểm có thể được cho đến 01 số ở phần thập phân, ví dụ điểm 8.3 là hợp lệ. Điểm của một thí sinh sẽ được tính là trung bình của các giám khảo sau khi loại đi điểm cao nhất và thấp nhất. Viết một chương trình tính điểm điểm của một thí sinh khi nhập vào điểm của 05 giám khảo và phải sử dụng các hàm sau:

// - void getJudgeData() hàm này yêu cầu nhập điểm của một giám khảo, điểm sẽ lưu vào một tham số là tham chiếu. Yêu cầu người dùng nhập đến khi điểm hợp lệ thì thôi. Hàm này sẽ được gọi 05 lần ở hàm main để lấy điểm của từng giám khảo.

// - void calcScore() tính toán và in ra màn hình điểm của 3 giám khảo có được sau khi loại đi điểm cao nhất và thấp nhất. Hàm này được hàm main gọi một lần và truyền vào 5 đầu điểm của 5 giám khảo.

// Hai hàm sau được tạo ra để gọi khi định nghĩa hàm calcScrore():

// - double findLowest() tìm và trả lại giá trị nhỏ nhất của 5 điểm truyền vào.

// - double findHightest() tìm và trả lại giá trị lớn nhất của 5 điểm truyền vào.
#include <iostream>
using namespace std;

void getJudgeData(double &);
double findLowest(double,double,double,double,double);
double findHighest(double,double,double,double,double);
void calScore(double,double,double,double,double);

int main()
{
    double diem1,diem2,diem3,diem4,diem5;
    getJudgeData(diem1);
    getJudgeData(diem2);
    getJudgeData(diem3);
    getJudgeData(diem4);
    getJudgeData(diem5);

    calScore(diem1,diem2,diem3,diem4,diem5);
    return 0;
}
void getJudgeData(double & a)
{
    bool x;
 
    do
    {
        cout <<"Diem: ";
        cin >> a;
        if(int(a*10)==a*10) x=true;
    } while (a<0||a>10||!x);
    
}
double findLowest(double a,double b,double c,double d,double e)
{
    double min = a;
    if(min>b){min=b;}
    if(min>c){min=c;}
    if(min>d){min=d;}
    if(min>e){min=e;}
    return min;

}
double findHighest(double a,double b,double c,double d,double e)
{
    double max = a;
    if(max>b){max=b;}
    if(max>c){max=c;}
    if(max>d){max=d;}
    if(max>e){max=e;}
    return max;

}
void calScore(double a,double b,double c,double d,double e)
{
    cout << "Diem trung binh: " << (a+b+c+d+e - findHighest(a,b,c,d,e) - findLowest(a,b,c,d,e))/3;

}

