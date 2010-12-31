#include <stdio.h>

/* Jesse McGinnis
 * Assignment 7, Q2
 * regular.c
 */

/* Intent: mutates array R so that it contains the first n regular numbers in
 * 			increasing order
 * Pre:    the array R is large enough
 * Post:   the array R has been mutated to contain the first n regular numbers
 *				in increasing order
 */
void regular(int R[], int n)
{
	/* initialize array R */
	R[0] = 1;
	
	/* base variables */
	int next_reg_num = 0, next_reg_num_fif = 0;	// position in array of reg nums
	int base_3 = 3, base_5 = 5;	// numbers get updated by multiplication
	int base_2, base_15;
	
	/* calculate regular numbers, and update array */
	int counter = 1;
	while (counter < n)
	{
		base_2 = 2 * R[next_reg_num];
		base_15 = 15 * R[next_reg_num_fif];
		
		/* (2 * R[next_reg_num]) is the smallest */
		if (base_2 < base_3 &&
          base_2 < base_5 &&
          base_2 <= base_15)
		{
			R[counter] = base_2;
			next_reg_num += 1;
			counter += 1;
			
		/* (3 * base_3) is the smallest */
		} else if (base_3 < base_2 &&
                 base_3 < base_5 &&
                 base_3 < base_15)
		{
			R[counter] = base_3;
			base_3 *= 3;
			counter += 1;
			
		/* (5 * base_5) is the smallest */
		} else if (base_5 < base_2 &&
                 base_5 < base_3 &&
                 base_5 < base_15)
      {
			R[counter] = base_5;
			base_5 *= 5;
			counter += 1;
			
		/* (15 * R[next_reg_num_fif]) is the smallest */
		} else if (base_15 <= base_2 &&
                 base_15 < base_3 &&
                 base_15 < base_5)
      {
			if ( (base_15) != R[counter - 1] )
			{
            R[counter] = base_15;
            counter += 1;
			}
			next_reg_num_fif += 1;
		}
	}
}
