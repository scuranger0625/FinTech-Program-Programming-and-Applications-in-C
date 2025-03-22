/*3_10.變數宣告與賦值-自主學習(5.0)*/
/*寫一個程式，給定一個十進位數1600，分別印出其十進位、二進位、八進位與十六進位的結果。

輸入範例:


輸出範例:
1600
0b11001000000
0o3100
0x640*/
#include <bits/stdc++.h>
#include <stdio.h>
int main() {
    int num = 1600;
    
    // 十進位
    printf("%d\n",num);
    
    // 二進位（手動轉，C 沒有直接 %b，要自己寫）
    printf("0b");
    for(int i = 10; i >= 0; i-- ){ // 1600 最多 11 位元
        printf("%d",(num >> i)&1);
    }
    printf("\n");
    
    // 八進位
    printf("0o%o\n", num);
    // 十六進位
    printf("0x%x\n", num);
    return 0;
}