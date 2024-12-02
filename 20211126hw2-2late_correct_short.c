#include<stdio.h>
void f1(int even[],int i,int n,int ee,int oo,int odd[]);
void f2(int list[],int qq,int nn,int check,int even[],int t,int n,int ee,int oo,int odd[]);
int final[10],ecount = -1,ocount = -1,x = 0;

int main(){
    int n,m,even[10],odd[10],x;
    scanf("%d%d",&m,&n);
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&x);
        if (x % 2 == 0)even[++ecount] = x;
        else odd[++ocount] = x;
    }
    for (int i = n/2; i >= 0; i--){
        //printf("i:%d\n",i);
        int ee = 0,oo = 0;
        f1(even,n-i,n,ee,oo,odd);
    }
}
void f1(int even[],int t,int n,int ee,int oo,int odd[]){
    //printf("x:%d\n",x);
    if (x < t) f2(even,ee,ecount,0,even,t,n,ee,oo,odd);
    else if (x >= t && x < n)f2(odd,oo,ocount,1,even,t,n,ee,oo,odd);
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d",final[i]);
            if (i != n-1)printf(",");
            else printf("\n");
        }   
    }
}
void f2(int list[],int qq,int nn,int check,int even[],int t,int n,int ee,int oo,int odd[]){
    int q = qq;
    for (int i = q; i <= nn; i++)
    {
        final[x] = list[i];
        qq += 1;
        x += 1;
        if(check == 0)f1(even,t,n,qq,oo,odd);
        else f1(even,t,n,ee,qq,odd);
        x -= 1;   
    }
}