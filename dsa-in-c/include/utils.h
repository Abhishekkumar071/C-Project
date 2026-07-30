#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Color codes for terminal output */
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"

/* Safe memory allocation */
static inline void *safe_malloc(size_t size) {
    void *ptr = malloc(size);
    if (!ptr) {
        fprintf(stderr, RED "ERROR: Memory allocation failed\n" RESET);
        exit(EXIT_FAILURE);
    }
    return ptr;
}

/* Swap two integers */
static inline void swap(int *a, int *b) {
    int tmp = *a; *a = *b; *b = tmp;
}

/* Print a horizontal divider */
static inline void print_divider(void) {
    printf(CYAN "----------------------------------------\n" RESET);
}

#endif /* UTILS_H */
