#include<stdio.h>
f(int solder[],int n,int k,int x,int q);
int cap[10];

int main(){
    int m,n,k;
    scanf("%d",&m);
    for (int q = 0; q < m; q++)
    {
        int solder[10],smallest[10],biggest,smallone;
        scanf("%d%d",&n,&k);
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&solder[i]);
        }
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (solder[i] > solder[j])
                {
                    int temp = solder[i];
                    solder[i] = solder[j];
                    solder[j] = temp;
                }
            }
        }
        int x = 0,q = -1;
        f(solder,n,k,x,q);
    } 
}

f(int solder[],int n,int k,int x,int q){
    int miner[10];
    x += 1;
    for (int i = q+1; i < n,x <= k; i++)
    {
        cap[x-1] = solder[i];
        if (x != k)
        {
            f(solder,n,k,x,i);
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                miner[j] = abs(solder[j] - cap[0]);
                for (int p = 1; p < k; p++)
                {
                    if (miner[j] > abs(solder[j] - cap[p]))
                    {
                        miner[j] = abs(solder[j] - cap[p]);
                    }
                }
            }
            int x = 0;
            for (int j = 0; j < n; j++)
            {
                x += miner[j];
            }
            
        }
    }
    
}