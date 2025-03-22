/*3_9.變數宣告與賦值-浮點數與形容詞(15.0)*/
/*寫一個程式，指定2個變數，其資料型態為浮點數，其值分別為3.333與4.4444，然後印出如輸出範例的結果。

輸入範例:

輸出範例:
They are 3.333 and 4.4444.*/
#include <bits/stdc++.h>
#include <stdio.h>
int main() {
    double a = 3.333;
    double b = 4.4444;
    printf("They are %.3f and %.4f.\n",a,b);
   return 0;
}