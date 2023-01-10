#include<iostream>
using namespace std;

void country(string c="India"){
    cout<<c<<endl;
}
int main()
{
    country("Norway");
    country("America");
    country("Australia");
    country();
    return 0;
}