#include <stdio.h>
#include <stdlib.h>

#define INCLUDEOS_UNIMPLEMENTED()                         \
    printf("%s: unimplemented\n", __PRETTY_FUNCTION__);   \
    while(1);
