
#ifndef PLAYER_H
#define PLAYER_H

#include <math.h>
#include "collision.h"

#define PI 3.14159265


/**
 * struct player_s - struct for the textures
 * @x: x coordinate
 * @y: y coordinate
 * @width: player width
 * @height: player height
 * @turnDirection: Turn Direction
 * @walkDirection: Walk Direction
 * @rotationAngle: player rotation angle
 * @walkSpeed: walk speed
 * @turnSpeed: turn speed
 */
typedef struct player_s
{
	float x;
	float y;
	float width;
	float height;
	int turnDirection;
	int walkDirection;
	float rotationAngle;
	float walkSpeed;
	float turnSpeed;
} player_t;

// Function prototypes
void initializePlayer(void);
void renderPlayer(void);
void movePlayer(float DeltaTime);

// External variable declaration
extern player_t player;

#endif /* PLAYER_H */
