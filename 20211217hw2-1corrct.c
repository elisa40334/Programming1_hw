#include<stdio.h>
#include<stdlib.h>
struct pointer{
    int x,y;
};
int f(long long x);
struct pointer f1(int ss,long long s){
    struct pointer sxy;  
    int  k = s-ss*ss;
    int d = (ss+3)/2;
    if (s <= ss*ss+d)
    {
        sxy.x = s-ss*ss-1;
        sxy.y = -d+1;
        return sxy;
    }
    else if (s > ss*ss+d && s <= ss*ss+d+2*(d-1))
    {
        sxy.x = d-1;
        sxy.y = -d+s-ss*ss-d+1;
        return sxy;
    }
    else if (s > ss*ss+d+2*(d-1) && s <= ss*ss+d+4*(d-1))
    {
        sxy.x = d-s+(ss*ss+d+2*(d-1))-1;
        sxy.y = d-1;
        return sxy;
    }
    else if (s > ss*ss+d+4*(d-1) && s <= ss*ss+d+6*(d-1))
    {
        sxy.x = -d+1;
        sxy.y = d-1-(s-(ss*ss+d+4*(d-1)));
        return sxy;
    }
    
    sxy.x = -d+1+(s-(ss*ss+d+6*(d-1)));
    sxy.y = -d+1;
    return sxy;
}

int main(){
    int n;
    long long s,d;
    scanf("%d",&n);

    for (int p = 0; p < n; p++)
    {
        int ss,dd;
        scanf("%lld %lld",&s,&d);
        ss = f(s);
        struct pointer sxy = f1(ss,s);
        dd = f(d);
        struct pointer dxy = f1(dd,d);
        long long ans = abs(dxy.x-sxy.x)+abs(dxy.y-sxy.y);
        // printf("ss:%d,dd:%d\n",ss,dd);
        // printf("sxy:%d,%d,dxy:%d,%d\n",sxy.x,sxy.y,dxy.x,dxy.y);
        printf("%lld\n",ans);
    }
    
}

int f(long long x){
    for (int i = 1; i < 31624; i+=2)
    {
        if (i * i >= x)
        {
            return i-2;
        }
    }
    return -1;
}