#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>

using namespace std;

struct Pizza
{
    string name;
    double d;
    double w;
};

int main()
{
    Pizza *pizza=new Pizza;
    cout<<"Enter pizza diameter: ";
    cin>>pizza->d;
    cin.get();
    cout<<"Enter pizza name: ";
    getline(cin,pizza->name);
    
    cout<<"Enter pizza weight: ";
    cin>>pizza->w;
     cout<<"pizza name: "<<pizza->name<<", diameter: "<<pizza->d<<", weight: "<<pizza->w<<endl;




    return 0;
}