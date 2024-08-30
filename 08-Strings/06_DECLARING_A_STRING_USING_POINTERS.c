// We can declare strings using pointers.
// >>char *ptr = "harry";
// This tells the compiler to store the string in memory and assigned address is stored in a 
// char pointer poiting to first character of string.

// Note:
// 1. Once a string is defined using >>char st [] = “harry”, it cannot be reinitialized to 
// something else.
// 2. A string defined using pointers can be reinitialized.
// ptr = "Rohan";