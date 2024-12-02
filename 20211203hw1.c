#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,n,k;
    scanf("%d",&m);
    for (int j = 0; j < m; j++)
    {
        int solder[10],miner[10] = {0},cap[3],fiminer[10] = {0};
        scanf("%d%d",&n,&k);
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&solder[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int q = 0; q < n; q++)
            {
                miner[i] += abs(solder[i] - solder[q]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            for (int q = 0; q < n; q++)
            {
                if (miner[i] <= miner[q])
                {
                    x += 1;
                }
            }
            if (x == n)
            {
                cap[0] = i;
            }
            else if (x == n-1)
            {
                cap[1] = i;
            }
            else if (x == n-2)
            {
                cap[2] = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            fiminer[i] =abs(cap[0]-solder[i]);
            for (int q = 1; q < k; q++)
            {
                if(fiminer[i] > abs(cap[q]-solder[i])){
                    fiminer[i] = abs(cap[q]-solder[i]);
                }
            }
        }
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            y += fiminer[i];
        }
        printf("%d",y);
    }
    
}