/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h>

int
memcmp(const void* s1,
       const void* s2,
       size_t n) {
  return (void)s1, (void)s2, (void)n, -1; // TODO
}