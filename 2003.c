#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    double num;
    
    while(~scanf("%lf", & num)){
        
        if(num < 0){
            num = -num;
        }

        printf("%.2lf\n", num);
        
        while(getchar() != '\n');
    }
    return 0;
}
