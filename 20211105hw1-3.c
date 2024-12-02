#include<stdio.h>
#include<math.h>
void cal(int kg[],int n,int a);

int main(){
    int n,kg[1000],a = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&kg[i]);
    } 
    cal(kg,n,a);
    return 0;
}

void cal(int kg[],int n,int a){
    if (n == 1)
    {
        printf("%d",a);
    }
    else
    {
        int y = 0,z = 0,yy,zz;
        for (int i = a; i < a+floor(n/2); i++)
        {
            y += kg[i];
        }
        for (int i = a+floor(n/2); i < n; i++)
        {
            z += kg[i];
        }
        yy = y/floor(n/2);
        zz = 
    }
    
}