#include<stdio.h>

int main(){
    char a[10004];
    while (fgets(a, 10000, stdin) != 0)
    {
        for (int i = 0; i <= 10000 && a[i] != '\0'; i++)
        {
            if ((a[i] == 'm' || a[i] == 'M') && a[i+1] == 'y' && (a[i-1] < 'A' || (a[i-1] > 'Z' && a[i-1] < 'a') || a[i-1] > 'z') && (a[i+2] < 'A' || (a[i+2] > 'Z' && a[i+2] < 'a') || a[i+2] > 'z'))
            {
                for (int j = 10003; j >= i+4; j--)
                {
                    if (a[j-3] != '\0')
                    {
                        a[j] = a[j-2];
                    }
                }
                if(a[i] == 'm')a[i] = 'y';
                else a[i] = 'Y';
                a[i+1] = 'o';
                a[i+2] = 'u';
                a[i+3] = 'r';
            }
        }
        printf("%s",a);
    }
}