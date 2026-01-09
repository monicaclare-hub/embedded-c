#include "system.h"
#include <stdio.h>

static system_state_t current_state;

void system_init(void)
{
    current_state = STATE_INIT;
}

void system_update(void)
{
    switch (current_state)
    {
        case STATE_INIT:
            printf("System Initialising...\n");
            current_state = STATE_IDLE;
            break;

        case STATE_IDLE:
            printf("System Idle\n");
            current_state = STATE_ACTIVE;
            break;

        case STATE_ACTIVE:
            printf("System Active\n");
            current_state = STATE_ERROR;
            break;

        case STATE_ERROR:
            printf("System Error\n");
            break;

        default:
            current_state = STATE_ERROR;
            break;
    }
}
