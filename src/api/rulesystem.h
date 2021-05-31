#ifndef __ZEPHYR_RULESYSTEM_H_
#define __ZEPHYR_RULESYSTEM_H_

// The rule parsing API

/*
 * rule string parses are of the following format :
 * 
 * "( or ( not a and b ) ( not c ) )"
 *
 * binary byte strings are of the format :
 * TODO
 */

#include "zephyrrule.h"

// parse precondition into rule (with strings)
PreConditionPtr *derive_precondition(char *rulestring);

// parse precondition into rule (with binary image)
PreConditionPtr *derive_precondition_from_image(char *bytes);

#endif
