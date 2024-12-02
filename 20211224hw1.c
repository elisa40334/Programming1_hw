#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>  
 
#define SIZE 10  
unsigned char bitstreams[SIZE];  
  
// set the value for the ith bit  
  
void setbit(unsigned char bitstream[], int size, int i, int value)  
{  
    if (value == 1)  
    {  
         bitstream[i / 8] |= (value << (i % 8)); 
    }  
    else  
    {  
          bitstream[i / 8] ^= (1 << (i % 8));  
    }  
}  
  
// get the value of the ith bit  
int getbit(const unsigned char bitstream[], int size, int i)  
{  
    if((bitstream[i / 8] & (1 << (i % 8))) == 0){
         return 0;
     }  
    else {  
        return 1;  
    }  
}  
  
int main(void)  
{  
  
    int i, v;  
  
    scanf("%d%d", &i, &v);  
  
    while (i != -1) {  
        setbit(bitstreams, SIZE, i, v);  
        scanf("%d%d", &i, &v);  
    }  
  
    for (i = 0; i < SIZE; ++i) printf("%02x", bitstreams[i]);  
  
    printf("\n");  
  
    scanf("%d", &i);  
  
    while (i != -1) {  
        printf("%d\n", getbit(bitstreams, SIZE, i));  
        scanf("%d", &i);  
    }  
  
    return 0;  
}  