#include<iostream>
using namespace std;
int main()
{
    int array[4]={1,2,3,4};
    array[0]=3;
    for(int i:array){
        cout<<i<<endl;
    }
    //size of array
    cout<<sizeof(array)/sizeof(int);
    return 0;
}