#include<stdio.h>
int output[10];

f(int list[],int j,int n,int m,int count_even,int count_odd){
    for (int j = count_even; j < m; j++)
    {
        if (list[j] % 2 == 0)
        {
            /* code */
        }
        
    }
    
}

int main(){
    int m,n,list[10],odd,even;
    scanf("%d",&m);
    scanf("%d",&n);

    for (int i = 0; i < m; i++)
    {
        scanf("%d",&list[i]);
    }
    odd = n/2;
    even = n-odd;
    for (int j = even; j <= n; j++)
    {
        int count_even = 0,count_odd = 0;
        f(list,j,n,m,count_even,count_odd);
    }
}