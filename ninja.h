/** 
 * @file   dodge_dash.h
 * @author ZHAN (mzh99)      
 * @author JOHN ELLIOTT (jel119)
 * @date   20 October 2021
 * @brief  --
 * @defgroup --
**/

#ifndef NINJA_H
#define NINJA_H

#include <stdbool.h>
#include "tinygl.h"


/*----------------------- | Structs | -----------------------*/

typedef struct 
{
    tinygl_point_t pos; // Current postion of the ninja.
    bool active; // Current state of the ninja (alive or dead).
} ninja_t;


/*---------------------- | Functions | ----------------------*/

void ninja_init(ninja_t*);

void ninja_movement(ninja_t*);

bool thrown_smoke_bomb(void);

void update_ninja_pos(ninja_t);


#endif
