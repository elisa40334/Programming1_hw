#include<stdio.h>   
   
int main(){   
    int n,a[3000],p;   
    while (scanf("%d",&n) != EOF)   
    {   
        p = 0;   
        for (int i = 0; i < n; i++)   
        {   
            scanf("%d",&a[i]);   
            for (int j = 1; j < (n+1); j++)   
            {   
                if (a[i] == j)   
                {   
                    p += 1;   
                }   
                else{p+=0;}   
            }   
        }   
        if (p == n)   
        {   
            printf("Jolly\n");   
        }   
        else{   
            printf("Not jolly\n");   
        }   
    }   
       
    return 0;   
}  