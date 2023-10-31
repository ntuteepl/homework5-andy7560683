#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, m, s;
    double wage;
    scanf("%d %d",&t ,&m);
    if(t <= 60){
        wage = t * m;
    }
    else if(t > 60 && t <=120){
        wage = 60*m + (t-60)*m*1.33;
    }
    else if(t > 120){
        wage = 60*m + 60*m*1.33 + (t-120)*m*1.66;
    }
    printf("%.1f", wage);

}

