#include<stdio.h>
unsigned long long nn[21][21] = {0};

int main(){
    int nr,ng;
    
    nn[0][1] = 1,nn[0][3] = 1,nn[0][2] = 1;
    
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            for (int p = 0; p <= i; p++)
            {
                for (int q = 0; q <= j; q++)
                {
                    // printf("nn[%d][%d]:%d\n",p,q,nn[p][q]);
                    // nn[i][j] += nn[p][q];
                    if (p != i || q != j)
                    {
                        if (i+j-p-q <= 3)
                        {
                            printf("nn[%d][%d]:%llu\n",p,q,nn[p][q]);
                            nn[i][j] += nn[p][q];
                        }
                    }
                }
                
            }
            printf(",,nn[%d][%d]:%llu\n",i,j,nn[i][j]);
            
        }   
    }
    while (scanf("%d%d",&nr,&ng) != EOF){
        printf("%llu\n",nn[nr][ng]);
    }
}