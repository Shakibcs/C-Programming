#include<iostream>
using namespace std;
int main()
{
    int x[10][10],m,n,i,j;
    cout<<"enter the number of rows and columes:\n";
    cin>>m>>n;
    cout<<"enter the elements of matrix:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>x[i][j];
        }
    }
    cout<<"the matrix is:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<x[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
    cout<<"upper triangular matrix:\n";
    for(i=0;i<m;i++)
    {
        cout<<"\n";
        for(j=0;j<n;j++)
        {
            if(j>=i)
            {
               cout<<x[i][j];
            }
            else
            {
            cout<<0;
            }
            cout<<"\t";
        }

    }
    cout<<"\nlower triangular matrix:\n";
     for(i=0;i<m;i++)
    {
        cout<<"\n";
        for(j=0;j<n;j++)
        {
            if(i>=j)
            {
                cout<<x[i][j];
            }
            else
            {
                cout<<0;
            }
            cout<<"\t";
        }
        cout<<"\n";
    }
    cout<<"diagonal matrix:\n";
    for(i=0;i<m;i++)
    {
        cout<<"\n";
        for(j=0;j<n;j++)
        {
                if(i==j)
                {
                    cout<<x[i][j];
                }
                else
                {
                    cout<<0;
                }
                cout<<"\t";
            }
        }
        cout<<"\ntranspose matrix:\n";
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<x[j][i];
                cout<<"\t";
            }
            cout<<"\n";
        }
    return 0;

}
