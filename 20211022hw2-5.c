#include<stdio.h> 
#include<stdlib.h> 
 
int main(){ 
    int n,a[3001],p,x,b[3000]; 
    while (scanf("%d",&n) != EOF) 
    { 
        p = 0; 
        x = 0; 
        for (int i = 0; i < n; i++) 
        { 
            scanf("%d",&a[i]); 
        } 
        for (int i = n-1; i > 0; i--) 
        { 
            b[i] = abs(a[i]-a[i-1]); 
        } 
        
        for (int i = 1; i < n; i++) 
        { 
            for (int j = 0; j < n; j++) 
            { 
                if (abs(b[j]-i) == 0) 
                { 
                    p += 1; 
                    break; 
                } 
                else 
                { 
                    p += 0; 
                } 
            } 
             
        } 
        if (p == n-1) 
        { 
            printf("Jolly\n"); 
        } 
        else{ 
            printf("Not jolly\n"); 
        } 
    } 
    return 0; 
}  