#include<stdio.h> 
#include<math.h> 
struct point { 
   float x,y; 
}; 
struct circle { 
  struct point center; 
  float radius; 
}; 
float distance(struct point pt1,struct point pt2){ 
    float x;
    x = sqrt(pow(pt1.x-pt2.x,2)+pow(pt1.y-pt2.y,2));
    return x; 
} 
int in_circle(struct point pt,struct circle c,float epsilon){ 
    float x = distance(pt,c.center); 
    
    if (x-c.radius > 1.0E-5) 
    { 
        return -1; 
    } 
    else if (1.0E-5 < c.radius-x) 
    { 
        return 1; 
    } 
    return 0; 
     
} 
struct point input_point() 
{ 
     struct point p; 
     scanf("%f%f",&p.x,&p.y); 
     return p; 
} 
struct circle input_circle(){ 
    struct circle cc; 
    scanf("%f%f%f",&cc.center.x,&cc.center.y,&cc.radius); 
    return cc; 
} 
int main() 
{ 
      int n,i; 
      struct circle c; 
      scanf("%d",&n); 
      c = input_circle(); 
      for(i = 0; i < n; ++i) { 
            printf("%d\n",in_circle(input_point(),c,1e-5)); 
      } 
      return 0; 
}  