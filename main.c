#include "system.h"
#include <stdio.h>

int main(void)
{
    system_init();

    for (int i = 0; i < 5; i++)
    {
        system_update();
    }

    return 0;
}
