#include<stdio.h>

int main(){
    long long fei[1000001],j = 0,n = 20000000000,k;   
    fei[0] = 0;   
    fei[1] = 1;   
    for (int i = 2; n > k; i++)   
    {   
        fei[i] = fei[i-1]+fei[i-2];   
        k = fei[i];   
        j = i;   
    }     
    printf("%lld\n",fei[j]);
    printf("%lld",j);
}