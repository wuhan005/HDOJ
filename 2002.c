#include <stdio.h>
#include <math.h>
#define PI 3.1415927

int main(int argc, const char * argv[]) {
    
    double r, result;
    
    while(~scanf("%lf", &r)){
        
        result = (4 / 3.0) * PI * pow(r, 3);

        printf("%.3lf\n", result);
        
        while(getchar() != '\n');
    }
    return 0;
}