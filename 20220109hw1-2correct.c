#include<stdio.h>

int main(){
    int n,ch,qq,rr,ii;
    char aa[300];

    scanf("%d",&n);
    fgets(aa,300,stdin);
    for (int  j = 0; j < n; j++)
    {
        char ch,a[300],b[300],c[300],x = 0,y = 0,z;
        
        ch = getchar();
        while (ch != '\n')
        {
            a[x] = ch;
            x++;
            ch = getchar();
            //printf("ch:%c",ch);
        }
        a[x] = '\0';
        //printf("a:%s\n",a);
        ch = getchar();
        while (ch != '\n')
        {
            b[y] = ch;
            y++;
            ch = getchar();
        }
        b[y] = '\0';
        //printf("b:%s\n",b);
        for (qq = x-1; qq >= 0; qq--)
        {
            if (a[qq] == '\\' || a[qq] == ':')
            {
                y = qq;
                break;
            }
        }
        if(qq == -1) y = -1;
        //printf("y:%d\n",y);
        for (ii = x-1; ii > y; ii--)
        {
            if (a[ii] == '.')
            {
                rr= ii;
                break;
            }
        }
        if(ii == y) rr = x;
        //printf("rr:%d\n",rr);
        for (int i = rr,q = 0; i <= x; i++,q++)
        {
            c[q] = a[i];
        }
        //printf("c:%s\n",c);
        if(qq == -1)a[0] = '\0';
        else a[y+1] = '\0';
        printf("%s%s%s\n",a,b,c);
    }
    
}