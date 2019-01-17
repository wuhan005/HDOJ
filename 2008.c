#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int total;
    
    while(~scanf("%d", &total)){
        if(total == 0){
            break;
        }
        
        int a = 0, b = 0, c = 0;
        double num;
        for(int i = 0; i < total; i++){
            scanf("%lf", &num);
            
            if(num < 0){
                a++;
            }
            
            if(num == 0){
                b++;
            }
            
            if(num > 0){
                c++;
            }
            
        }
        
        printf("%d %d %d\n", a, b, c);
        
        while(getchar() != '\n');
    }
    return 0;
}