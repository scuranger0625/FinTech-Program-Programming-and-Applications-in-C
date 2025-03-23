/*4_4.浮點數與其輸出格式-印出浮點數-3(15.0)*/
/*寫一個程式，指定二個變數，分別為浮點數 10.1 與 5.2，並且印出結果，分別印出小數點後2位與後3位。

輸入範例:

輸出範例: 
num1=10.10
num2=5.200*/
#include <bits/stdc++.h>
#include <stdio.h>

int main() {
    double num1 = 10.1;
    double num2 = 5.2;
    
    printf("%.2f\n",num1);
    printf("%.3f\n",num2);

   return 0;
}