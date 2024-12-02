#include<stdio.h>

int main(){
    long long n,a,b,p[1000],q[1000],x;
    int temp;
    while (scanf("%lld%lld%lld",&n,&a,&b) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%lld",&p[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (p[i] > p[j])
                {
                    temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            q[i] = 1;
            if (p[i] != 0)
            {
                for (int j = i+1; j < n; j++)
                {
                    if (p[i] == p[j])
                    {
                        q[i] += 1;
                        p[j] = 0;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            x = 0;
            for (int j = 0; j < n; j++)
            {
                if (q[i] >= q[j])
                {
                    x += 1;
                }
            }            
            if (x == n)
            {
                printf("%lld appears %lld times\n",p[i],q[i]);
            }   
        }
    }
    return 0;
}