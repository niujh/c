#include <stdio.h>

int main( void )
{
    unsigned letter = 0; 
    unsigned blank  = 0; 
    unsigned digit  = 0; 
    unsigned other  = 0; 
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
