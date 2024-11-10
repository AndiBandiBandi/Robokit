#include <stdio.h>
#include <string.h>
#include "chooser.h"



void chooser(const char *tag)
{
 char first_three[4];  

   
    strncpy(first_three, tag, 3);


    printf("Tag exctracted%s\n", first_three);

};