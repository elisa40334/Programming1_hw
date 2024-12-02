#include<stdio.h>

int main(){
    int n;
    char ch,aa[300];
    scanf("%d",&n);
    scanf("%s",aa);
    for (int j = 0; j < n; j++)
    {
        char ch,ch1,a[300] = {'\0'},b[100] = {'\0'},x = 0,y = 0,z,qq;
        
        scanf("%c",&ch);
        while (ch != '\n')
        {
            a[x++] = ch;
            scanf("%c",&ch);
        }
        printf("a:%s\n",a);
        //  printf("x:%d\n",x);
        scanf("%c",&ch1);
        while (ch1 != '\n')
        {
            b[y++] = ch1;
            scanf("%c",&ch1);
        }
        // printf("b:%s\n",b);
        // printf("y:%d\n",y);
        // printf("x%dxx\n",x);
        for (int i = x-1; i >= -1; i--)
        {
            if(a[i] == '/' || a[i] == ':' || a[i] == '\0') {
                z = i;
                //printf("z:%d\n",z);
                break;
            }
        }
        for (int i = z; i < x; i++)
        {
            if (a[i] == '.' || a[i] == '\0')
            {
                qq = i;
                break;
            }
        }
        
        int i,k = 0;
        for (i = z+1; i <= z+y; i++)
        {
            a[i] = b[k];
            k++;
        }
        for (int p = i,q = qq;q <= x; p++,q++)
        {
            a[p] = a[q];
        }
        //printf("i:%d\n",i);
        // a[i] = '.';a[i+1] = 'c';a[i+2] = '\0';
        
        
        printf("%s\n",a);
    }
    return 0;
}