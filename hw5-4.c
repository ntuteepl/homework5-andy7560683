#include <stdio.h>
#include <stdlib.h>

int main()
{
    int H, M;
    scanf("%d %d", &H, &M);
    while(1){
        if(H >= 1 && H <= 12 && M >= 00 && M <=59){
            break;
        }
    }

    float angle_m, angle_h;
    angle_m = 360*(M/60.0);
    angle_h = 360*((H/12.0)+(M/720.0));
    if(angle_m >= 180){
        angle_m = angle_m - 180;
    }
    if(angle_h >= 180){
        angle_h = angle_h - 180;
    }

    float angle;
    if(angle_m > angle_h){
        angle = angle_m - angle_h;
    }
    else if(angle_h > angle_m){
        angle = angle_h - angle_m;
    }
    else{
        angle = 0;
    }

    if((M < 30 && H > 6) || (M > 30 && H < 6)){
      angle = (180 - angle);
    }
    printf("%.3f", angle);

}

