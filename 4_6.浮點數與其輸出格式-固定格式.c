/*4_6.浮點數與其輸出格式-固定格式(10.0)*/
/*寫一個程式，設定兩個變數，其值分別為160與55.22，分別代表身高與體重。輸出時以浮點數印出其值，小數位數請印出兩位數，總數字寬度印出 10 位。

輸入範例:

輸出範例: 
My height is        160.00 CM.
My weight is         55.22 KG.*/
#include <bits/stdc++.h>
#include <stdio.h>

int main() {
    double height = 160;
    double weight = 55.22;
    
    printf("My height is %10.2fCM.\n",height);
    printf("My weight is %10.2fCM.\n",weight);

   return 0;
}