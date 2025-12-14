#include "error_check_utilities.h"
#include "main.h"

// --- CENTRAL ERROR HANDLER ---
void Central_Error_Handler(ErrorCode_t errorCode, const char *file, int line)
{
	//Function will load Error code, file number and line number onto registers before halting
	//This way we can reference them and figure out what caused the program to halt

    // --- Enter Safe State and Halt ---

	//Double check file pointer
	const char *log_file_ptr;
	if(file == 0)
		log_file_ptr = "UNKNOWN FILE";
	else
		log_file_ptr = file;


    __disable_irq();
    while (1)
    {

    }
}
