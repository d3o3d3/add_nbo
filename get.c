#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include "get.h"

uint32_t getData(char * filename){
    FILE * fp;
    uint32_t data;

    fp = fopen(filename, "r");
    fread(&data, 1, 4, fp);
    data = ntohl(data);
    
    fclose(fp);

    return data;
}