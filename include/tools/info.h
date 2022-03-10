//info.h
#define print_header \
    printf("%s\n", divide);\
    printf("%s\n", header);\
    printf("%s\n", divide);

#define print_divide \
    printf("%s\n", divide);

/**
 * @brief  Generates a given type ID
 *
 * @param dest store the target string of the ID
 * @param type IDtype,U-Users,G-Goods,O-Orders
 */
void genID(char *dest, char type);

/*
* @brief Generates current time
* @param dest store the target string of date
*
*/
void getData(char* dest);