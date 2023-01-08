#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string greeting="hello";
    cout<<greeting<<endl;
    //concatenation of two strings
    string st1="sanidhya";
    string st2="varshney";
    cout<<st1+st2<<endl;
    //another way of concatenation.
    string answer=st1.append(st2);
    cout<<answer<<endl;

    //length of string.

    cout<<answer.length()<<endl;
    cout<<answer.size()<<endl;

    //accesing string.

    cout<<answer[0]<<endl;
    //change the character of string.
    answer[0]='j';
    cout<<answer<<endl;

    //getline()
    string fullname;
    getline(cin,fullname);
    cout<<fullname;
    return 0;
}