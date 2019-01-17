#include <stdio.h>

int main(int argc, const char * argv[]) {
    int total;
    
    while(~scanf("%d", &total)){
        int min = 100, max = 0;
        double all = 0;
        
        for(int i = 0; i < total; i++){
            int score;
            scanf("%d", &score);
            
            if(score < min){
                min = score;
            }
            
            if(score > max){
                max = score;
            }
            
            all += score;
        }
        
        all -= (min + max);
        
        all /= total - 2;
        
        
        printf("%.2lf\n", all);
        while(getchar() != '\n');
    }
    
    return 0;
}