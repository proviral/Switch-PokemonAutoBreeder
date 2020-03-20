#ifndef _INSTRUCTIONS_H_
#define _INSTRUCTIONS_H_

#include "Joystick.h"

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif

typedef enum {
    press_up,
    press_down,
    press_left,
    press_right,
    press_a,
    press_b,
    press_x,
    press_y,
    press_l,
    press_r,
    press_zl,
    press_zr,
    press_plus,
    press_minus,
    press_home,
    press_capture,
    hang
} action_t;

typedef struct {
    action_t action;
    uint16_t duration;
} command_t;

// Define your command sequences here

static const command_t wait[] = {
    { hang,  200 }
};

static const command_t remove_friend[] = {
    { hang, 50 },
    { press_down, 5 },
    { hang, 50 },
    { press_a, 5 },
    { hang, 50 },
    { press_down, 5 },
    { hang, 50 },
    { press_a, 5 },
    { hang, 50 },
    { press_a, 5 },
    { hang, 100 },
    { press_a, 5 },
    { hang, 500 },
    { press_a, 5 }
};

#endif
