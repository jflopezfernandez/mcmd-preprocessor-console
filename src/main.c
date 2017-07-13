
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <time.h>
#include <stdint.h>


typedef int32_t INT;
typedef int64_t INT64;


typedef struct _configuration_parameters {
    INT a;
    INT b;
} CONFIG_PARAMS;


void print(struct _configuration_parameters *config);


int main()
{
    printf("size of INT: %I64u bytes\n", sizeof(INT));
    printf("size of INT64: %I64u bytes\n", sizeof(INT64));
    printf("size of double: %I64u bytes\n", sizeof(double));

    return EXIT_SUCCESS;
}


void print(struct _configuration_parameters *config) {
    printf("Config id: %i\n", config->a);
    printf("Config id: %i\n", config->b);
}
