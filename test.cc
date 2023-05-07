#include <stdio.h>

int main(void)
{
    char str[100] = {'s', 'f','q',' ','r'};
    sprintf(str, "%s4f3sdfaxxxx", str);
    puts(str);
}