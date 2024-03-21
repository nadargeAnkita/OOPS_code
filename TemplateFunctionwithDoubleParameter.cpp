#include<iostream>
using namespace std;
template<typename T1,typename T2>
T1 add(T1 num1,T2 num2)
{
    return(num1+num2);
}
template<typename s1,typename s2>
s1 sub(s1 num1,s2 num2)
{
    return(num1-num2);
}
template<typename m1,typename m2>
m1 mul(m1 num1,m2 num2)
{
    return(num1*num2);
}
template<typename d1,typename d2>
d1 div(d1 num1,d2 num2)
{
    return(num1/num2);
}
int main()
{
    int result,r1,m1,d1;
    double result2,r2,m2,d2;
    result=add<int,int>(30,20);
    cout<<"Integer Value Addition:"<<result<<endl;
    result2=add<float,float>(20.5,1.7);
    cout<<"Float Value Addition:"<<result2<<endl;
    r1=sub<int,int>(30,20);
    cout<<"Integer Value Substraction:"<<r1<<endl;
    r2=sub<float,float>(50.6,1.7);
    cout<<"Float Value Substraction:"<<r2<<endl;
    m1=mul<int,int>(30,20);
    cout<<"Integer Value Multiplication:"<<m1<<endl;
    m2=mul<float,float>(20.5,1.7);
    cout<<"Float Value Multiplication:"<<m2<<endl;
    d1=div<int,int>(90,30);
    cout<<"Integer Value Division:"<<d1<<endl;
    d2=div<float,float>(30.5,1.7);
    cout<<"Float Value Division:"<<d2<<endl;
    return 0;
}
