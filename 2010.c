#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int m, n;
    
    while(~scanf("%d %d", &m, &n)){
        int flag = 1;
        for(int i = m; i <= n; i++){
            int h = i / 100;
            int t = (i - 100 * h) / 10;
            int o = i - 100 * h - 10 * t;
            if(pow(h, 3) + pow(t, 3) + pow(o, 3) == i){
                if(flag){
                    printf("%d", i);
                    flag = 0;
                }else{
                   printf(" %d", i);
                }
            }
        }
        
        if(flag){
            printf("no");
        }
        
        printf("\n");
        
        while(getchar() != '\n');
    }
    return 0;
}