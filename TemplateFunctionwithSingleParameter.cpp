#include<iostream>
using namespace std;
template<typename T>
T add(T num1,T num2, T num3)
{
    return(num1+num2+num3);
}
template<typename T1>
T1 sub(T1 num1,T1 num2, T1 num3)
{
    return(num1-num2-num3);
}
template<typename T2>
T2 mul(T2 num1,T2 num2, T2 num3)
{
    return(num1*num2*num3);
}
template<typename T3>
T3 div(T3 num1,T3 num2)
{
    return(num1/num2);
}
int main()
{
    int result,r1,m1,d1;
    double result2,r2,m2,d2;
    result=add<int>(40,80,10);
    cout<<"Integer Value Addition:"<<result<<endl;
    result2=add<float>(20.5,4.2,1.4);
    cout<<"Float Value Addition:"<<result2<<endl;
    r1=sub<int>(40,80,10);
    cout<<"Integer Value Substraction:"<<r1<<endl;
    r2=sub<float>(50.6,18.7,1.5);
    cout<<"Float Value Substraction:"<<r2<<endl;
    m1=mul<int>(40,80,3);
    cout<<"Integer Value Multiplication:"<<m1<<endl;
    m2=mul<float>(20.5,4.2,2.4);
    cout<<"Float Value Multiplication:"<<m2<<endl;
    d1=div<int>(40,20);
    cout<<"Integer Value Division:"<<d1<<endl;
    d2=div<float>(20.5,4.2);
    cout<<"Float Value Division:"<<d2<<endl;
    return 0;
}
