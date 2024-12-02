#include<stdio.h> 
#include<stdlib.h> 
int main(){ 
    int n,i,p[n],x,q[n],j; 
    while (scanf("%d",&n) != EOF) 
    { 
        for (i = 0; i < n; i++) 
        { 
            scanf("%d",&p[i]); 
        } 
        for (i = 0; i < (n); i++) 
        { 
            x = abs(p[i] - p[i+1]); 
            if (x < 1 || (n) < x) 
            { 
                printf("Not jolly\n");    
                break;   
            } 
             
            else{ 
                q[i] = x;            
            } 
            
            if (i == n-1)
            {
                printf("Jolly\n");  
            }
            
        } 
    } 
    return 0; 
     
     
}  