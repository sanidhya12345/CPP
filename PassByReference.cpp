#include<iostream>
using namespace std;
void swapValues(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
    cout<<x<<" " <<y<<endl;

}
int main()
{
    int x=30;
    int y=20;
    //Before Swapping
    cout<<x<<" " <<y<<endl;
    //After Swapping
    swapValues(x,y);
    return 0;
}