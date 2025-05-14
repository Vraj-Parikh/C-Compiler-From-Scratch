#ifndef GOSU_LEXER_H
#define GOSU_LEXER_H
typedef struct LEXER_STRUCT
{
    char *src;
    char c;
    unsigned int i;
} lexer_gosu ;

lexer_gosu* init_lexer(char* src);
#endif