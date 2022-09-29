#include <stdio.h>

int main()
{
	int w, h;
	char codeup[][100] = {
		" ****  ***  ***   ***** *   * ****",
		"*     *   * *  *  *     *   * *   *",
		"*     *   * *   * *     *   * *   *",
		"*     *   * *   * ****  *   * ****",
		"*     *   * *   * *     *   * *",
		"*     *   * *  *  *     *   * *",
		" ****  ***  ***   *****  ***  *"
	};
	scanf("%d %d", &w, &h);
	
	for (int i = 0; i < 7; i++)
		for (int y = 0; y < h; y++) {
			for (int j = 0; codeup[i][j] != '\0'; j++)
				for (int x = 0; x < w; x++) 
					printf("%c", codeup[i][j]);
			if (i == 6 && y == h - 1)
				break;
			printf("\n");
		}
	return 0;
}