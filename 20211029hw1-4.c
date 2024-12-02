#include<stdio.h>

int main(){
    int m,n,seat[20],no[20],y,z,yy,zz;
    scanf("%d",&m);
    for (int j = 0; j < m; j++)
    {
        int x = 1;
        scanf("%d",&n);
        for (int q = 0; q < n; q++)
        {
            scanf("%d%d",&seat[q],&no[q]);
            if (no[q]%n+x > n) 
            { 
                y = no[q]%n+x-n; 
            } 
            else 
            { 
                y = no[q]%n+x; 
            } 
            if (x-(no[q]%n) < 1) 
            { 
                z = x-(no[q]%n)+n; 
            } 
            else 
            { 
                z = x-(no[q]%n); 
            } 
            printf("%d\n",y); 
            printf("%d\n",z);
            if (y != seat[q])
            {
                yy = y;
                
                for (int i = yy+1; i <= seat[q]; i++)
                {
                    int r = 0;
                    for (int k = 0; k < n; k++)
                    {
                        if (i != seat[k] && i != seat[k]+n)
                        {
                            r += 1;
                        }
                        
                    }
                    
                    if (r == n-1 || r==n)
                    {
                        y = i;
                    }
                    if (y > n)
                    {
                        y -= n;
                    }
                }
                
            }
            if (z != seat[q] )
            {
                zz = z;
                for (int i = zz-1; i >= seat[q]; i--)
                {
                    int r = 0;
                    for (int k = 0; k < n; k++)
                    {
                        if (i != seat[k] && i != seat[k]-n)
                        {
                            r += 1;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (r == n-1||r == n)
                    {
                        z = i-1;
                    }
                    if (z < 1)
                    {
                        z += n;
                    }
                }
                
            }
            printf("%d\n",y); 
            printf("%d\n",z);
            if (y == seat[q] && z != seat[q])
            {
                printf("%d L\n",q+1); 
            }
            else if (y != seat[q] && z == seat[q])
            {
                printf("%d R\n",q+1); 
            }
            x = seat[q];
            seat[q] = 0;
            
        }
    }
   return 0; 
}