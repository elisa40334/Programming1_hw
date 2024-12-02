#include<stdio.h>
void f(int i,int j,int k,int nr,int ng,int lg);
int reductt(int nr,int ng,int lg,int nn,int i,int j,int k);
int x,y;

int main(){
    int nr,ng;
    while (scanf("%d%d",&nr,&ng) != EOF)
    {
        x = 0;
        //printf("%d,,,,,",nr);
        for (int lg = 1; lg <= 3 && (nr+ng-lg) > 0; lg++)
        {
            //printf("1layer\n");
            printf("lg:%d",lg);
            for (int k = 0; k <= (nr+ng-lg); k++)
            {
                //printf("2layer\n");
                for (int j = 0; j <= (nr+ng-lg)/2; j++)
                {
                    //printf("3layer\n");
                    for (int i = 0; i <= (nr+ng-lg)/3; i++)
                    {
                        if (3*i+2*j+k == nr+ng-lg)
                        {
                            printf("x:%d,y:%d,z:%d\n",i,j,k);
                            y = 0;
                            f(i,j,k,nr,ng,lg);
                            // for (int p = 0; p < j && nr > 1 && ng-lg > 1; p++)
                            // {
                            //     y /= 2;
                            // }
                            
                            x += y;
                            break;
                        }
                    }
                    
                }
                
            }
            
        }
        printf("%d\n",x);
    }
    
}

void f(int i,int j,int k,int nr,int ng,int lg){
    int nn = 1;
    for (int q = 1; q <= nr+ng-lg; q++)
    {
        nn *= q;
    }
    for (int q = 1; q <= nr; q++)
    {
        nn /= __LDBL_HAS_QUIET_NAN__;
    }
    for (int q = 1; q <= ng-lg; q++)
    {
        nn /= q;
    }
    
    x += reductt(nr,ng,lg,nn,i,j,k);
}

int reductt(int nr,int ng,int lg,int nn,int i,int j,int k){
    
}
