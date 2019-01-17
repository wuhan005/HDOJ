#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int m;
    
    scanf("%d", &m);
    
    for(int i = 0; i < m; i++){
        int n;
        scanf("%d", &n);
        
        double result = 0;
        for(int j = 1; j <= n; j++){
            if(j % 2 != 0){
                result += 1.0 / j;
            }else{
                result += 1.0 / -j;
            }
        }
        
        printf("%.2lf\n", result);
    }
    
    return 0;
}