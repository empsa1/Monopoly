#include "../include/monopoly_simu.h"

long f_atoi(char *nr)
{
      
}

int is_pint(int argc, char **argv)
{
    int i;
    
    i = 0;
    while (i < argc)
    {
        if (f_atoi(argv[i++]) == FALSE)
            return (FALSE);
    }
    return (TRUE);
}