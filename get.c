#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include "get.h"

uint32_t getData(char * filename){
    FILE * fp;
    uint32_t * pdata = malloc(sizeof(uint32_t));
    uint32_t data;

    fp = fopen(filename, "r");
    fread(pdata, 4, 1, fp);
    data = ntohl(*pdata);
    
    fclose(fp);
    free(pdata);

    return data;
}