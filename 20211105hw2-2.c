#include<stdio.h>   
#include<stdlib.h>   
void cal(long long x,long long y,long long n);   
   
int main(){   
    long long x,y,n; 
    while (scanf("%lld%lld",&x,&y) != EOF) 
    { 
        n = llabs(x)+llabs(y);   
        cal(x,y,n); 
    }   
}   
   
void cal(long long x,long long y,long long n){   
    long long fei[100],j = 0,k = 0,p,q;   
    fei[0] = 0;   
    fei[1] = 1;   
    for (int i = 2; n > k; i++)   
    {   
        fei[i] = fei[i-1]+fei[i-2];   
        k = fei[i];   
        j = i;   
    }     
    p =  llabs(llabs(y)-fei[j-1]+llabs(x));   
    q = llabs(llabs(y)-fei[j]+llabs(x));   
    if (p < q)   
    {   
        printf("%lld\n",p);   
    }   
    else{   
        printf("%lld\n",q);   
    }   
}  