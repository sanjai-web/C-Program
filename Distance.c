#include<stdio.h>
int main(){

  float km,m;
  long long int cm,inh,ft;
 printf("enter the distance in km");
 scanf("%f",&km);
m=km*1000;
ft=km*3000;
cm=km*90000;
printf("meter %0.2f , feet %lld , centimeter %lld",m,ft,cm);
    return 0;
}