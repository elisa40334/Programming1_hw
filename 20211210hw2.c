int main(){  
    int n,t,A[120][120] = {0};  
    scanf("%d",&n);  
  
    for (int p = 0; p < n; p++)  
    {  
        scanf("%d",&t);  
        for (int i = 1; i <= t; i++)  
        {  
            for (int j = 1; j <= t; j++)  
            {  
                scanf("%1d",&A[i][j]);//這三小  
            }  
        }  
         for (int i = 0; i <= t+1; i++)  
        {  
            for (int j = 0; j <= t+1; j++)  
            {  
                if (A[i][j] == 1)  
                {  
                    if (A[i-1][j] == 0 || A[i-1][j-1] == 0 || A[i+1][j] == 0 || A[i+1][j+1] == 0 || A[i+1][j-1] == 0 || A[i-1][j+1] == 0 || A[i][j+1] == 0 || A[i][j-1] == 0)  
                    {  
                        A[i][j] = 2;  
                    }  
                }  
                  
            }  
        }  
        int x = 0;  
         for (int i = 0; i < t; i++)  
        {  
            for (int j = 0; j < t; j++)  
            {  
               if (A[i][j] == 1)  
               {  
                   x += 1;  
               }  
            }  
        }  
        printf("%d\n",x);     
    }  
}  