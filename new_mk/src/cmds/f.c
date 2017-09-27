/*
 **************************************************************************************
 *       Filename:  f.c
 *    Description:   source file
 *
 *        Version:  1.0
 *        Created:  2017-09-27 09:56:27
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */

#include <stdio.h>

void driver() {
    printf("enter %s, %d\n", __FUNCTION__, __LINE__);
}

int main(int argc, const char *argv[]) {
    driver();
    return 0;
}
/********************************** END **********************************************/

