#include<stdio.h>  
  
int main(){  
    int m,n,seat[20],no[20];  
    char a[20] = {'\0'};  
    while (scanf("%d",&m) != EOF)  
    {  
        while (scanf("%d",&n) != EOF)  
        {  
            int x = 1;  
            for (int i = 0; i < n; i++)  
            {  
                scanf("%d%d",&seat[i],&no[i]);  
                if ((no[i]-seat[i]+x)%n == 0 && (no[i]+seat[i]-x)%n != 0 )  
                {  
                    printf("%d L\n",i+1);  
                }  
                else if ((no[i]+seat[i]-x)%n == 0 && (no[i]-seat[i]+x)%n != 0)  
                {  
                    printf("%d R\n",i+1);  
                }  
                x = seat[i];  
            }  
        }  
    }  
    return 0;  
}  