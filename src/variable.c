#include "variable.h"

void fillin_variable_name(NAME n, VariablePtr var)
{
  var->name = n;
}

void fillin_variable_value(VALUE v, VariablePtr var)
{
  var->value = v;
}

void fillin_variable_type(TYPE t, VariablePtr var)
{
  var->type = t;
}
