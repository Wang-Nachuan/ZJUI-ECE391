/*
 * tab:4
 *
 * input.h - header file for input control to maze game
 *
 * "Copyright (c) 2004-2009 by Steven S. Lumetta."
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice and the following
 * two paragraphs appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE AUTHOR OR THE UNIVERSITY OF ILLINOIS BE LIABLE TO 
 * ANY PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL 
 * DAMAGES ARISING OUT  OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, 
 * EVEN IF THE AUTHOR AND/OR THE UNIVERSITY OF ILLINOIS HAS BEEN ADVISED 
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE AUTHOR AND THE UNIVERSITY OF ILLINOIS SPECIFICALLY DISCLAIM ANY 
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE 
 * PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND NEITHER THE AUTHOR NOR
 * THE UNIVERSITY OF ILLINOIS HAS ANY OBLIGATION TO PROVIDE MAINTENANCE, 
 * SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Author:        Steve Lumetta
 * Version:        2
 * Creation Date:   Thu Sep  9 22:22:00 2004
 * Filename:        input.h
 * History:
 *    SL    1    Thu Sep  9 22:22:00 2004
 *        First written.
 *    SL    2    Sun Sep 13 04:11:44 2009
 *        Changed display interface for Tux controller.
 */

#ifndef INPUT_H
#define INPUT_H

/* possible commands from input device, whether keyboard or game controller */
// typedef enum {
//     TURN_NONE, TURN_RIGHT, TURN_BACK, TURN_LEFT, 
//     NUM_TURNS, CMD_QUIT = NUM_TURNS
// } cmd_t;

// typedef enum {
//     A,          // Quit
//     B,          // Init
//     C,          // Reset LED
//     START,      // Pass
//     RIGHT,      // LED + 16
//     DOWN,       // LED - 1
//     LEFT,       // LED - 16
//     UP,         // LED + 1
//     BLAKN
// } cmd_t;

#define BLANK   0
#define START   1
#define A       2
#define B       4
#define C       8
#define UP      16
#define DOWN    32
#define LEFT    64
#define RIGHT   128


/* Initialize the input device. */
extern int init_input();

/* Read a command from the input device. */
// extern cmd_t get_command(int fd, unsigned char bit_status);

/* Shut down the input device. */
extern void shutdown_input();

/*
 * Show the elapsed seconds on the Tux controller (no effect when
 * compiled for a keyboard).
 */
extern void display_time_on_tux(int num_seconds);

#endif /* INPUT_H */
