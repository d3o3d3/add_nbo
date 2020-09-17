#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include "get.h"

uint32_t getData(char * filename){
    FILE * fp;
    uint32_t data;

    fp = fopen(filename, "r");
    if(!fp){
        printf("%s FILEOPEN ERROR!\n", filename);
        exit(0);
    }

    if(fread(&data, 1, 4, fp) != 4){
        printf("%s CAN'T READ 4 BYTES\n", filename);
        exit(0);
    }
    data = ntohl(data);
    
    fclose(fp);
    return data;
}