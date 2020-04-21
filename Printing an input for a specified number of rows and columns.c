#include <stdio.h>

int main(void)
{
	{
                int rows, columns;
                for(int i = 0; i < 500; i++) {
                    printf("Enter the number of rows (0 to quit): ");
                    scanf("%d", &rows);
					if(rows == 0) {
                        break;
                    }
					printf("Enter the number of columns: "); 
					scanf("%d", &columns);
                    for(int i = 0; i < rows; i++) {
                        for(int j = 0; j < columns; j++) {
                            printf("U");
                        }
                        printf("\n");
                    }
                }
            }
}
