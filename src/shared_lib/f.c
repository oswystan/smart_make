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
#include <string.h>
#include "f.h"
#include "c.h"

void framework() {
    struct common_t c;
    memset(&c, 0x00, sizeof(c));
    printf("enter %s, %d\n", __FUNCTION__, __LINE__);
}

/********************************** END **********************************************/

