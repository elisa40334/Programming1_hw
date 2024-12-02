#include<stdio.h>
int even_temp;

int main(){
    int m,n,list[10],output[10];
    scanf("%d",&m);
    scanf("%d",&n);

    for (int i = 0; i < m; i++)
    {
        scanf("%d",&list[i]);
    }
    int odd = n/2,even = n-odd;
    for (int j = even; j <= n; j++)
    {
        int x = 0,count_even = 0,count_odd = 0;
        f(list,m,n,x,output,j,count_even,count_odd);
    }
    return 0;
}

void f(int list[],int m,int n,int x,int output[],int j,int count_even,int count_odd){
    if (x == n)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d",output[i]);
            if (i != n-1)
            {
                printf(",");
            }
            else{
                printf("\n");
            }
        }
    }
    else{
        for (int i = count_even; i < m && x != j; i++)
        {
            if (list[i] % 2 == 0)
            {
                output[x] = list[i];
                x+=1;
                if (x == 1)
                {
                    even_temp = i;
                }
            }
        }
       for (int i = count_odd; i < m && x != n; i++)
       {
           if (list[i] % 2 == 1)
           {
               output[x] = list[i];
               x += 1;

           }
           
       }
        
    }
}