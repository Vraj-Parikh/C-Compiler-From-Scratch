#include <stdlib.h>
#include "include/lexer.h"

lexer_gosu* init_lexer(char* src){
    lexer_gosu* lexer = (lexer_gosu*)calloc(1,sizeof(lexer_gosu));
    lexer->src = src;
    return lexer;
}
