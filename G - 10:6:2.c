#include <stdio.h>
#include <math.h>
int main() {
    int n;
    double len, circle_area, box_area;
    scanf("%d",&n);
    while (n-->0){
        scanf("%lf",&len);
        circle_area=acos(-1)*(len/5)*(len/5);
        box_area=len*0.6*len-circle_area;
        printf("%.2lf %.2lf\n",circle_area,box_area);

    }
    return(0);
}
