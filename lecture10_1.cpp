#include <iostream>
using namespace std;
void PrintHi()
{
    cout<<"Hi"<<endl;
    return;
}
int sum(int a, int b){
    int c;
    c= a+b;
    a=500;
    cout<<"the value of c is "<<c<<endl;
    return c;
}
int main()
{
    PrintHi();
    int a,b;
    int c;

    a=4;
    b=6;
    c=75;
    int d;
    d = sum(a,b);
    //cout<<"the sum is "<<d<<" "<<"the value of a is "<<a;
    cout<<"the value of c is "<<c<<endl;
    return 0;
}   