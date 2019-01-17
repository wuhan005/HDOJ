#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    double t;
    
    while(~scanf("%lf", &t)){
        
        if(t >= 0 && t <= 59){
            printf("E");
        }else if(t >= 60 && t <= 69){
            printf("D");
        }else if(t >= 70 && t <= 79){
            printf("C");
        }else if(t >= 80 && t <= 89){
            printf("B");
        }else if(t >= 90 && t <= 100){
            printf("A");
        }else{
            printf("Score is error!");
        }
        
        printf("\n");
        
        while(getchar() != '\n');
    }
    return 0;
}
