#include <string.h>

// explicit_bzero taken from NetBSD
// The compiler will not optimize a call to a volatile function pointer
// so we use this function to clean up sensitive memory areas.

void *memset_secure(void *b, int c, size_t len)
{
    static void *(*volatile memset_impl)(void *, int, size_t) = memset;
    return (*memset_impl)(b, c, len);
}
