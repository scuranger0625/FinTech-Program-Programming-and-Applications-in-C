/*5_3.文字型態與輸出(彈)-從字串找單字(5.0)*/
/*寫一個程式，指定一個變數，設定為 Hello, Dice，然後，將字串內第一個單字 Hello 與第二個單字印出來。

輸入範例:

輸出範例:
Hello
Dice */
#include <bits/stdc++.h>
#include <stdio.h>

int main() {
    char text[] = "Hello, Dice";
    
    // text[i] 從0-4 printf出Hello
    for(int i = 0; i < 5; i++){
        printf("%c",text[i]);
    }
    // 換行
    printf("\n");
    
    // text[5]是, text[6]是空格 所以要從text[7]開始
    for(int i = 7; i < 11; i++){
        printf("%c",text[i]);
    }

   return 0;
}