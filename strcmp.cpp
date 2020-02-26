/**
 * @file strcmp.cpp
 * @author Matthew Darby
 * @brief two variations on the C/C++ strcmp() function
 * @version 0.1
 * @date 2020-02-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

/**
 * @brief compares two char* values lexiographically
 * 
 * @param s1 [in] char* to be compared
 * @param s2 [in] char* to be compared
 * @return int < 0 means s1 is the smaller value, 0 means they are equivalent,
 * > 0 means s2 is the smaller value
 */
int strcmp(char* s1, char* s2) {
  int x = 0;
  char* ptr1 = s1;
  char* ptr2 = s2;

  while ( (*ptr1 != '\0') && (*ptr2 != '\0') ) {
    if (*ptr1 == *ptr2) {
      x = 0;
    }

    if (*ptr1 != *ptr2) {
      x = *ptr1 - *ptr2;
    }

    ptr1++;
    ptr2++;
  }
  return x;
}

/**
 * @brief compares two char* values lexiographically
 * 
 * @param s1 [in] char* to be compared
 * @param s2 [in] char* to be compared
 * @return int < 0 means s1 is the smaller value, 0 means they are equivalent,
 * > 0 means s2 is the smaller value
 */
int strcmp(char* s1, char* s2) {
  int diff = *s1 - *s2;
  
  while (diff == 0 && *s1 != '\0') {
    s1++;
    s2++;
    diff = *s1 - *s2;
  }
  return diff;
}