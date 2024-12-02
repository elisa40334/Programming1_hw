#include<stdio.h>
int f(int b[],int n){
    int v[20001] = {0};
    if (n < 2)
    {
        return 0;
    }
    if (b[0] < 1)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (b[i] > b[j])
            {
                return 0;
            }
        }
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (v[b[i]+b[j]] == 1)
            {
                return 0;
            }
            else{
                v[b[i]+b[j]] = 1;
            }
        } 
    }
    return 1;
    
}

int main(){
    int b[100],n,time = 0;
    while (scanf("%d",&n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&b[i]);
        }
        time++;
        if (f(b,n) == 0)
        {
            printf("Case #%d: It is not a B2-Sequence.\n\n", time);
        }
        else{
            printf("Case #%d: It is a B2-Sequence.\n\n", time);
        }
    }
    return 0;
}