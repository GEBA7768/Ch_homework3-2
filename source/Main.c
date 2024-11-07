#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// ���j�p�g�����
char changeCase(char c) {
    // �p�G�O�j�g�r���A�ഫ���p�g
    if (isupper(c)) {
        return tolower(c);
    }
    // �p�G�O�p�g�r���A�ഫ���j�g
    else if (islower(c)) {
        return toupper(c);
    }
    // �D�r�������p�A������^��r��
    return c;
}

int main(void) {
    char c;
    printf("�п�J�@�Ӧr���G");
    scanf_s(" %c", &c);
    printf("�ഫ�᪺�r���O�G%c\n", changeCase(c));
    return 0;
}

//5.29

#include <stdio.h>
#include <stdlib.h>

// �p��̤j���]�ƪ����U���
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// �p��̤p�����ƪ����
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main(void) {
    int num1, num2;
    printf("�п�J��Ӿ�ơG");
    scanf_s("%d %d", &num1, &num2);
    printf("�o��Ӽƪ��̤p�����ƬO�G%d\n", lcm(num1, num2));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>




/*5.34��X����
int main(void)
{
    int base,result,exponent;

    printf("��J���ƩM����:");
    scanf_s("%d %d", &base ,&exponent);
    result = base;
    while (exponent > 1)
    {
        result = result * base;
        exponent-=1;
    }
    printf("���׬O:%d",result);

    return 0;
}
*/

/*5.35�O�i�����ƦC
#include <stdio.h>
#include <stdlib.h>
unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;  // �� 0 ���O 0
    if (n == 1) return 1;  // �� 1 ���O 1

    unsigned long long int prev1 = 1;  // �x�s F(n-1)
    unsigned long long int prev2 = 0;  // �x�s F(n-2)
    unsigned long long int result = 0; // �x�s��e�� F(n)

    for (unsigned int i = 3; i <= n; ++i) {
        result = prev1 + prev2;  // �p���e�� F(n)
        prev2 = prev1;           // ��s F(n-2)
        prev1 = result;          // ��s F(n-1)
    }

    return result;
}


int main() {
    unsigned int n;
    printf("��J�n�p�⪺�O�i�������ơG");
    scanf_s("%u", &n);

    unsigned long long int fibNumber = fibonacci(n);
    printf("�� %u �����O�i�����ƬO�G%lu\n", n, fibNumber);

    return 0;
}
*/


/*5.36�e����

//�ΤT�������e�����²�檺�����@�U��z�A���T�Ӷ�W�A�@�Ӷ�W�\�ۥѤj��p�V�W�\�������A�ؼЬO�⥦����t�@�ڬW�l�A���O�~�����i�H�X�{�j���b�p���W�������ΡC�T�������ڭ̭n�����B�J���O�O:1��p�����M�������U�\�b�t�~��ڬW�l2��p�����\�줤�����W3��j�����\��ѤU���ŬW4��p�����\�b�ѤU���ŬW5�⤤�������j�����W�A�A��p�������W�h

#include <stdio.h>
#include <stdlib.h>
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    // Step 1: �N n-1 �Ӷ�L�q�ӷ��W���ʨ컲�U�W
    hanoi(n - 1, from, aux, to);
    // Step 2: �N�� n �Ӷ�L�q�ӷ��W���ʨ�ؼЬW
    printf("Move disk %d from %c to %c\n", n, from, to);
    // Step 3: �N n-1 �Ӷ�L�q���U�W���ʨ�ؼЬW
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