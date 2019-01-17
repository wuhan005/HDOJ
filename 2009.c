#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double n, m;
    
    while(~scanf("%lf %lf", &n, &m)){
        double result = n;
        
        for(int i = 0; i < m - 1; i++){
            n = sqrt(n);
            if(n == 0){
                break;
            }
            result += n;
        }
        
        printf("%.2lf\n", result);
        
        while(getchar() != '\n');
    }
    return 0;
}