#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
    char *pc = NULL;
    int i = 0;
    pc = (char*)malloc(27 * sizeof(char)); // 수정: 배열 크기를 27로 변경하여 'a'부터 'z'까지 저장할 수 있도록 함
    if (pc == NULL) {
        printf("메모리 할당 오류\n");
        exit(1);
    }
    for (i = 0; i < 26; i++) {
        pc[i] = 'a' + i;
    }
    pc[i] = 0;
    printf("%s\n", pc);
    free(pc);

    system("PAUSE");
    return 0;
}
