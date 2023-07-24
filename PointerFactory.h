#include <stdint.h>

enum ptr_type {CHAR, INT, LONG, FLOAT, DOUBLE};

struct ptr_mngr {
    static uint8_t amount;
    ptr_type type;
    void *ptr_mem;
};