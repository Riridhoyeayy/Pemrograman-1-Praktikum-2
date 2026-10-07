#include <stdio.h>
int main () {
int total_sec;
int day, hour, minute, last_sec, remainder;
printf("\n");
scanf("%d", &total_sec);
day=total_sec/86400;
remainder=total_sec%86400;

hour=remainder/3600;
remainder=remainder%3600;

minute=remainder/60;
last_sec=remainder%60;

if (day>0){
    printf("%d hari %02d:%02d:%02d\n", day, hour, minute, last_sec);
}
else{
    printf("%02d:%02d:%02d\n", hour, minute, last_sec);
}
return 0;
}