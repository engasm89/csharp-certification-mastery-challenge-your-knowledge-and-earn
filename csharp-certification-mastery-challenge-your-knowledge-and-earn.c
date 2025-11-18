/*
 * Course: Csharp Certification Mastery Challenge Your Knowledge And Earn
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for console outputs
#include <string.h> // Include string utilities

// Define a simple test harness structure
typedef struct { // Begin struct
  const char *name; // Test name string
  int (*fn)(void); // Pointer to test function returning int
} TestCase; // End struct

// Test: string reverse implementation
int test_string_reverse(void) { // Function implementing a test
  char s[16]; // Buffer for string
  strncpy(s, "hello", sizeof(s)); // Copy literal into buffer
  s[sizeof(s) - 1] = '\0'; // Ensure termination
  size_t n = strlen(s); // Get length of string
  for (size_t i = 0; i < n / 2; ++i) { // Loop to reverse in place
    char tmp = s[i]; // Save left char
    s[i] = s[n - 1 - i]; // Move right char to left
    s[n - 1 - i] = tmp; // Place saved char on right
  } // End loop
  return strcmp(s, "olleh") == 0; // Return 1 if reversed correctly
} // End test

// Test: numerical algorithm (sum of first N)
int test_sum_n(void) { // Function implementing a numeric test
  int N = 10; // Define N
  int sum = (N * (N + 1)) / 2; // Compute triangular number
  return sum == 55; // Return 1 if result matches
} // End test

// Entry po// Main routine: orchestrates the csharp certification mastery challenge your knowledge and earn scenario
int main function
int main(void) { // Start main
  printf("C# Certification Mastery (C analog tests)\n"); // Title output
  TestCase cases[] = { // Define test cases array
    {"string_reverse", test_string_reverse}, // Register test 1
    {"sum_n", test_sum_n} // Register test 2
  }; // End array
  int pass = 0; // Counter for passed tests
  int total = (int)(sizeof(cases) / sizeof(cases[0])); // Compute total tests
  for (int i = 0; i < total; ++i) { // Iterate through tests
    int ok = cases[i].fn(); // Execute test function
    printf("%s: %s\n", cases[i].name, ok ? "PASS" : "FAIL"); // Print result
    pass += ok ? 1 : 0; // Accumulate passes
  } // End loop
  printf("Summary %d/%d PASS\n", pass, total); // Print summary
  return pass == total ? 0 : 1; // Return success if all pass
} // End main

