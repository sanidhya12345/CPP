#include<iostream>
using namespace std;
int main()
{
    //creating a structure.
    struct CppStructures
    {
        int num;
        string myname;
    } mystructure;
    //Assign a value to struct member.
    mystructure.num=1;
    mystructure.myname="sanidhya varshney";
    //Accessing variable in a structure.
    cout<<mystructure.num<<endl;
    cout<<mystructure.myname<<endl;

    //One structure in multiple variables.

    struct{
        string brand;
        string model;
        int year;
    }mycar1,mycar2;

    mycar1.brand="BMW";
    mycar1.model="X5";
    mycar1.year=2005;
    
    mycar2.brand="Audi";
    mycar2.model="R8";
    mycar2.year=2006;
    cout<<mycar1.brand+" "+mycar1.model+" "<<" "<<mycar1.year<<endl;
    cout<<mycar2.brand+" "+mycar2.model+" "<<" "<<mycar2.year<<endl;
    return 0;
}