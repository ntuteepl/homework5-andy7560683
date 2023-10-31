#include <stdio.h>
#include <stdlib.h>

int main()
{
  int t;
  double pay;
  scanf("%d", &t);
  if(t <= 800){
    pay = t*0.9;
  }
  else if(t > 800 && t <= 1500){
    pay = t*0.9*0.9;
  }
  else if(t > 1500){
    pay = t*0.9*0.79;
  }

  printf("%.1f", pay);
}

