# 3600-MajorProject

UPDATE(S):
- Update 1 - Eric Tsuchiya - 10/18/2022 -
-   All files except Palindrome.c fully implemented.

FILES:
-   power.c - created by Eric Tsuchiya
-   reverse.c - created by Brandon Tsuchiya
-   replace.c - created by Sahardeed Ahmed
-   Palindrome.c (case sensitive) - created by Nicolas Hidalgo Rotunno - still in work.
- major1.c and major1.h created by Nicolas Hidalgo Rotunno - Edited by Eric Tsuchiya

DEVELOPMENT INFORMATION:
Eric Tsuchiya oversaw most of the development of major1.h, major1.c, and makefile.
Eric Tsuchiya oversaw team communication and made sure everyone was doing their part.
Nicolas Hidalgo Rotunno assisted with some of the features of major1.c and major1.h. Created the files originally, along with the GitHub repository.

KNOWN BUGS:
If user enters a letter/word instead of a number when prompted to select an option from the menu, the loop will run indefinitely.
Palindrom.c unfinished. Nicolas Hidalgo Rotunno is working on it. Preventing the makefile from working properly. (See RUN section )

RUN:
- makefile malfunction - Palindrome.c prevents compilation.
- TO RUN WITHOUT Palindrome.c, enter: gcc major1.c power.c reverse.c replace.c -o binops -lm
- ./binops
