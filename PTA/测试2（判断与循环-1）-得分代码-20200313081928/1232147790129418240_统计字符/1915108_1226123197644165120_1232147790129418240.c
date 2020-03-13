#include <stdio.h>

int main( void )
{
    unsigned letter = 0; // 英文字母
    unsigned blank  = 0; // 空格
    unsigned digit  = 0; // 数字
    unsigned other  = 0; // 其它
    for( size_t i=0; i!=10; ++i )
    {
        int ch = getchar();
        if( (ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z') )
            ++letter;
        else if( ch==' ' || ch=='\n' )
            ++blank;
        else  if( ch>='0' && ch<='9' )
            ++digit;
        else
            ++other;
    }

    printf( "letter = %u, blank = %u, digit = %u, other = %u\n", letter, blank, digit, other );
}