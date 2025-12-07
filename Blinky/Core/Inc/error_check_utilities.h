#ifndef ERROR_CHECK_UTILITIES_H
#define ERROR_CHECK_UTILITIES_H

#include "error_codes.h"

void Central_Error_Handler(ErrorCode_t errorCode, const char *file, int line);

#define CHECK(func_call) 					                    \
   do {                                                         \
        ErrorCode_t result = (func_call);                       \
        if (result != E_OK) {                                   \
            Central_Error_Handler(result, __FILE__, __LINE__);  \
            return result; /* PROPAGATE ERROR UP */             \
        }                                                       \
    } while (0)


#endif
