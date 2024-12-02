#include<stdio.h>
#include<math.h>

int main(){
    int n,kg[1000],a = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&kg[i]);
    }
    int xx;
    while (n != 1)
    {
        float y = 0,z = 0;
        int x = a+floor(n/2);
        for (int i = a; i < x; i++)
        {
            y += kg[i];
        }
        for (int i = x; i < n; i++)
        {
            z += kg[i];
        }
        y = y/(x-a);
        z = z/(n-x);
        
        if (y < z)
        {
            a = x;
            if (n/2 != (int)(n/2))
            {
                n = (n/2)+1;
            }
            else
            {
                n /= 2;
            }
        }
        else 
        {
            n /= 2;
            a = 0;
        } 
        printf("%d\n",n);
        printf("%d\n",a);
        printf("%d\n",x);
    }
    printf("%d",a);
    
}