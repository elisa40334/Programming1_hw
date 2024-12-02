#include<stdio.h>
#include<stdlib.h>
int smallest;
int d[1001][1001];
void fu(int k,int x,int n,int total,int jj);

int main(){
    int m,n,k,solder[1000];
    
    int f[11][1001];
    int r[11][1001];

    scanf("%d",&m);
    for (int p = 0; p < m; p++)
    {
        scanf("%d%d",&n,&k);
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&solder[i]);
        }
        for (int i = 0; i < n; ++i){
            for (int j = i+1; j < n; ++j)
            {
                int mm = (i+j)/2;    // 聯絡站位於中位數
                d[i][j] = 0;        // 聯絡距離的總和
                for (int q = i; q <= j; ++q){
                    d[i][j] += abs(solder[q] - solder[mm]);
                }
            }
        }
        if (k == 1)
        {
            printf("%d\n",d[0][n-1]);
        }
        
        // for (int i = 0; i < n; i++)
        // {
        //     printf("d[0][%d] = %d",i,d[0][i]);
        // }
        else
        {
            int total;
            smallest = 1000;
            for (int i = 1; i < n; i++)
            {
                int x = k;
                total = d[0][i];
                x -= 1;
                //printf("%d,,,",total);
                fu(k,x,n,total,i);
            }
            printf("%d",smallest);
        }
        
    }
    
}

void fu(int k,int x,int n,int total,int jj){

    if (x == 0)
    {
        if (smallest > total)
        {
            smallest = total;
        }
    }
    else if (x == 1)
    {
       
        total += d[jj+1][n];
        x -= 1;
        printf("%d,,,",total);
        fu(k,x,n,total,jj);

    }
    
    else
    {
        for (int i = jj+1; i < n; i++)
       {
           total += d[jj+1][i];
           x -= 1;
           //printf("%d,,,",total);
           fu(k,x,n,total,i);
       }
    }
   // printf("\n");
}