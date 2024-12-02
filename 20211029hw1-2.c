#include<stdio.h> 
 
int main(){ 
    int m,n,seat[20],no[20],y,z; 
    char a[20]; 
    while (scanf("%d",&m) != EOF) 
    { 
        while (scanf("%d",&n) != EOF) 
        { 
            int x = 1; 
            for (int i = 0; i < n; i++) 
            { 
                scanf("%d%d",&seat[i],&no[i]); 
                if ((no[i]-seat[i]+x)%n != 0 && (no[i]+seat[i]-x)%n != 0) 
                { 
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
                    for (int j = y+1; j < 2*n; j++) 
                    { 
                        int r = 0;
                        for (int q = 0; q < n; q++)
                        {
                            if (j != seat[i] && j != seat[i] + n)
                            {
                                r += 1;
                            }
                        }
                        if (r == n)
                        {
                            y += 1;
                        }
                    } 
                    printf("%d\n",y); 
                    for (int j = z-1; j > -n; j--) 
                    { 
                        int r = 0;
                        for (int q = 0; q < n; q++)
                        {
                            if (j != seat[i] && j != seat[i]-n)
                            {
                                r += 1;
                            }
                        }
                        if (z == seat[i]) 
                        { 
                            printf("%d R\n",i+1);  
                        } 
                        if (r == n)
                        {
                            z -= 1;
                        }
                    } 
                    printf("%d\n",z); 
                    if (y == seat[i]) 
                    { 
                        printf("%d L\n",i+1);  
                    } 
                    
                } 
                else if ((no[i]-seat[i]+x)%n == 0 && (no[i]+seat[i]-x)%n != 0) 
                { 
                    printf("%d L\n",i+1);  
                } 
                else if ((no[i]-seat[i]+x)%n != 0 && (no[i]+seat[i]-x)%n == 0) 
                { 
                    printf("%d R\n",i+1);  
                } 
                x = seat[i]; 
                seat[i] = 0;    
            } 
            
        } 
         
    } 
    return 0; 
}  