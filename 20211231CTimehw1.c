#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, struct tm, time, localtime, asctime */
char buffer[80];
void f(struct tm t1){
  char a[7][10] = {"Sunday\n","Monday\n","Tuesday\n","Wednesday\n","Thursday\n","Friday\n","Saturday\n"};
  printf("%s",a[t1.tm_wday]);
}
void f2(struct tm t1){
  f(t1);
  printf("%s",asctime (&t1));
  strftime (buffer,80,"%F %T",&t1);
  puts (buffer);
}
int main ()
{
  struct tm t1,*t2,initial;
  long x;

  initial.tm_hour = 0; initial.tm_min = 0; initial.tm_sec = 0;
  initial.tm_mon = 0;  initial.tm_mday = 1;initial.tm_year = 0;initial.tm_wday = 1;//週一是1
  scanf("%d%d%d%d%d%d%lx",&t1.tm_year,&t1.tm_mon,&t1.tm_mday,&t1.tm_hour,&t1.tm_min,&t1.tm_sec,&x);
  t1.tm_year -= 1900;
  t1.tm_mon -= 1;
  if (t1.tm_mon == -1)t1.tm_mon = 11;
  if (t1.tm_hour == 24)t1.tm_hour = 0;
  long long unsigned day_min = difftime(mktime(&t1),mktime(&initial))/86400;
  //printf("initial.tm_wday:%d",initial.tm_wday);
  t1.tm_wday = (day_min+1)%7;//+initia.tm_wday
  f2(t1);
  t2 = localtime (&x);
  f2(*t2);
}