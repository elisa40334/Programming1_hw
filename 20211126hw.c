#include<stdio.h>
int row_count(int posi[][],int x,int y);
int col_count(int posi[][],int x,int y);
int slop1_count(int posi[][],int x,int y);
int slop2_count(int posi[][],int x,int y);

int main(){
    int coun = 0,posi_w[19][19] = {0},posi_b[19][19] = {0},x,y,xx[19] = {0},yy[19] = {0};
    
    while (scanf("%d,%d",&x,&y) != EOF)
    {
        int row_w,col_w,slop1_w,slop2_w,row_b,col_b,slop1_b,slop2_b;
        coun += 1;
        if (coun % 2 == 0)
        {
            posi_w[x][y] = 1;
            row_w = row_count(posi_w,x,y);
            col_w = col_count(posi_w,x,y);
            slop1_w = slop1_count(posi_w,x,y);
            slop2_w = slop2_count(posi_w,x,y);
        }
        else{
            posi_b[x][y] = 1;
            row_b = row_count(posi_b,x,y);
            col_b = col_count(posi_b,x,y);
            slop1_b = slop1_count(posi_b,x,y);
            slop2_b = slop2_count(posi_b,x,y);
        }
        xx[x] += 1;
        yy[y] += 1;
        //*printf("%d:%d %d:%d\n",x,xx[x],y,yy[y]);
    }
    return 0;
}
int row_count(int posi[][],int x,int y){
    int d;
    for (int i = x-1; posi[i][y] == 1 && i >= 0;i--)
    {
        d += 1;
    }
    for (int i = x+1; posi[i][y] == 1 && i < 19;i++)
    {
        d += 1;
    }
    return d;
}