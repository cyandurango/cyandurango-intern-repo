#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/* Individual checker functions for absolute redundancy */
bool is_A(char c) { return c == 'a' || c == 'A'; }
bool is_E(char c) { return c == 'e' || c == 'E'; }
bool is_I(char c) { return c == 'i' || c == 'I'; }
bool is_O(char c) { return c == 'o' || c == 'O'; }
bool is_U(char c) { return c == 'u' || c == 'U'; }

/* The "Analyzer" Function using pass-by-reference pointers */
void Analyze_Character(char input, bool *is_valid_letter, bool *is_vowel, bool *is_consonant) {
    // Initialize state flags
    *is_valid_letter = false;
    *is_vowel = false;
    *is_consonant = false;

    // Check if it's actually an alphabet letter first
    if (isalpha(input)) {
        *is_valid_letter = true;
        
        // Routing through all our redundant helper functions
        if (is_A(input) || is_E(input) || is_I(input) || is_O(input) || is_U(input)) {
            *is_vowel = true;
        } else {
            // If it's a letter and not a vowel, it must be a consonant
            *is_consonant = true;
        }
    }
}

int main() {
    char letter = 'x';
    
    // Memory allocations for our state flags
    bool valid_flag, vowel_flag, consonant_flag;
    
    printf("Analyzing character: '%c'\n", letter);

    // Passing memory addresses instead of just using a simple return value
    Analyze_Character(letter, &valid_flag, &vowel_flag, &consonant_flag);

    if (!valid_flag) {
        printf("Result: Invalid input. Not a letter.\n");
    } else if (vowel_flag) {
        printf("Result: It is a VOWEL.\n");
    } else if (consonant_flag) {
        printf("Result: It is a CONSONANT.\n");
    }

    return 0;
}