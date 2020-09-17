#include <stdio.h>
#include "get.h"

int main(int argc, char * argv[])
{
    uint32_t data1, data2, sum;

    if(argc != 3)
    {
        printf("please input like below\n$add_nbo filename1 filename2\n");
        return 0;
    }

    data1 = getData(argv[1]);
    data2 = getData(argv[2]);
    sum = data1 + data2;
    
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", data1, data1, data2, data2, sum, sum);
    return 0;
}