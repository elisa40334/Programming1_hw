#include<stdio.h>

int main(){
    int coun = 0,posi_w[19][19] = {0},posi_b[19][19] = {0},x,y,xx[19] = {0},yy[19] = {0};
    
    while (scanf("%d,%d",&x,&y) != EOF)
    {
        int row_w = 1,col_w = 1,slop1_w = 1,slop2_w = 1,row_b = 1,col_b = 1,slop1_b = 1,slop2_b = 1;
        coun += 1;
        xx[x] += 1;
        yy[y] += 1;
        printf("%d:%d %d:%d\n",x,xx[x],y,yy[y]);
        if (coun % 2 == 0){
            posi_w[x][y] = 1;
            for (int i = x-1; posi_w[i][y] == 1 && i >= 0;i--){row_w += 1;}
            for (int i = x+1; posi_w[i][y] == 1 && i < 19;i++){row_w += 1;}
            for (int i = y-1; posi_w[x][i] == 1 && i >= 0;i--)col_w += 1;
            for (int i = y+1; posi_w[x][i] == 1 && i < 19;i++)col_w += 1;
            for (int i = x-1,j = y-1; posi_w[i][j] == 1 && i >= 0;i--,j--)slop1_w += 1;
            for (int i = x+1,j = y+1; posi_w[i][j] == 1 && i < 19;i++,j++)slop1_w += 1;
            for (int i = x-1,j = y+1; posi_w[i][j] == 1 && i >= 0;i--,j++)slop2_b += 1;
            for (int i = x+1,j = y-1; posi_w[i][j] == 1 && i >= 0;i++,j--)slop2_b += 1;
        }
        else{
            posi_b[x][y] = 1;
            for (int i = x-1; posi_b[i][y] == 1 && i >= 0;i--)row_b += 1;
            for (int i = x+1; posi_b[i][y] == 1 && i < 19;i++)row_b += 1;
            for (int i = y-1; posi_b[x][i] == 1 && i >= 0;i--)col_b += 1;
            for (int i = y+1; posi_b[x][i] == 1 && i < 19;i++)col_b += 1;
            for (int i = x-1,j = y-1; posi_b[i][j] == 1 && i >= 0;i--,j--)slop1_b += 1;
            for (int i = x+1,j = y+1; posi_b[i][j] == 1 && i < 19;i++,j++)slop1_b += 1;
            for (int i = x-1,j = y+1; posi_b[i][j] == 1 && i >= 0;i--,j++)slop2_b += 1;
            for (int i = x+1,j = y-1; posi_b[i][j] == 1 && i >= 0;i++,j--)slop2_b += 1;
        }
        if (row_w == 5 || col_w == 5 || slop1_w == 5 || slop2_w == 5)
        {
            printf("white\n");
            break;
        }  
        else if (row_b == 5 || col_b == 5 || slop1_b == 5 || slop2_b == 5)
        {
            printf("black\n");
            break;
        } 
    }
    return 0;
}
