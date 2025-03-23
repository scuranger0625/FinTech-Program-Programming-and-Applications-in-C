/*4_8.浮點數與其輸出格式-自主學習(5.0)*/
/*寫一個程式，指定一個字串變數為 KNQXG[QW，將其十進位值減2，就會知道我的心意。

輸入範例:
 
輸出範例:
ILOVEYOU*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>

int main() {
    char code[] = "KNQXG[QW";
    int length = strlen(code); // 取得字串長度
    
    for(int i = 0; i <length; i++){ // 逐一解碼
        char decoded = code[i] - 2 ; // 解碼
        printf("%c", decoded); //%c表示輸出字元
    }
   return 0;
}