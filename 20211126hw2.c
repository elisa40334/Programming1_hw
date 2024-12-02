#include<stdio.h>
int temp;

void f(int list[],int i,int n,int count_even,int count_odd,int output[],int x){
    if (x == n)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d",output[j]);
            if (j != n-1)
            {
                printf(",");
            }
            else{printf("\n");}
        }
        x = 0;
        count_even = temp;
    }
    
    for (int j = count_even; j <= i; j++)
    {
        if (list[j] % 2 == 0 && list[j] != 0)
        {
            output[x] = list[j];
            x += 1;
            count_even = j+1;
            if (x == 1)
            {
                temp = count_even;
            }
            f(list,i,n,count_even,count_odd,output,x);
        } 
    }
    for (int j = count_odd; j <= n-i; j++)
    {
        if (list[j] % 2 != 0)
        {
            output[x] = list[j];
            x += 1;
            count_odd = j+1;
            f(list,i,n,count_even,count_odd,output,x);
        }
    }
}

int main(){
    int m,n,list[10],even,odd,output[10];
    scanf("%d",&m);
    scanf("%d",&n);
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&list[i]);
    }
    odd = n/2;
    even = n-odd;
    for (int i = even; i <= n; i++)
    {
        int count_even = 0,count_odd = 0,x = 0;
        f(list,i,n,count_even,count_odd,output,x);
    }
    return 0;
}

