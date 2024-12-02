#include<stdio.h>
void even_list(int list[],int m,int n,int even,int j,int even_count,int x);
void odd_list(int list[],int m,int n,int even,int j,int odd_count,int x,int output[]);

int main(){
    int n,m,list[10];
    scanf("%d",&m);
    scanf("%d",&n);

    for (int i = 0; i < m; i++)
    {
        scanf("%d",&list[i]);
    }
    int odd = n/2;
    int even = n-odd;
    for (int j = even; j <= n; j++)
    {
        int even_count = 0,x = 0;
        even_list(list,m,n,even,j,even_count,x);
    }
    
}

void even_list(int list[],int m,int n,int even,int j,int even_count,int x){
    int output[10];
    for (int i = even_count; i < m; i++)
    {
        if (list[i] % 2 == 0)
        {
            output[x] = list[i];
            x += 1;
            even_count = i+1;
            if (x == j || even_count == m)
            {
                return 0;
            }
        }
        int odd_count = 0;
        odd_list(list,m,n,even,j,odd_count,x,output);   
    } 
}

void odd_list(int list[],int m,int n,int even,int j,int odd_count,int x,int output[]){
    for (int i = odd_count; i < m; i++)
    {
        if (list[i] % 2 == 1)
        {
            output[x] = list[i];
            x += 1;
            odd_count = i+1;
        }
        if (x == n || odd_count == m)
        {
            return 0;
        }
    }
    for (int i = n; i < count; i++)
    {
        /* code */
    }
    
}