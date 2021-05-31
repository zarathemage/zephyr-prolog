#ifndef __ZEPHYRRULE_H_
#define __ZEPHYRRULE_H_

#include "precondition.h"
#include "postcondition.h"

typedef struct zephyrrule_ {
  PreConditionPtr pre;
  PostConditionPtr post;
} ZephyrRule;

typedef ZephyrRule *ZephyrRulePtr;

ZephyrRulePtr make_zephyr_rule(PreconditionPtr pre, PostConditionPtr post, ZephyrRulePtr rule);
void delete_zephyr_rule(ZephyrRulePtr rule);

#endif
