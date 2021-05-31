#include "rulesystem.h"

#include <string.h>
#include <stdlib.h>

PreConditionPtr *derive_precondition(char *rulestring)
{
  int index = -1, j = 0, len = strlen(rulestring);
  char *workstring;
  char substring[len];
  
  char *lp = "(\0"; // left parens

  int newlen = 1024; // the default length of a new var list in a precondition and result length
  // the resulting preconditions
  PreConditionPtr *result = (PreConditionPtr*)malloc(sizeof(PreConditionPtr) * newlen);
  int resultindex = 0;
  
  while (index++ < len) {

    if (rulestring[index] == ' ') {
      substring[j] = '\0';
      j = 0;

      // encounter left parens, get substring and derive pre-conditions
      if (strncmp(rulestring, lp, 1) == 0) {
	  workstring = get_workstring(rulestring);
	  derive_precondition_substring(workstring, len, &resultindex, result);
      }
      
    }
  }
  
  return result;
}

    
static PreConditionPtr *derive_precondition_substring(char *rulestring, int len, int *resultindex, PreConditionPtr *result) {
  int index = -1, j = 0;
  
  char substring[len];
  
  char *not = "not\0";
  char *and = "and\0";
  char *or = "or\0";

  int newlen = 1024; // the default length of a new var list in a precondition
  int newindex = 0;
  
  int matched_not; // = 0;
  
  while (index++ < len) {

    if (rulestring[i] == ' ') {
      substring[j] = '\0';
      j = 0;

      /*      if (strncmp(substring, lp, 1) == 0) {
	workstring = get_workstring(
	} else */
      if (strncmp(substring, not, 3)  == 0) {
	//FIXME matched_not_string(&matched_not);
      } else if (strncmp(substring, and, 3)  == 0) {
	
      } else if (strncmp(substring, or, 2)  == 0) {
	//FIXME matched_or_string();
      } else { // match a variable (name)
	PreConditionPtr newprecondition = NULL;
	newprecondition = make_precondition(newlen, newprecondition);
	matched_var(substring, &matched_not, newprecondition);
	result[*resultindex] = newprecondition;
	(*resultindex)++;
      }
    } else {
      substring[j++] = rulestring[i];
    }

  }
  return result;
}

static void matched_var(char *substring, int *matched_not, PreConditionPtr newprecondition) {
  VariablePtr var = (VariablePtr)malloc(sizeof(Variable));
  fillin_variable_name(generate_name(substring), var);
  fillin_variable_type(*macthed_not, var);
  add_variable_to_precondition(var, PreConditionPtr newprecondition);
}

static char *generate_name(char *substring, int *matched_not) {
  return (int)substring; // FIXME gene alphanums or something
}

// get a substring of rulestring between '(' and ')'
static char *get_workstring(char *rulestring, int len) {
  int index = -1, j = 0;
  char workstring[len];
  char *rp = ")\0"; // right parens
  
  while (index++ < len) {
    if (strncmp(rulestring, rp, 1) == 0) {
	return workstring;
    } else {
      workstring[j++] = rulestring[index];
    }
  }
  // never reached with a good rule
  return NULL;
}
  
PreConditionPtr *derive_precondition_from_image(char *bytes)
{
  return NULL; // FIXME
}
