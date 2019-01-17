#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int num1, num2;
    
    while(~scanf("%d %d", &num1, &num2)){
        
        if(num1 == 0 && num2 == 0){
            break;
        }
        
        int flag = 1;
        
        for(int i = num1; i <= num2; i++){
            if(i == 2){
                continue;
            }
            
            
            for(int j = 2; j < i; j++){
                if((i * i + i + 41) % j == 0) {
                    flag = 0;
                    break;
                }
            }
        }
        
        if(flag){
            printf("OK\n");
        }else{
            printf("Sorry\n");
        }
        
        while(getchar() != '\n');
    }
    
    return 0;
}