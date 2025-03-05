///week0303.cpp
#include <stdio.h>
int main()
{ ///從0開始 中間寫多少 就跑多少
    for(int i=0; i<5; i++){
        printf("%d ", i);
    } ///電腦的for迴圈 電腦從0開始

    printf("\n");///跳行

    ///人類比較麻煩 從1開始數
    for(int i=1; i<=5; i++){
        printf("%d ",i);
    } ///人類的for迴圈 從1開始
}
