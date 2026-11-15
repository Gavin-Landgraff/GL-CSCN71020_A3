#include <stdio.h>
#include <string.h>

#include "main.h"

char* rock_paper_scissors(char* p1_obj, char* p2_obj) {
	char* result = "Invalid";
	
	if (strcmp(p1_obj, p2_obj) == 0) {
		result = "Draw";
	}

	return result;
}

int main(void) { return 0; }