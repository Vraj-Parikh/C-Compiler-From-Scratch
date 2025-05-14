#ifndef GOSU_LEXER_H
#define GOSU_LEXER_H
#include "token.h"
#include <stdio.h>

typedef struct
{
    char *src;
    size_t src_size;
    char c;
    unsigned int i;
} lexer_gosu ;

lexer_gosu* init_lexer(char* src);
void lexer_advance(lexer_gosu* lexer);
token_gosu* lexer_next_token(lexer_gosu* lexer);
#endif