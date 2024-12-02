#include<stdio.h>
int number_of_carry(unsigned x,unsigned y, unsigned b)
{
      int n = 0, carry = 0;
      while(x > 0 || y > 0) {
            unsigned s = (x%b)+(y%b)+carry;
            if (s >= b) { 
                carry = 1;
                n += 1;
            } else {
                carry = 0;
            }
            x /= b;
            y /= b;
      }
      return n;
}
int main()
{
   unsigned x,y,b;
   scanf("%u%u%u",&x,&y,&b);
   while(x!=0||y!=0) {
         int n = number_of_carry(x,y,b);       
         scanf("%u%u%u",&x,&y,&b);
        
        if (n == 1)
        {
            printf("%d carry operation.\n",n);
        }
        else if (n != 0 && n != 1)
        {
            printf("%d carry operations.\n",n);
        }
        else
        {
            printf("No carry operation.\n");
        }
        
   }
    return 0;
}