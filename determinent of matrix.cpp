#include<iostream>
using namespace std;
 int main()
{
    int m,n,i,j,d=0;
    cout<<"enter the number of rows and columes:\n";
    cin>>m>>n;
    int  x[10][10];
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
     cout<<"determinent of the matrix:\n";
        if(m==2)
        {
            d+=x[0][0]*x[1][1]-x[1][0]*x[0][1];
            cout<<"determinent is:"<<d;
        }
          else if(m==3)
    {
        for(i=0;i<3;i++)
        {
        d+=(x[0][i]*(x[1][(i+1)%3]*x[2][(i+2)%3]-x[1][(i+2)%3]*x[2][(i+1)%3]));
        }
        cout<<"determinent is:\n"<<d;
    }

        else
        {
            cout<<"limit is 3*3";
        }

        return 0;
    }


