#include<stdio.h>
int main()
{
    int a[200],b[200],i,j,m,n;
    printf("Number of element---> set A: ");
    scanf("%d", &m);
    printf("Number of element---> set B: ");
    scanf("%d", &n);
    printf("Set A: ");
    for(i=0;i<m;i++)
    scanf("%d", &a[i]);
    printf("Set B: ");
    for(j=0;j<n;j++)
    scanf("%d", &b[j]);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j])
            printf("%d ", a[i]);
        }
    }
}

