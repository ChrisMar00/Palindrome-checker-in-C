# PalindromeStringInC

This script helps you check if a string is a palindrome using C language.

To use the script just compile it in a terminal and add the word you want to check as an argument:

Windows:
gcc palindrome.c -o palindrome.exe

Linux:
gcc palindrome.c -o palindrome

Then execute it:

Windows:
./palindrome 'word'

Linux:
palindrome 'word'

If no or more than one argument is passed, an error is raised:

Usage:
./palindrome 'string'

If the word is palindrome then it will output: "'word' is palindrome!", else: "'word' isn't palindrome!"

