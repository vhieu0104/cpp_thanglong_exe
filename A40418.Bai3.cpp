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

