#include<stdio.h>
#include<stdlib.h>
long long a[31624][31624];
int x = 1;

int main(){
    a[15812][15812] = 1;
    int n,s1,s2,d1,d2;
    long long s,d;
    for (int i = 15811,j = 2; i >= 0; i--,j += 2)
    {
        for (int p = i+j/2; p <= i+j; p++)
        {
            x += 1;
            a[p][i] = x;
        }
        for (int p = i; p <= i+j; p++)
        {
            x += 1;
            a[i+j][p] = x;
        }
        for (int p = i+j; p >= i; p--)
        {
            x += 1;
            a[p][i+j] = x;
        }
        for (int p = i; p <= i+j/2-1; p++)
        {
            x += 1;
            a[p][i] = x;
        }
    }
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld  %lld",&s,&d);

        for (int p = 0; p < 31624; p++)
        {
            for (int q = 0; q < 31624; q++)
            {
                if (a[p][q] == s)
                {
                    s1 = q;
                    s2 = p;
                }
                else if (a[p][q] == d)
                {
                    d1 = q;
                    d2 = p;
                }
            }
            
        }

        int ans;
        ans = abs(s1-d1)+abs(s2-d2);

        printf("%d\n",ans);
    }
    
    
    
    
}