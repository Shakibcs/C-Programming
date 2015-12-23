#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,x[10][10],c[10][10];
    float inverse, d=0;
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
     cout<<"determinent of the matrix:\n";
        if(m==3)
    {
        for(i=0;i<3;i++)
        {
        d+=(x[0][i]*(x[1][(i+1)%3]*x[2][(i+2)%3]-x[1][(i+2)%3]*x[2][(i+1)%3]));
        }
        cout<<"determinent is:"<<d<<"\n";
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
    cout<<"\ninverse matrix is:\n";
    if(m==3&&n==3)
    {
       for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           inverse=(float)(c[j][i]/d);
           cout<<inverse;
            cout<<"\t";
        }
        cout<<"\n";
    }
    }


    return 0;


}
