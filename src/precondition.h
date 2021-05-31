#ifndef __PRECONDITION_H_
#define __PRECONDITION_H_

#include "zp_.h"

typedef struct precondition_ {
  Variable *vars;
  int index;
  int length;
} PreCondition;

typedef PreCondition *PreConditionPtr;

PreConditionPtr make_precondition(int len, PreConditionPtr pre);
void delete_precondition(PreConditionPtr pre);

void add_variable_to_precondition(VariablePtr var, PreConditionPtr pre);

// matches var->name
int match_precondition_variable_name(VariablePtr var, PreConditionPtr pre);
// matches var->value
int match_precondition_variable_value(VariablePtr var, PreConditionPtr pre);

#endif
