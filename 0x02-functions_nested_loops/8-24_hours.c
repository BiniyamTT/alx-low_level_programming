#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return:None
 */


void jack_bauer(void)
{
	int hh = 0;

	for (; hh <= 2; hh++)
	{
		int h = 0;

		for (; h <= 3; h++)
		{
			int mm = 0;

			for (; mm <= 5; mm++)
			{
				int m = 0;

				for (; m <= 9; m++)
				{
					_putchar('0' + hh);
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + mm);
					_putchar('0' +  m);
					_putchar('\n');
				}
			}
		}
	}

}
