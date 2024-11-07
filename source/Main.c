#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// 更改大小寫的函數
char changeCase(char c) {
    // 如果是大寫字母，轉換成小寫
    if (isupper(c)) {
        return tolower(c);
    }
    // 如果是小寫字母，轉換成大寫
    else if (islower(c)) {
        return toupper(c);
    }
    // 非字母的情況，直接返回原字符
    return c;
}

int main(void) {
    char c;
    printf("請輸入一個字母：");
    scanf_s(" %c", &c);
    printf("轉換後的字母是：%c\n", changeCase(c));
    return 0;
}

//5.29

#include <stdio.h>
#include <stdlib.h>

// 計算最大公因數的輔助函數
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 計算最小公倍數的函數
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main(void) {
    int num1, num2;
    printf("請輸入兩個整數：");
    scanf_s("%d %d", &num1, &num2);
    printf("這兩個數的最小公倍數是：%d\n", lcm(num1, num2));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>




/*5.34輸出次方
int main(void)
{
    int base,result,exponent;

    printf("輸入底數和次方:");
    scanf_s("%d %d", &base ,&exponent);
    result = base;
    while (exponent > 1)
    {
        result = result * base;
        exponent-=1;
    }
    printf("答案是:%d",result);

    return 0;
}
*/

/*5.35費波那契數列
#include <stdio.h>
#include <stdlib.h>
unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;  // 第 0 項是 0
    if (n == 1) return 1;  // 第 1 項是 1

    unsigned long long int prev1 = 1;  // 儲存 F(n-1)
    unsigned long long int prev2 = 0;  // 儲存 F(n-2)
    unsigned long long int result = 0; // 儲存當前的 F(n)

    for (unsigned int i = 3; i <= n; ++i) {
        result = prev1 + prev2;  // 計算當前的 F(n)
        prev2 = prev1;           // 更新 F(n-2)
        prev1 = result;          // 更新 F(n-1)
    }

    return result;
}


int main() {
    unsigned int n;
    printf("輸入要計算的費波那契項數：");
    scanf_s("%u", &n);

    unsigned long long int fibNumber = fibonacci(n);
    printf("第 %u 項的費波那契數是：%lu\n", n, fibNumber);

    return 0;
}
*/


/*5.36河內塔

//用三圓環的河內塔來簡單的解釋一下原理，有三個圓柱，一個圓柱擺著由大到小向上擺的圓環，目標是把它移到另一根柱子，但是途中不可以出現大的在小的上面的情形。三圓環中我們要做的步驟分別是:1把小圓環和中圓環各擺在另外兩根柱子2把小圓環擺到中圓環上3把大圓環擺到剩下的空柱4把小圓環擺在剩下的空柱5把中圓環放到大圓環上，再把小圓環壓上去

#include <stdio.h>
#include <stdlib.h>
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    // Step 1: 將 n-1 個圓盤從來源柱移動到輔助柱
    hanoi(n - 1, from, aux, to);
    // Step 2: 將第 n 個圓盤從來源柱移動到目標柱
    printf("Move disk %d from %c to %c\n", n, from, to);
    // Step 3: 將 n-1 個圓盤從輔助柱移動到目標柱
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf_s("%d", &n);
    printf("Steps to solve Tower of Hanoi with %d disks:\n", n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
*/