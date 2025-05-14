#include <stdlib.h>
#include <string.h>
#include "include/lexer.h"

lexer_gosu* init_lexer(char* src){
    lexer_gosu* lexer = (lexer_gosu*)calloc(1,sizeof(lexer_gosu));
    lexer->src = src;
    lexer->src_size = strlen(src);
    lexer->i = 0;
    lexer->c= src[lexer->i];
    return lexer;
}

void lexer_advance(lexer_gosu* lexer){

}
token_gosu* lexer_next_token(lexer_gosu* lexer){
    
}