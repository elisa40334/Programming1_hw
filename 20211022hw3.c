#include<stdio.h>  
  
int main(){  
    long long n,a,b,p[1000],q[1000];  
    int r;  
    while (scanf("%lld%lld%lld",&n,&a,&b) != EOF)  
    {  
        for (int i = 0; i < n; i++)  
        {  
            scanf("%lld",&p[i]);  
        }  
        for (int i = a; i <= b; i++)  
        {  
            q[i-a] = 1;  
            for (int j = 0; j < n; j++)  
            {  
                if (i == p[j])  
                {  
                    q[i-a] += 1;  
                }  
                else  
                {  
                    q[i-a] += 0;  
                }  
            }  
        }  
        for (int i = 0; i < n; i++)  
        {  
            r = 0;  
            for (int j = 0; j < n; j++)  
            {  
                if (q[i] >= q[j])  
                {  
                    r += 1;  
                }  
            }  
            if (r == n)  
            {  
                printf("%lld appears %lld times\n",p[i],q[i]-1);  
            }     
        }  
    }  
      
    return 0;  
}  