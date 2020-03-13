#include <stdlib.h>
#include <math.h>
#include <algorithm>
int main()
{
    int i;
    for(i = 1;;i++)
    {
        if(i%5== 1&&i%6== 5&&i%7 == 4&&i%11 == 10)
        {
            break;
        }
    }
    printf("%d\n",i);
}
————————————————
版权声明：本文为CSDN博主「我_是好人」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/qq_34952846/article/details/51810913