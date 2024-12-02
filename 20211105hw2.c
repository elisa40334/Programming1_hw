#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void cal(int n,int x,int y);

int main(){
    int x,y,n;
    scanf("%d%d",&x,&y);
    n = abs(x)+abs(y);
    cal(n,x,y);
}
void cal(int n,int x,int y){
    int fei[1000],j,k;
    float p,q;
    fei[0] = 0;
    fei[1] = 1;
    for (int i = 2; n > k; i++)
    {
        fei[i] = fei[i-1]+fei[i-2];
        k = fei[i];
        j = i;
    }
    if (fei[j]/2 != floor(fei[j]/2))
    {
        p = ;
    }
    else
    {
        p = sqrt(pow((floor(fei[j]/2)-abs(x)),2)+pow(ceil((fei[j]/2)-abs(y)),2));
    }
    if (fei[j-1]/2 != floor(fei[j-1]/2))
    {
        q = sqrt((fei[j-1]-abs(x))*2);
    }
    else
    {
        q = sqrt(pow((floor(fei[j-1]/2)-abs(x)),2)+pow((floor(fei[j-1]/2)-abs(y)+1),2));
    }
    if (p > q)
    {
        printf("%f\n",q);
    }
    else
    {
        printf("%f\n",p);
    }
    
        
    
        
   
    
}