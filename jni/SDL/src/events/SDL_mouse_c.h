/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2012 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/
#include "SDL_config.h"

#ifndef _SDL_mouse_c_h
#define _SDL_mouse_c_h

#include "SDL_mouse.h"

struct SDL_Cursor
{
    struct SDL_Cursor *next;
    void *driverdata;
};

typedef struct
{
    /* Create a cursor from a surface */
    SDL_Cursor *(*CreateCursor) (SDL_Surface * surface, int hot_x, int hot_y);

    /* Show the specified cursor, or hide if cursor is NULL */
    int (*ShowCursor) (SDL_Cursor * cursor);

    /* This is called when a mouse motion event occurs */
    void (*MoveCursor) (SDL_Cursor * cursor);

    /* Free a window manager cursor */
    void (*FreeCursor) (SDL_Cursor * cursor);

    /* Warp the mouse to (x,y) */
    void (*WarpMouse) (SDL_Window * window, int x, int y);

    /* Set relative mode */
    int (*SetRelativeMouseMode) (SDL_bool enabled);

    /* Data common to all mice */
    SDL_Window *focus;
    int x;
    int y;
    int xdelta;
    int ydelta;
    int last_x, last_y;         /* the last reported x and y coordinates */
    Uint32 buttonstate;
    SDL_bool relative_mode;
    /* the x and y coordinates when relative mode was activated */
    int original_x, original_y;

    SDL_Cursor *cursors;
    SDL_Cursor *def_cursor;
    SDL_Cursor *cur_cursor;
    SDL_bool cursor_shown;
} SDL_Mouse;


/* Initialize the mouse subsystem */
extern int SDL_MouseInit(void);

/* Get the mouse state structure */
SDL_Mouse *SDL_GetMouse(void);

/* Set the default mouse cursor */
extern void SDL_SetDefaultCursor(SDL_Cursor * cursor);

/* Set the mouse focus window */
extern void SDL_SetMouseFocus(SDL_Window * window);

/* Send a mouse motion event */
extern int SDL_SendMouseMotion(SDL_Window * window, int relative, int x, int y);

/* Send a mouse button event */
extern int SDL_SendMouseButton(SDL_Window * window, Uint8 state, Uint8 button);

/* Send a mouse wheel event */
extern int SDL_SendMouseWheel(SDL_Window * window, int x, int y);

/* Shutdown the mouse subsystem */
extern void SDL_MouseQuit(void);

#endif /* _SDL_mouse_c_h */

/* vi: set ts=4 sw=4 expandtab: */
