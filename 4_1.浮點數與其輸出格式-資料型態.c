/*寫一個程式，指定4個變數值為 10, 10.01, 10+10j與DICE，分別印出各自的資料型態。
使用type可以印出資料型態，可以參照程示範例。*/

#include <stdio.h>
#include <complex.h>  // 支援複數型態
#include <math.h>

int main() {
    int a = 10; // 整數
    double b = 10.01; // 浮點數
    double complex c = 10 + 10 * I; // 複數
    char d[] = "DICE"; // 字串(字元陣列)
    
    // 輸出各變數的值與資料型態說明
    printf("a = %d\t\t資料型態: int\n", a);
    printf("b = %.2f\t\t資料型態: double\n",b);
    printf("c = %.2f + %.2fi\t資料型態: double complex\n", creal(c), cimag(c));
    printf("d = %s\t\t資料型態: char array (string)\n", d);
    
   return 0;
}
