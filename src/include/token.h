#ifndef GOSU_TOKEN_H
#define GOSU_TOKEN_H

typedef struct {
    char* value;
    enum {
        TOKEN_ID,
        TOKEN_ASSIGNMENT,
        TOKEN_COMPARISION,
    } type;
} token_gosu;

token_gosu* init_token(char* value,int type);
#endif