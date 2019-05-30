#ifndef lib_h
#define lib_h

#include <string.h>

int string_length(char *s)
{
    int length = 0;
    for (int i = 0; ; i++) {
        length += 1;
        if (s[i] == '\0') {
            break;
        }
    }
    return length - 1;
}

void string_copy(char *x, char *y)
{
    int len = string_length(y);
    for (int i = 0; i < len; i++) {
        x[i] = y[i];
    }
    x[len] = '\0';
}

#endif