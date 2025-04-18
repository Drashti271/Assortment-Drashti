#include<iostream>
using namespace std;

int main(){

    int n,row,col,choice,index;

    cout<<"Enter the row size: ";
    cin>>row;

    cout<<"Enter the col size: ";
    cin>>col;

    int a[row][col];

    cout<<"Enter elements of A matrix"<<endl;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<"Enter value of a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    do
    {
        int sum = 0;
        cout<<"Enter 1 for sum of row: "<<endl;
        cout<<"Enter 2 for sum of col: "<<endl;
        cout<<"Enter 0 for exit: "<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"Enter index of row for sum: ";
            cin>>index;

            for(int i = 0; i < row; i++)
            {
                for(int j = 0; j < col; j++)
                {
                    if(i == index)
                    {
                        sum += a[i][j];
                    }
                }
            }
            cout<<"sum of row "<<index<<" is "<<sum<<endl;
            break;

            case 2:
            cout<<"Enter index of col for sum: ";
            cin>>index;

            for(int i = 0; i < row; i++)
            {
                for(int j = 0; j < col; j++)
                {
                    if(j == index)
                    {
                        sum += a[i][j];
                    }
                }
            }
            cout<<"sum of col "<<index<<" is "<<sum<<endl;
            break;

            case 0:
            break;

            default:
                cout<<"wrong input!!!";
        }
    }while(choice != 0);

    return 0;
}