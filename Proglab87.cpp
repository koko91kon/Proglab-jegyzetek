#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Proglab877.cpp"

int main()
{
    char *t[] = {"ALMA", "szilva", "KORTE", "ePer", "Meggy", "CSERESZNYE"};
    char **result = foo(t, sizeof(t) / sizeof(char *));
    char **tmp;
    for (tmp = result; *tmp; ++tmp)
        printf("%s\n", *tmp);
    free(result);
    return EXIT_SUCCESS;
}
