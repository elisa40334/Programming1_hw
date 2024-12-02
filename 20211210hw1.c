#include<stdio.h>
void f(int i,int j,int k,int nr,int ng,int lg);
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
                            for (int p = 0; p < j && nr > 1 && ng-lg > 1; p++)
                            {
                                y /= 2;
                            }
                            
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
    for (int i = 1; i <= (nr+ng-lg) && i != 0; i++)
    {
        nn *= i;
    }
    printf("xf:%d\n",x);
    if (nr != 0)
    {
        if (ng-lg != 0)
        {
            y += nn/(nr*(ng-lg));
        }
        else
        {
            y += nn/(nr);
        }
    }
    else
    {
        if (ng-lg != 0)
        {
            y += nn/(ng-lg);
        }
        
    }
    
    
}