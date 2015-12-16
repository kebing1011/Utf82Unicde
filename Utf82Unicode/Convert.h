//
//  Convert.h
//  TESTC
//
//  Created by Mao on 12/15/15.
//  Copyright © 2015 00000. All rights reserved.
//

#ifndef Convert_h
#define Convert_h

#include <stdio.h>

//int u82ub(char *input, size_t insize, char* output, size_t outsize);
//int ub2u8(char *input, size_t insize, char* output, size_t outsize);


size_t ub2utf8(const unsigned short* unicode, size_t unicodelen, unsigned char** utf8);
size_t utf82ub(const unsigned char* utf8, size_t utf8len, unsigned short** unicode);


#endif /* Convert_h */
