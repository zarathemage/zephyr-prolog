#include "zephyrrule.h"

#include <stdlib.h>

ZephyrRulePtr make_zephyr_rule(PreconditionPtr pre, PostConditionPtr post, ZephyrRulePtr rule)
{
  rule = (ZephyrRulePtr)malloc(sizeof(ZephyrRule));
  rule->pre = pre;
  rule->post = post;

  return rule;
}

void delete_zephyr_rule(ZephyrRulePtr rule)
{
  free(rule); // NOTE rule->pre and rule->post 
}
