#include<stdio.h>
#include<math.h>
void cal(int kg[],int n,int a);

int main(){
    int n,kg[1000],a = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d",&kg[i]);
    } 
    cal (kg,n,a);
}

void cal(int kg[],int n,int a){
    int x;
    float y,z;
    if (n == 1){
        printf("%d\n",a);
    }
    else{
        y = 0;
        z = 0;
        for (int i = a; i < a+floor(n/2); i++){
            y += kg[i];
        }
        for (int i = a+floor(n/2); i < a+n; i++){
            z += kg[i];
        }
        y /= (floor(n/2));
        z /= (n-floor(n/2));

        if (y < z){
            a = a+floor(n/2);
            n = floor(n/2)+1;
        }
        else{
            n /= 2;
        }
        cal(kg,n,a);
    }
}