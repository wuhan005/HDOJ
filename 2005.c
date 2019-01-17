#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year, month, day, result;
    
    while(~scanf("%d/%d/%d", &year, &month, &day)){

        result = 0;
        
        int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0)){
            days[1] = 29;
        }
        
        for(int i = 0; i < month - 1; i++){
            result += days[i];
        }
        
        result += day;
        printf("%d\n", result);
        result = 0;
        
        while(getchar() != '\n');
    }
    return 0;
}