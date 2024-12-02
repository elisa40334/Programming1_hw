#include<stdio.h>    
#include<stdlib.h>    
void cal(long int x,long int y,long int n);    
    
int main(){    
    long int x,y,n;  
    while (scanf("%ld%ld",&x,&y) != EOF)  
    {  
        n = labs(x)+labs(y);    
        cal(x,y,n);  
    }    
}    
    
void cal(long int x,long int y,long int n){    
    long int fei[100000],j = 0,k,p,q;    
    fei[0] = 0;    
    fei[1] = 1;    
    for (int i = 2; n > k; i++)    
    {    
        fei[i] = fei[i-1]+fei[i-2];    
        k = fei[i];    
        j = i;    
    }       
    p =  labs(labs(y)-fei[j-1]+labs(x));    
    q = labs(labs(y)-fei[j]+labs(x)); 
    printf("%ld\n",j);
    printf("%ld\n",fei[j]);    
    if (p < q)    
    {    
        printf("%ld\n",p);    
    }    
    else{    
        printf("%ld\n",q);    
    }    
}  