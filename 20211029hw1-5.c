#include<stdio.h>

int main(){
    int m,n,seat[20],no[20],y,z,yy,zz;
    scanf("%d",&m);
    for (int j = 0; j < m; j++)
    {
        int x = 1;
        int rem[21] = {0};
        scanf("%d",&n);
        for (int q = 0; q < n; q++)
        {
            scanf("%d%d",&seat[q],&no[q]);
            for (int i = 0; i <= n; i++)
            {
                if (i == seat[q])
                {
                    rem[i] = 1;
                }
            }
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
            if (y != seat[q])
            {
                yy = y;
                for (int i = yy; i <= seat[q]+n; ++i)
                {
                    int ii;
                    if (i > n)
                    {
                        ii = i-n;
                    }
                    else
                    {
                        ii = i;
                    }  
                    y = ii;
                    
                    if (rem[ii] == 0 || y == seat[q])
                    {
                        break;
                    }      
                }
            }
            if (z != seat[q] )
            {
                zz = z;
                for (int i = zz; i >= seat[q]-n; --i)
                {
                  int ii;
                  if (i < 1)
                  {
                      ii = i+n;
                  }
                  else
                  {
                    ii = i;
                  }
                  z = ii;
                
                  if (rem[ii] == 0 || z == seat[q])
                  {
                      break;
                  }
                }
            }
            if (y == seat[q] && z != seat[q])
            {
                printf("%d L\n",q+1); 
            }
            else if (y != seat[q] && z == seat[q])
            {
                printf("%d R\n",q+1); 
            }
            x = seat[q];
        }
    }
   return 0; 
}