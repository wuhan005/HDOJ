#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char a, b, c, d;
    while(~scanf("%c%c%c", &a, &b ,&c)){
        if(a == NULL){
            break;
        }
        
        if(a > b){
            d = a;
            a = b;
            b = d;
        }
        if(b > c){
            d = b;
            b = c;
            c = d;
        }
        if(a > b){
            d = a;
            a = b;
            b = d;
        }

        printf("%c %c %c\n", a, b, c);
        
        while(getchar() != '\n');
    }
    return 0;
}
