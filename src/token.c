#include <stdlib.h>
#include "include/token.h"

token_gosu* init_token(char* value,int type){
    token_gosu* token = (token_gosu*)calloc(1,sizeof(token_gosu));
    token -> value = value;
    token -> type = type;
    return token;
}