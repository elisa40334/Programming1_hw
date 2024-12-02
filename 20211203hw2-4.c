#include<stdio.h>
#include<stdlib.h>
void fu(int k,int n,int total,int jj);
int d[1001][1001];
int smallest,x;

int main(){
    int m,n,k,solder[1000];
    scanf("%d",&m);

    for (int p = 0; p < m; p++)
    {
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
       else
       {
           for (int i = 1; i < n-k+1; i++)
           {
                smallest = 1000;
                for (int i = 1; i < n-1; i++)
                {
                    int x = k;
                    int total;
                    total = d[0][i];
                    x -= 1;
                    //printf("%d,,,",total);
                    fu(k,n,total,i);
                }
           }
           printf("%d\n",smallest);
       }
    }
    
}

void fu(int k,int n,int total,int jj){
    if (x == 0)
    {
        //printf("%d,,,\n",total);
        if (smallest > total)
        {
            smallest = total;
        }
        x += 1;
    }
    else if (x == 1)
    {
        total += d[jj+1][n-1];
        x -= 1;
        // printf("d[%d],,[%d] = %d",jj+1,n-1,total);
        // printf("%d,,,",total);
        fu(k,n,total,jj);
        x += 1;
    }
    else
    {
        for (int i = jj+1; i < n-1; i++)
        {
            total += d[jj+1][i];
            x -= 1;
            printf("d[%d][%d] = %d\n",jj+1,i,total);
            fu(k,n,total,i);
        }
    }
    
    
}
