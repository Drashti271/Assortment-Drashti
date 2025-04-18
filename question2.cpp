#include<iostream>
using namespace std;

int main(){

    int n;

    int a[n][n],max;

    cout<<"Enter number for row and col: ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<"Enter value of a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    max = a[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j]>max)
            {
                max = a[i][j];
            }
        }
    }

    cout<<"Max value of array: "<<max<<endl;

    return 0;
}