/*4_2.浮點數與其輸出格式-印出浮點數-1(15.0)*/
/*寫一個程式，指定二個變數，設定其值為 10.1 與 5.2，並且印出結果。
使用{0}來印出輸出結果，請參閱程示範例。

輸入範例:

輸出範例: 
num1=10.1
num2=5.2*/
#include <bits/stdc++.h>
#include <stdio.h>
int main() {
    double num1 = 10.1;
    double num2 = 5.2;
    
    printf("num1 =%.1f\n",num1);
    printf("num2 =%.1f\n",num2);
   return 0;
}