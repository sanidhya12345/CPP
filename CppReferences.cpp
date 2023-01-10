#include<iostream>
using namespace std;
int main()
{
    //creating references

    string food="pizza";
    string &meal=food;
    cout<<food<<endl;
    cout<<meal<<endl;

    //Memory Address.
    cout<<&food;
    return 0;
}