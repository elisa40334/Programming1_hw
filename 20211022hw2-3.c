#include<stdio.h>

int main(){
    int n,a[n],tmp,p;
    while (scanf("%d",&n) != EOF)
    {
        for(int i = 0; i < n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0 ; i<n ; i=i+1 )
        {
            for(int j=i+1 ; j<n ; j=j+1 )
            {
                if( a[i] > a[j] )
                {
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
        for (int i = n-1; 0 <= i; i--)
        {
            p = a[i]-a[i-1];
            if (p != 1)
            {
                printf("Not jolly\n");
                break;
            }
            else if (i == 0)
            {
                printf("Jolly\n");
            }
        }

        
    }
    return 0;
}