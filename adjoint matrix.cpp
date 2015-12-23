#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,x[10][10],c[10][10];
    cout<<"enter the rows and columes:\n";
    cin>>m>>n;
    cout<<"enter the elements of the matrix:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>x[i][j];
        }
    }
    cout<<"matrix is:\n";
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<x[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
    cout<<"adjoint matrix:\n";
    if(m==3&&n==3)
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=((x[(i+1)%3][(j+1)%3]*x[(i+2)%3][(j+2)%3])-(x[(i+1)%3][(j+2)%3]*x[(i+2)%3][(j+1)%3]));
        }
    }
    }
      for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<c[j][i];
            cout<<"\t";
        }
        cout<<"\n";
    }
    return 0;


}
