#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "main.h"

char* lower_str(char* str, size_t size) {
	if (str == NULL) return NULL;

	char* stro = (char*)malloc((size + 1) * sizeof(char));
	if (stro == NULL) return NULL;

	for (size_t i = 0; i < size; i++) {
		stro[i] = tolower(str[i]);
	}
	stro[size] = '\0';

	return stro;
}

char* rock_paper_scissors(char* p1_obj, char* p2_obj) {
	char* result = "Invalid";
	if (p1_obj == NULL || p2_obj == NULL) return result;

	char* p1_str = lower_str(p1_obj, strlen(p1_obj));
	char* p2_str = lower_str(p2_obj, strlen(p2_obj));

	if (p1_str == NULL || p2_str == NULL) {
		free(p1_str);
		p1_str = NULL;

		free(p2_str);
		p2_str = NULL;
		return result;
	}

	if (!(strcmp(p1_str, "rock") == 0 || strcmp(p1_str, "paper") == 0 || strcmp(p1_str, "scissors") == 0) ||
		!(strcmp(p2_str, "rock") == 0 || strcmp(p2_str, "paper") == 0 || strcmp(p2_str, "scissors") == 0)) {
		free(p1_str);
		p1_str = NULL;
		
		free(p2_str);
		p2_str = NULL;
		return result;
	}

	if (strcmp(p1_str, p2_str) == 0) {
		result = "Draw";

		free(p1_str);
		p1_str = NULL;

		free(p2_str);
		p2_str = NULL;
		return result;
	}

	char p1 = *p1_str;
	char p2 = *p2_str;

	switch (p1) {
		case 'r': result = (p2 == 's') ? "Player1" : "Player2"; break;
		case 'p': result = (p2 == 'r') ? "Player1" : "Player2"; break;
		case 's': result = (p2 == 'p') ? "Player1" : "Player2"; break;
		default: result = "Invalid"; break;
	}

	free(p1_str);
	p1_str = NULL;

	free(p2_str);
	p2_str = NULL;
	return result;
}

int main(void) { return 0; }