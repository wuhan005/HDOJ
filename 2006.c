#include <stdio.h>

int main(int argc, const char * argv[]) {
    int total;
    
    while(~scanf("%d ", &total)){
        int result = 1;
        for(int i = 0; i < total; i++){
            int num;
            scanf("%d", &num);
            if(num % 2 != 0){
                result *= num;
            }
        }
        
        printf("%d\n", result);
        
        while(getchar() != '\n');
    }
    return 0;
}