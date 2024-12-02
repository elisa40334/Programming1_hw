#include<stdio.h>
#include<stdlib.h>
int fu(int k,int n,int jj,int x);
int d[1001][1001];
int loca[10] = {-1}; 
int smallest;

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
            for (int j = i; j < n; ++j)
            {
                int mm = (i+j)/2;    // 聯絡站位於中位數
                d[i][j] = 0;        // 聯絡距離的總和
                for (int q = i; q <= j; ++q){
                    d[i][j] += abs(solder[q] - solder[mm]);
                }
     
            }
        }
        
            int x;
            x = 0;
            int i = 0;
            smallest = 1000;
            int qq = fu(k,n,i,x);
            printf("%d\n",qq);
 
    }
}

int fu(int k,int n,int jj,int x){
    if (x < k-1)
    {
        for (int i = jj+1; i < n-k+x+2; i++)
        {
            x += 1;
            loca[x] = i;
            fu(k,n,i,x);
            x -= 1;
        }
    }
    else if(x == k-1)
    {
        
        int total = 0;
        for (int ii = 0; ii < k; ii++)
        {
            if (ii == k-1)
            {
                total += d[loca[ii]+1][n-1];
            }
            else
            {
                total += d[loca[ii]+1][loca[ii+1]];    
            }
          
        }
        if (total < smallest)
        {
            smallest  = total;
        }

    }
    return smallest;
}