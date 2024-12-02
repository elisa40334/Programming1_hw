#include<stdio.h>

int main(){
    int n,x,y,z,bb,qq;
    char a[300],b[300],c[300];

    scanf("%d",&n);
    for (int j = 0; j < n; j++)
    {
        scanf("%s",a);
        //printf("aa:%s\n",a);
        scanf("%s",b);
        //printf("bb:%s\n",b);
        for (int i = 0; i < 300; i++)
        {
            if (a[i] == '\0')
            {
                x = i;
                break;
            }
        }
        for (qq = x-1; qq >= 0; qq--)
        {
            if (a[qq] == '/' || a[qq] == ':')
            {
                y = qq;
                break;
            }
        }
        if(qq == -1)a[0] = '\0';
        else a[y+1] = '\0';
        //printf("a:%s\n",a);
        for (int i = y+1; i <= x; i++)
        {
            if (a[i] == '.' || a[i] == '\0')
            {
                z = i;
                break;
            }
        }
        for (int i = z,q = 0; i <= x; i++,q++)
        {
            c[q] = a[i];
        }
        //printf("cc:%s\n",c);
        for (int i = 0; i < 300; i++)
        {
            if (b[i] == '\0')
            {
                bb = i;
                break;
            }
        }
        
        printf("%s%s%s\n",a,b,c);
    }
    
}