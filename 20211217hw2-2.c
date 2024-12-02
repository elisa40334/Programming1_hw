#include<stdio.h>
#include<stdlib.h>
struct point{
    int x,y;
};
int f(long s);
long long x(int ss,long long s){
    struct point sxy;  
    int  k = s-ss*ss;
    int d = (ss+3)/2;
    if (s <= ss*ss+d-1)
    {
        sxy.x = 15812+k-1;
        sxy.y = 15812;
        return sxy.x;
    }
    else if (s > ss*ss+d-1 && s <= ss*ss+d+ss+1)
    {
        sxy.x = 15812+d;
        sxy.y = 15812-d+s-ss*ss-d+1;
        return sxy.x;
    }
    else if (s > ss*ss+d+ss+1 && s <= ss*ss+d+ss*2+2)
    {
        sxy.x = 15812-s+ss*ss+d+ss+1;
        sxy.y = 15812+d;
        return sxy.x;
    }

    sxy.x = 15812-d+s-(ss*ss+d+3*ss+3);
    sxy.y = 15812-d+s-ss*ss-d+1;
    return sxy.x;
    
}
long long y(int ss,long long s){
    struct point sxy;  
    int  k = s-ss*ss;
    int d = (ss+3)/2;
    if (s <= ss*ss+d-1)
    {
        sxy.x = 15812+k-1;
        sxy.y = 15812;
        return sxy.y;
    }
    else if (s > ss*ss+d-1 && s <= ss*ss+d+ss+1)
    {
        sxy.x = 15812+d;
        sxy.y = 15812-d+s-ss*ss-d+1;
        return sxy.y;
    }
    else if (s > ss*ss+d+ss+1 && s <= ss*ss+d+ss*2+2)
    {
        sxy.x = 15812-s+ss*ss+d+ss+1;
        sxy.y = 15812+d;
        return sxy.y;
    }

    sxy.x = 15812-d+s-(ss*ss+d+3*ss+3);
    sxy.y = 15812-d+s-ss*ss-d+1;
    return sxy.y;
    
}

struct point{
    int x,y;
};


int main(){
    int n;
    long long s,d;
    scanf("%d",&n);

    for (int p = 0; p < n; p++)
    {
        int ss,dd;
        scanf("%lld %lld",&s,&d);
        ss = f(s);
        long long sx = x(ss,s);
        long long sy = y(ss,s);
        dd = f(d);
        long long dx = x(dd,d);
        long long dy = y(dd,d);
        long long ans = llabs(sx-dx)+llabs(dy-sy);
        printf("%lld\n",ans);
    }
    
}

int f(long x){
    for (int i = 1; i < 31624; i+=2)
    {
        if (i * i >= x)
        {
            return x-1;
        }
        
    }
    return -1;
    
}