#include "stdafx.h"
#include <math.h>
#include <string.h>

int main()
{
	char binarniBroj[100] = { '1','0','0','1','0','0','0','1','0','1','1','1','1','1','1','0' };
	int dekadskiBroj = 0, tempBroj = 0;
	int i = 0, j = 0;
	int duzinaNiza;

	duzinaNiza = strlen(binarniBroj);
	printf("\nDuzina niza je: %d\n", duzinaNiza);
	
	j = duzinaNiza-1;
	for (i = 0; i < duzinaNiza; i++) {
		tempBroj = (binarniBroj[i]-48) * (double)pow(2,j);
		dekadskiBroj += tempBroj;
		j--;
	}
	printf("Dekadski broj je: %d", dekadskiBroj);
	
    return 0;
}
