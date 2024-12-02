#include<stdio.h>  
#include<stdlib.h>  
int cap[10];  
int smallestptrqq;  
int f(int m,int n,int k,int solder[],int x,int j,int y);  
  
int main(){  
    int m,n,k;  

    scanf("%d",&m); 

    for (int q = 0; q < m; q++)  
    {  
        int solder[1000],small;  

        scanf("%d%d",&n,&k);  

        for (int i = 0; i < n; i++)  
        {  
            scanf("%d",&solder[i]);  
        }  

        int x = 0,j = -1,y = 0;  

        smallestptrqq = 1000;
        int smallestptr = f(m,n,k,solder,x,j,y);
        printf("%d\n",smallestptr);  
    }  
      
}  

int f(int m,int n,int k,int solder[],int x,int j,int y){  

    int small;  
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
            int smallest = 0; 

            for (int q = 0; q < n; q++)  
            {  
                small = abs(solder[q] - cap[0]);  

                for (int p = 1; p < k; p++)  
                {  
                    if (small > abs(solder[q] - cap[p]))  
                    {  
                        small = abs(solder[q] - cap[p]);  
                    }
                }
                smallest += small;  
            }  

            if (smallest < smallestptrqq)  
            {  
                smallestptrqq = smallest;  
            }  
        }  
    } 
    return smallestptrqq; 
}  