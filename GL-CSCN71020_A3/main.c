#include <stdio.h>
#include <string.h>

#include "main.h"

char* rock_paper_scissors(char* p1_obj, char* p2_obj) {
	char* p1_str = p1_obj;
	char* p2_str = p2_obj;

	char* result = "Invalid";
	
	if (!(strcmp(p1_str, "Rock") == 0 || strcmp(p1_str, "Paper") == 0 || strcmp(p1_str, "Scissors") == 0) ||
		!(strcmp(p2_str, "Rock") == 0 || strcmp(p2_str, "Paper") == 0 || strcmp(p2_str, "Scissors") == 0)) {
		return result;
	}

	if (strcmp(p1_str, p2_str) == 0) {
		result = "Draw";
	}

	return result;
}

int main(void) { return 0; }