#ifndef __VARIABLE_H_
#define __VARIABLE_H_

#include "zp_.h"

typedef struct _variable {
  VALUE value;
  NAME name;
  TYPE type;
} Variable;

typedef Variable *VariablePtr;

void fillin_variable_name(NAME n, VariablePtr var);
void fillin_variable_value(VALUE v, VariablePtr var);
void fillin_variable_type(TYPE t, VariablePtr var);

#endif
