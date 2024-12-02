#include<stdio.h>

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
        int x = 0,count_even = 0,count_odd = 0,y = 0;
        f(list,x,count_even,count_odd,j,m,n);
    }
    return 0;
}
f(int list[],int x,int y,int count_even,int count_odd,int j,int m,int n){
    int output[10];
    for (int i = count_even; i < m && x < j && y < n-j; i++)
    {
        if (list[i] == 0)
        {
            break;
        }
        else if (list[i] % 2 == 0)
        {
            output[x] = list[i];
            x += 1;
            count_even = i+1;
        }
        else{
            output[y] = list[i];
            y += 1;
            count_odd = i+1;
        }
    }
    
}