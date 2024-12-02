#include<stdio.h>
#include<stdlib.h>

int main(){
    long long n,a[3001],p,x,b[3000],q = 0;
    
    while (scanf("%lld",&n) != EOF)
    {
        p = 0;
        x = 0;
        int i = 0;
        while (i < n)
        {
            if (scanf("%lld",&a[i]) == EOF)
            {
                i = n;
            }
            else
            {
                i += 1;
            }
        }
        for (int t = n-1; t > 0; t--)
        {
            b[t] = labs(a[t]-a[t-1]);
            
        }
        
        for (int k = 1; k <= n; k++)
        {
            for (int j = 0; j < n; j++)
            {
                if (labs(b[j]-k) == 0)
                {
                    p += 1;
                }
                else
                {
                    p += 0;
                }
            }
            
        }
        printf("%lld",p);
        printf("%d",i);
        if (p != n-1 || i != n)
        {
            printf("Not jolly\n");
        }
        else{
            printf("Jolly\n");
        }
    }
    return 0;
}