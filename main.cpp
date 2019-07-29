#include <iostream>

using namespace std;
int add(int x,int y);

int main()
{   cout << "Enter any two numbers to be added" << endl;
    int a,b,sum;
    cin>>a>>b;
    sum=add(a,b);
    cout<<"Summation of Numbers= "<<sum<<endl;

    return 0;
}
int add(int x,int y)
{
    return x+y;
}
