#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter Array size: ";
    cin>>n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }

    cout<<"Nagative elements from an Array: ";

    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            cout<<a[i]<<" , ";
        }
    }

    return 0;
}