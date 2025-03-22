/*3_8.變數宣告與賦值-使用有序format輸出(15.0)*/
/*寫一個程式，指定3個浮點數變數，分別是11.1, 22.22, 33.333
使用序號排列與format來解決輸出的問題。

輸入範例：

輸出範例：
11.1 22.22 33.333*/
#include <bits/stdc++.h>
#include <stdio.h>
int main() {
    double a = 11.1;
    double b = 22.22;
    double c = 33.333;
    printf("%.1f %.2f %.3f\n",a,b,c);
   return 0;
}