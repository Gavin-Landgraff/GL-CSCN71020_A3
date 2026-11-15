#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "main.h"

// For handling input cases when not lowercase eg. rOcK, ROCK, Rock. etc.
// Takes in a string and the size of the string not including the null terminator
// then returns the lowercase version.
char* lower_str(char* str, size_t size) {
	if (str == NULL) return NULL; // If null is inputted, returns null

	// Allocates the memory of the same size of str
	char* stro = (char*)malloc((size + 1) * sizeof(char));
	if (stro == NULL) return NULL; // returns null if allocation failed

	// Loops through for each char(excluding null terminator) in str
	for (size_t i = 0; i < size; i++) {
		// Sets each char in stro to the lowercase version of the char in str at the same index
		stro[i] = tolower(str[i]);
	}
	stro[size] = '\0'; // Adds the null terminator at the end so stro is a valid string

	return stro;
}

char* rock_paper_scissors(char* p1_obj, char* p2_obj) {
	char* result = "Invalid";
	if (p1_obj == NULL || p2_obj == NULL) return result; // returns invalid if either input is invalid

	// sets p1_str and p2_str to the lowercase version of the inputted strings 
	char* p1_str = lower_str(p1_obj, strlen(p1_obj)); 
	char* p2_str = lower_str(p2_obj, strlen(p2_obj));

	// Handles null function output and returns invalid
	if (p1_str == NULL || p2_str == NULL) {
		// Free memory allocated pointers before reurning
		free(p1_str);
		p1_str = NULL;

		free(p2_str);
		p2_str = NULL;
		return result;
	}

	// Enters if when the first or the second inputs don't match any valid object
	if (!(strcmp(p1_str, "rock") == 0 || strcmp(p1_str, "paper") == 0 || strcmp(p1_str, "scissors") == 0) ||
		!(strcmp(p2_str, "rock") == 0 || strcmp(p2_str, "paper") == 0 || strcmp(p2_str, "scissors") == 0)) {
		free(p1_str); // free before returning
		p1_str = NULL;
		
		free(p2_str);
		p2_str = NULL;
		return result;
	}

	// If the inputs are equal, then return Draw
	if (strcmp(p1_str, p2_str) == 0) {
		result = "Draw";
		
		// Free Pointers
		free(p1_str);
		p1_str = NULL;

		free(p2_str);
		p2_str = NULL;
		return result;
	}

	// Set the first character of p1_str and p2_str to their own variables
	// for smaller and easier to read lines in the switch
	char p1 = *p1_str;
	char p2 = *p2_str;

	// Checks all possible valid objects for p1
	switch (p1) {
		// if p1 is rock, and p2 is scissors: p1 wins, or if p1 is rock and p2 is paper, p2 wins
		case 'r': result = (p2 == 's') ? "Player1" : "Player2"; break;

		// if p1 is paper, and p2 is rock: p1 wins, or if p1 is paper and p2 is scissors, p2 wins
		case 'p': result = (p2 == 'r') ? "Player1" : "Player2"; break;

		// if p1 is scissors, and p2 is paper: p1 wins, or if p1 is scissors and p2 is rock, p2 wins
		case 's': result = (p2 == 'p') ? "Player1" : "Player2"; break;

		// Else, return invalid. This is never reached but here just in case
		default: result = "Invalid"; break;
	}

	// Free pointers at the end to avoid memory leaks
	free(p1_str);
	p1_str = NULL;

	free(p2_str);
	p2_str = NULL;
	return result;
}

int main(void) { return 0; }