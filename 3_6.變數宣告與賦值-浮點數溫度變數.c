/*3_6.變數宣告與賦值-浮點數溫度變數(10.0)*/
/*寫一個程式，設定一個變數，用來儲存溫度，設病變數為33.33，然後印出來。

輸入範例:

輸出範例:
33.33

程式碼範例：
temp = 一個指定整數
print(打上變數名稱，即可印出指定的整數)*/
#include <bits/stdc++.h>
#include <stdio.h>
int main() {
    double temp = 33.33;
    //%.2f是格式化輸出浮點數（float 或 double） 小數點後保留 2 位
    printf("%.2f\n",temp); 
   return 0;
}