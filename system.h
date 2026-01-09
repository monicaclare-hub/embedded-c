#ifndef SYSTEM_H
#define SYSTEM_H

typedef enum {
    STATE_INIT,
    STATE_IDLE,
    STATE_ACTIVE,
    STATE_ERROR
} system_state_t;

void system_init(void);
void system_update(void);

#endif
