/*****************************************************************************
 * Copyright (C) 2014-2015
 * file:    libsort.h
 * author:  gozfree <gozfree@163.com>
 * created: 2015-08-09 01:23
 * updated: 2015-08-09 01:23
 *****************************************************************************/
#ifndef _LIBSORT_H_
#define _LIBSORT_H_

#include <libgzf.h>
#ifdef __cplusplus
extern "C" {
#endif

void heap_sort(void *base, size_t num, size_t size);
void bubble_sort(void *array, size_t num, size_t size);

#ifdef __cplusplus
}
#endif
#endif
