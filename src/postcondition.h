#ifndef __POSTCONDITION_H_
#define __POSTCONDITION_H_

#include "zp_.h"

typedef struct postcondition_ {
  Variable *vars;
  int index;
  int length;
} PostCondition;

typedef PostCondition *PostConditionPtr;

PostConditionPtr make_postcondition(int len, PostConditionPtr pre);
void delete_postcondition(PostConditionPtr pre);

void add_variable_to_postcondition(VariablePtr var, PostConditionPtr post);

// matches var->name
int match_precondition_variable_name(VariablePtr var, PreConditionPtr pre);
// matches var->value
int match_precondition_variable_value(VariablePtr var, PreConditionPtr pre);

#endif
