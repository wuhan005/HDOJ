#include <stdio.h>


int main(int argc, const char * argv[]) {
    int n, m;
    //n 个数字 m 个一组

    int arr[100];

    for(int i = 0; i < 99; i++){
        arr[i] = (i + 1) * 2;
    }

    while(~scanf("%d %d", &n, &m)){
        int nowIndex = 0;
        int nowGroup = 1;

        int totalFullGroup = n / m;
        int lastGroupNum = n - totalFullGroup * m;

        int steps = m;

        int result = 0;

        //一组一组
        for(; nowGroup <= totalFullGroup; nowGroup++){
            for(int i = nowIndex; i < nowIndex + steps; i++){
                result += arr[i];
                //printf("%d\n", result);
            }
            result /= steps;

            if(nowGroup == totalFullGroup && lastGroupNum == 0){
                printf("%d", result);
            }else{
                printf("%d ", result);
            }

            result = 0;
            nowIndex += steps;
        }

        //最后一组特殊

        if(lastGroupNum != 0){
            for(int i = totalFullGroup * m; i < n; i++){
                result += arr[i];
            }

            result /= lastGroupNum;

            printf("%d", result);
        }

        printf("\n");
    }

    return 0;
}