#include "postcondition.h"

#include <stdlib.h>

PostConditionPtr make_postcondition(int len, PostConditionPtr post)
{
  post = (PostConditionPtr)malloc(sizeof PostCondition);
  post->vars = (VALUE*)malloc(sizeof VALUE * len);
  post->length = len;
  post->index = 0;

  return post;
}

void delete_postcondition(PostConditionPtr post)
{
  free(post->vars);
  free(post);
}

void add_variable_to_postcondition(VariablePtr var, PostConditionPtr post)
{
  post->vars+post->index*sizeof(Variable) = var;
  post->index++;
}

// matches var->name
int match_postcondition_variable_name(VariablePtr var, PostConditionPtr post)
{
  for (int i = 0; i < post->length; i++)
    if (var->name == var->name)
      return 0; // NOTE
  
  return -1;
}

// matches var->value
int match_postcondition_variable_name(VariablePtr var, PostConditionPtr post)
{
  for (int i = 0; i < post->length; i++)
    if (var->value == var->value)
      return 0; // NOTE

  return -1;
}
