#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,n,k;
    scanf("%d",&m);
    for (int j = 0; j < m; j++)
    {
        int solder[10],small,cap[10],miner[10];
        scanf("%d%d",&n,&k);
        for (int i = 0; i < n; i++)
        {
            scanf("%d",solder[i]);
        }
        if (k == 1)
        {
            for (int i = 0; i < n; i++)
            {
                int x = 0;
                for (int q = 0; q < n; q++)
                {
                    x += abs(solder[i] - solder[q]);
                }
                if (i == 0)
                {
                    small = x;
                }
                else{
                    if (x < small)
                    {
                        small = x;
                    }
                }
            }
        }
        else if (k == 2)
        {
            for (int i = 0; i < n; i++)
            {
                cap[0]=solder[i];
                for (int q = i+1; q < n; q++)
                {
                    cap[1] = solder[q];
                    for (int r = 0; r < n; r++)
                    {
                        miner[r] = abs(solder[r] - cap[0]);
                        if (miner[r] > abs(solder[r] - cap[1]))
                        {
                            miner[r] = abs(solder[r] - cap[1]);
                        }
                    }
                }
                
            }
            
        }
        
        
    }
    
}