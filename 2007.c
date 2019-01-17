#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int num1, num2;
    
    while(~scanf("%d %d", &num1, &num2)){
        
        int ans1 = 0;
        int ans2 = 0;
        
        if(num1 > num2){
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        
        for(int i = num1; i <= num2; i++){
            if(i % 2 == 0){
                ans1 += pow(i, 2);
            }else{
                ans2 += pow(i, 3);
            }
        }
        
        printf("%d %d\n", ans1, ans2);
        
        while(getchar() != '\n');
    }
    return 0;
}