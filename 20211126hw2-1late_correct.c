#include<stdio.h>
void f1(int even[],int i,int n,int x,int ee,int oo,int odd[]);
int list[10],ecount,ocount;

int main(){
    int n,m,even[10],odd[10],x;
    ecount = -1,ocount = -1;
    scanf("%d%d",&m,&n);
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&x);
        if (x % 2 == 0)even[++ecount] = x;
        else odd[++ocount] = x;
    }
    //printf("%d\n%d\n",ecount,ocount);
    // for (int i = 0; i <= ecount; i++)
    // {
    //     printf("%d\n",even[i]);
    // }
    for (int i = n/2; i >= 0; i--)
    {
        //printf("i:%d\n",i);
        int x = 0,ee = 0,oo = 0;
        f1(even,n-i,n,x,ee,oo,odd);
    }
}
void f1(int even[],int t,int n,int x,int ee,int oo,int odd[]){
    //printf("x:%d\n",x);
    if (x < t)
    {
        int e = ee;
        // printf("y:%d\n",y);
        // printf("ecount:%d\n",ecount);
        for (int i = e; i <= ecount; i++)
        {
            list[x] = even[i];
            //printf("list[%d]%d\n",x,list[x]);
            ee += 1;
            x += 1;
            f1(even,t,n,x,ee,oo,odd);
            x -= 1;
        }
    }
    else if (x >= t && x < n)
    {
        int o = oo;
        // printf("y:%d\n",y);
        //printf("ocount:%d\n",ocount);
        for (int i = o; i <= ocount; i++)
        {
            list[x] = odd[i];
            //printf("list[%d]%d\n",x,list[x]);
            oo += 1;
            x += 1;
            f1(even,t,n,x,ee,oo,odd);
            x -= 1;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d",list[i]);
            if (i != n-1)printf(",");
            else printf("\n");
        }   
    }
}