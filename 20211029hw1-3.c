#include<stdio.h>

int main(){
    int m,n,seat[20],no[20],z,y;
    char a[20];
    scanf("%d",&m);
    for (int j = 0; j < m; j++)
    {
        scanf("%d",&n);
        int x = 1;
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d",&seat[i],&no[i]);
            if (no[i]%n+x > n) 
            { 
                y = no[i]%n+x-n; 
            } 
            else 
            { 
                y = no[i]%n+x; 
            } 
            if (x-(no[i]%n) < 1) 
            { 
                z = x-(no[i]%n)+n; 
            } 
            else 
            { 
                z = x-(no[i]%n); 
            } 
            printf("%d\n",y); 
            printf("%d\n",z); 
            int yy = y;
            if (y != seat[i])
            {
                for (int k = yy+1; k <= seat[i]+n; k++)
                {
                    int r = 0;
                    for (int q = 0; q < n; q++)
                    {
                        if (k != seat[q] && k != seat[q]+n)
                        {
                            r += 1;
                        }
                    }
    
                    if (r == n)
                    {
                        y = k;
                    }            
                    if (y > n)
                    {
                        y -= n;
                    }
                    
                }
            }
            if (z != seat[i])
            {
                int zz = z;
                for (int k = zz-1; k >= seat[i]-n; k--)
                {
                    int r = 0;
                    for (int q = 0; q < n; q++)
                    {
                        if (k != seat[q] && k != seat[q]+n)
                        {
                            r += 1;
                        }

                    }
 
                    if (r == n-1)
                    {
                        z = k;;
                    }   
                    if (z < 0)
                    {
                        z += n;
                    }        
                }
            }
            printf("%d\n",y); 
            printf("%d\n",z);
            if (y == seat[i] && z != seat[i])
            {
                printf("%d L\n",i+1); 
            }
            else if (y != seat[i] && z == seat[i])
            {
                printf("%d R\n",i+1); 
            }
            x = seat[i];
            seat[i] = 0;    
        }
    }
    return 0;
}