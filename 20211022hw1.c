#include<stdio.h>

int main(){
    int n,a,b,p[100] = {0},i,x;
    while (scanf("%d",&n) != EOF)
    {
        scanf("%d%d",&a,&b);
        
        while (scanf("%d",&x) != EOF)
        {
            for (i = a; i <= b; i++)
            {
                if (x == i)
                {
                    p[i]+=1;
                }
            }
        }
        for (i = a; i <= b; i++)
        {
            printf("%d appears %d times\n",i,p[i]);
        }
        
        
    }
    return 0;
}