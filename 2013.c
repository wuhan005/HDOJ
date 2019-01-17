#include <stdio.h>

int main(int argc, const char * argv[]) {
    int day;
    
    while(~scanf("%d", &day)){
        int total = 1;
        
        for(int i = 1; i < day; i++){
            total = (total + 1) * 2;
        }
        
        printf("%d\n", total);
        while(getchar() != '\n');
    }
    
    return 0;
}