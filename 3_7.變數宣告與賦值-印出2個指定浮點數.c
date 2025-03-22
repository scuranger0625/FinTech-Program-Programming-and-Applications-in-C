/*3_7.變數宣告與賦值-印出2個指定浮點數(10.0)*/
/*寫一個程式，設定兩個變數，分別為3.33與4.4444，然後印出如輸出範例的結果。

輸入範例:

輸出範例:
3.333
4.4444*/
#include <bits/stdc++.h>
#include <stdio.h>
int main() {
    double a = 3.33; //double小數點後15位 float小數點後6位
    double b = 4.4444;
    
    a += 0.003;  // 用加法運算子讓 a 變成 3.333
    printf("%.3f\n",a);
    printf("%.4f\n",b);
   return 0;
}