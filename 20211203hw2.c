#include<stdio.h>  
#include<stdlib.h>  
int cap[10];  
int smallestptrqq;  
void f(int m,int n,int k,int solder[],int x,int j,int y);  
  
int main(){  
    int m,n,k;  
    scanf("%d",&m);  
    for (int q = 0; q < m; q++)  
    {  
        int solder[1000],small[1000];  
        scanf("%d%d",&n,&k);  
        for (int i = 0; i < n; i++)  
        {  
            scanf("%d",&solder[i]);  
        }  
        int x = 0,j = -1,y = 0;  
        for (int i = 0; i < n; i++)  
        {  
            small[i] = abs(solder[i] - solder[0]);  
            for (int p = 1; p < k; p++)  
            {  
                if (small[i] > abs(solder[i] - solder[p]))  
                {  
                    small[i] = abs(solder[i] - solder[0]);  
                }  
            }  
            smallestptrqq = 0;  
            for (int p = 0; p < n; p++)  
            {  
                smallestptrqq += small[p];  
            }  
        }  
        f(m,n,k,solder,x,j,y);  
        printf("%d\n",smallestptrqq);  
    }  
      
}  
void f(int m,int n,int k,int solder[],int x,int j,int y){  
    int small[1000];  
    if (x < k-1)  
    {  
        for (int i = j+1; i < n; i++)  
        {  
            cap[x] = solder[i];  
            x += 1;  
            f(m,n,k,solder,x,i,y);  
            x -= 1;  
        }  
    }  
    else if (x == k-1)  
    {  
        for (int i = j+1; i < n; i++)  
        {  
            cap[x] = solder[i];  
            for (int q = 0; q < n; q++)  
            {  
                small[q] = abs(solder[q] - cap[0]);  
                for (int p = 1; p < k; p++)  
                {  
                    if (small[q] > abs(solder[q] - cap[p]))  
                    {  
                        small[q] = abs(solder[q] - cap[p]);  
                    }  
                }  
            }  
            int smallest = 0;  
            for (int q = 0; q < n; q++)  
            {  
                smallest += small[q];  
            }  
            if (smallest < smallestptrqq)  
            {  
                smallestptrqq = smallest;  
            }  
        }  
    }  
}  