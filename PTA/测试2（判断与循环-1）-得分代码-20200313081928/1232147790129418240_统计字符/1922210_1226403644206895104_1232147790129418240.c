#include <stdio.h>
#include <stdlib.h>
int main() {
    char s;
    int letter = 0, blank = 0, digit = 0, other = 0;
    //以上为正确定义变量，以下使用for循环统计
    for (int i = 0;i <= 9;i++) {
        s = getchar();
        if (s >= 'A' && s <= 'Z') {
            letter++;
        }
        else if (s >= 'a' && s <= 'z') {
            letter++;
        }//当遇上a-z以及A-Z时，单词数加一
        else if (s >= '0' && s <= '9') {
            digit++;
        }//当遇上数字0-9时，数字数加一
        else if (s == ' ' || s == '\n') {
            blank++;
        }//当遇上Tab键和空格键时，空格数加一
        else {
            other++;
        }//当遇上其他字符时，其他字符数加一
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
    return 0;
}