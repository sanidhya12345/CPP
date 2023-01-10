#include<iostream>
using namespace std;

int myfunc(int a,int b){
    return a+b;
}
int main()
{
    int ans=myfunc(23,45);
    cout<<ans<<endl;
    cout<<myfunc(34,56);
    return 0;
}