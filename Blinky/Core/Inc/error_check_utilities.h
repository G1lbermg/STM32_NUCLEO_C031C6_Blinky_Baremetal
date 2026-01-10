#ifndef ERROR_CHECK_UTILITIES_H
#define ERROR_CHECK_UTILITIES_H

#include "error_codes.h"

void Central_Error_Handler(ErrorCode_t errorCode, const char *file, int line);

static inline void check_Error(ErrorCode_t result, const char *file, int line) {

	//Double check file pointer
	const char *log_file_ptr;
	if(file == 0)
		log_file_ptr = "UNKNOWN FILE";
	else
		log_file_ptr = file;

    if (result != E_OK) {
    	//Set Break Point line below
        Central_Error_Handler(result, log_file_ptr, line);
    }
}

#endif
