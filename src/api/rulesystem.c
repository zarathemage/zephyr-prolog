#include "rulesystem.h"

#include <string.h>

PreConditionPtr derive_precondition(char *string, int len, PreConditionPtr startpre)
{
  int index = -1, j = 0;
  char workstring[len];

  char *not = "not\0";
  char *and = "and\0";
  char *or = "or\0";
  
  while (index++ < len) {

    if (string[i] == ' ') {
      workstring[j] = '\0';
      j = 0;

      if (strncmp(workstring, not, 3)  == 0) {

      } else if (strncmp(workstring, and, 3)  == 0) {

      } else if (strncmp(workstring, or, 2)  == 0) {

      }
      
    } else {
      workstring[j++] = string[i];
    }
    
    return startpre;
  
}
