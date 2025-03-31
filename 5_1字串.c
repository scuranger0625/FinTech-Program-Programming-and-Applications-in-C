/*寫一個程式，指定一個變數，
設定一個文字變數 Hello, Dice，然後印出來。*/

#include <stdio.h>

int main() {
    // 定義一個字串變數text
    char text[] = "Hello, Dice";
    /* %s 是 格式指定符（format specifier），
    用來表示 字串（string），通常與 printf() 
    或 scanf() 函式一起使用。*/
    printf("%s\n",text);
    return 0;
}