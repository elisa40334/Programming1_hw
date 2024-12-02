#include<stdio.h>
int final[10];
void f(int even[],int odd[],int n,int ee,int oo,int ecount,int ocount,int x,int total);

int main(){
    int m,n,a[10],odd[10],even[10],ocount = 0,ecount = 0,onum,evnum,o = 0,e = 1;
    scanf("%d%d",&m,&n);
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < m; i++)
    {
        if (a[i]%2 == 0)
        {
            even[ecount] = a[i];
            ecount += 1;
        }
        else{
            odd[ocount] = a[i];
            ocount += 1;
        }
    }
    
    onum = n/2;
    evnum = n - onum;
    //printf("evnum%d\n",evnum);
    for (int i = evnum; i <= n; i++)
    {
        int x = 0,oo = 0,ee = 0;
        printf("i%d\n",i);
        f(even,odd,i,ee,oo,ecount,ocount,x,n);
    }
    
}

void f(int even[],int odd[],int n,int ee,int oo,int ecount,int ocount,int x,int total){
   if (x < total)
   {
       if (x < n)
       {
           //printf("n:%d\n",n);
           int e = ee;
           for (int i = ee; i <= ecount; i++)
            {
                final[x] = even[i];
                ee += 1;
                //printf("final[%d]:%d\n",x,final[x]);
                printf("e\n");
                x += 1;
                //printf("x:%d\n",x);
                printf("e:%d\n",e);
                f(even,odd,i,ee,oo,ecount,ocount,x,total);
                x -= 1;
            } 
       }
       
       else
       {
           int o = oo;
           for (int i = oo; i <= ocount; i++)
            {
                final[x] = odd[i];
                oo += 1;
                //printf("final[%d]:%d\n",x,final[x]);
                printf("o\n");
                x += 1;
                f(even,odd,i,ee,oo,ecount,ocount,x,total);
                x -= 1;
            } 
            
       }
       
   }
   else
   {
       for (int i = 0; i < total; i++)
       {
           printf("%d",final[i]);
           if (i < total-1)printf(",");  
           else printf("\n");
       }
       
   }   
}