//Write a C++ to take input of all data types and print list.
#include <iostream>
using namespace std;
int main ()
{
    int num ;
    cout<<"Enter an integer type number = "<<endl;
    cin>>num;
    cout<<"Integer type number : "<<num<<endl;

    double x;
    cout<<"Enter a double type number = "<<endl;
    cin>>x;
    cout<<"Double type number : "<<x<<endl;

    char y;
    cout<<"Enter your character = "<<endl;
    cin>>y;
    cout<<"Character type : "<<y<<endl;

    string name;
    cout<<"Enter your name = "<<endl;
    cin>>name;
    cout<<"String type name : "<<name<<endl;

    
}


/*
//Another way.

#include<iostream>
using namespace std;
int main()
{
    int num;
    double x;
    char y;
    string name;

    //taking input

    cin>>num;
    cout<<"Enter an integer number = "<<endl;

    cin>>x;
    cout<<"Enter a double type number = "<<endl;

    cin>>y;
    cout<<"Enter a character = "<<endl;

    cin>>name;
    cout<<"Enter your name = "<<endl;

    //print output

    cout<<"Integer type number : "<<num<<endl;
    cout<<"Double type number : "<<x<<endl;
    cout<<"Character type : "<<y<<endl;
    cout<<"String type : "<<name<<endl;


}*/


/*#include <iostream>
using namespace std;
int main ()
{
    string s;
    cin >> s;

    cout << "Hello, " << s << endl;

}*/
