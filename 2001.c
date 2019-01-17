#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    double x1, y1, x2, y2, result;
    
    while(~scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2)){
        
        result = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

        printf("%.2lf\n", result);
        
        while(getchar() != '\n');
    }
    return 0;
}