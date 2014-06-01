#include <string.h>

// explicit_bzero taken from NetBSD
// The compiler will not optimize a call to a volatile function pointer
// so we use this function to clean up sensitive memory areas.

void explicit_bzero(void *b, size_t len)
{
    static void *(*volatile memset_impl)(void *, int, size_t) = memset;
    (*memset_impl)(b, 0, len);
}

