#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>    
void f(char a[]);  
  
int main() {  
    char a[10];  
  
    if (scanf("%s", a) != EOF)  
    {  
        f(a); 
    }  
}  
void f(char a[]) {  
    char b[10];  
  
    if (a[0] == 'm' && a[1] == 'y' && a[2] == '\0')  
    {  
        printf("your");  
    }  
    else if (a[0] == 'M' && a[1] == 'y' && a[2] == '\0')  
    {  
        printf("Your");  
    } 
    else if (a[0] == ',' && a[1] == 'm' && a[2] == 'y' && a[3] == '\0')
    {
        printf(",your");
    }
    else if (a[0] == 'm' && a[1] == 'y' && a[2] == '.')  
    {  
        printf("your.");  
    }
    else if (a[0] == 'm' && a[1] == 'y' && a[2] == ',')  
    {  
        printf("your,");  
    } 
    else if (a[0] == ',' && a[1] == 'm' && a[2] == 'y' && a[3] == '.')
    {
        printf(",your.");
    }
    else  
    {  
        printf("%s", a);  
    }  
    if (scanf("%s", b) != EOF)  
    {  
        printf(" ");  
        f(b);  
    }  
    else
    {
        printf("\n"); 
    }
}  