#include<iostream>
using namespace std;
int main()
{
    int days;
    cin>>days;
    switch(days){
        case 1:cout<<"Sunday";
               break;
        case 2:cout<<"Monday";
             break;
        case 3:cout<<"Tuesday";
             break;
        case 4:cout<<"Wednesday";
             break;
        case 5:cout<<"Thursday";
             break;
        case 6:cout<<"Friday";
            break;
        case 7:cout<<"Sunday";
            break;
        default:cout<<"Wrong Day Enter";
    }
    return 0;
}