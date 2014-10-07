/*
 **************************************************************************************
 *       Filename:  log.h
 *    Description:   header file
 *
 *        Version:  1.0
 *        Created:  2014-04-20 10:20:12
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */

#ifndef LOG_H_INCLUDED
#define LOG_H_INCLUDED

#ifndef LOG_TAG
#define LOG_TAG ""
#endif

#include <stdio.h>

#ifndef LOGV_ENABLE
#define LOGV_ENABLE 0
#endif

#ifndef LOGI_ENABLE
#define LOGI_ENABLE 1
#endif

#ifndef LOGW_ENABLE
#define LOGW_ENABLE 1
#endif

#ifndef LOGE_ENABLE
#define LOGE_ENABLE 1
#endif

#if LOGV_ENABLE
#define logv(fmt, ...) printf("[V/"LOG_TAG"]"fmt"\n", ##__VA_ARGS__);
#else
#define logv(fmt, ...) 
#endif

#if LOGI_ENABLE
#define logi(fmt, ...) printf("[I/"LOG_TAG"]"fmt"\n", ##__VA_ARGS__);
#else
#define logi(fmt, ...) 
#endif

#if LOGW_ENABLE
#define logw(fmt, ...) printf("[W/"LOG_TAG"]"fmt"\n", ##__VA_ARGS__);
#else
#define logw(fmt, ...) 
#endif

#if LOGE_ENABLE
#define loge(fmt, ...) printf("[E/"LOG_TAG"]"fmt"\n", ##__VA_ARGS__);
#else
#define loge(fmt, ...) 
#endif

#endif /*LOG_H_INCLUDED*/

/********************************* END ***********************************************/

