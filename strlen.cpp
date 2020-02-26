/**
 * @file strlen.cpp
 * @author Matthew Darby
 * @brief two variations on the C/C++ strlen() function
 * @version 0.1
 * @date 2020-02-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */


/**
 * @brief loop through looking for '0' 
 * If '\0' is not found, increment a counter variable by one
 * 
 * @param src [in] c_string for which you want to find length of
 * @return int total number of characters for the c_string passed
 */
int strlen(char* src) {
    int count = 0;
    for ( ; src[count] != '\0'; count++) {}
    return count;
}

/**
 * @brief loop through the string looking for the '\0' terminating char
 * return the difference between the beginning and end of the string
 * 
 * @param str char* value you want to find the length of
 * @return int total number of characters for the c_string passed
 */
int strlen(char* str) {
    char* beg = str;
    while (*str != '\0') {
        str++;
    }
    return str - beg;
}
