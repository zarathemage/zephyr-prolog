#include "precondition.h"

#include <stdlib.h>

PreConditionPtr make_precondition(int len, PreConditionPtr pre)
{
  pre = (PreConditionPtr)malloc(sizeof PreCondition);
  pre->vars = (Variable*)malloc(sizeof Variable * len);
  pre->length = len;
  pre->index = 0;

  return pre;
}

void delete_precondition(PreConditionPtr pre)
{
  free(pre->vars);
  free(pre);
}


void add_variable_to_precondition(VariablePtr var, PreConditionPtr pre)
{
  pre->vars+pre->index*sizeof(Variable) = var;
  pre->index++;
}

// matches var->name
int match_precondition_variable_name(VariablePtr var, PreConditionPtr pre)
{
  for (int i = 0; i < pre->length; i++)
    if (var->name == var->name)
      return 0; // NOTE
  
  return -1;
}

// matches var->value
int match_precondition_variable_name(VariablePtr var, PreConditionPtr pre)
{
  for (int i = 0; i < pre->length; i++)
    if (var->value == var->value)
      return 0; // NOTE

  return -1;
}
