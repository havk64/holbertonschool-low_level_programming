#include "holbertonschool.h"
/* ============================================================== *
 * The funcion positive_or_not takes an integer as argument and   *
 * prints 'P' if the number is positive, N if the number is       *
 * negative, and Z if the number is zero, using control flow to   *
 * do the job.                                                    *
 * ============================================================== */
void positive_or_not(int n)
{
    if(n > 0) print_char('P');
    else if(n < 0) print_char('N');
    else print_char('Z');
}
