//
//  fun.h
//  kfd
//
//  Created by Seo Hyun-gyu on 2023/07/25.
//

#ifndef fun_h
#define fun_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char* mountVnode(uint64_t vnode, char* pathname);
int do_fun(void);
void do_fun2(char** enabledTweaks, int numTweaks);

#pragma once

//bool overwrite_file(int file_to_overwrite, off_t file_offset, const void* overwrite_data, size_t overwrite_length);

#endif /* fun_h */
