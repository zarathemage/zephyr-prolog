#ifndef __ZEPHYR_RULESYSTEM_H_
#define __ZEPHYR_RULESYSTEM_H_

// The rule parsing API

/*
 * rule string is of the following format :
 * 
 * "( or ( not a and b ) ( not c ) )"
 */

#include "zephyrrule.h"

// parse precondition into rule
PreConditionPtr *derive_precondition(char *rulestring, int len, PreConditionPtr startpre);

#endif
