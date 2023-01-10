#include<iostream>
using namespace std;


int sum(int a,int b){
    return a+b;
}

double sum(double a,double b){
    return a+b;
}

int main()
{
    cout<<"Int:- "<<sum(2,3)<<endl;
    cout<<"Double:- "<<sum(2.3,3.4)<<endl;
    return 0;
}