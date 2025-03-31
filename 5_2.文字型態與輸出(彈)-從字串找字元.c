/*5_2.文字型態與輸出(彈)-從字串找字元(5.0)*/
/*寫一個程式，指定一個變數，設定其值為 Hello, Dice，將字串前5個字元印出來。

輸入範例:

輸出範例: 
H
e
l
l
o */
#include <bits/stdc++.h>
#include <stdio.h>

int main() {
    // 將text定義成char陣列
    char text[] = "Hello, Dice";
    // 使用for迴圈印出前5字元
    for(int i = 0;i < 5 ;i++){
        /* %c用來印出單個字元 字串在 C 中是以字元陣列的形式儲存，
        且以 \0 作為結束符 */
        printf("%c\n",text[i]);
    }

    return 0;
}