#include "../include/monopoly_simu.h"

int error_handler(char *error_msg)
{
    printf("%s\n", error_msg);
    return (FAILURE);
}