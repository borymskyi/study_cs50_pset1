//Запросить высоту пирамиды.
//Вывести в консоль пирамиду из символов "#"
//Если пользователь ввел неправельные данные, повторить запрос.

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int GetHeight, CodeHeight, Empty, Block;
    do{
        GetHeight = get_int("Height: ");
    } while (GetHeight <= 0 || GetHeight >= 9);
    
    for (CodeHeight = 1; CodeHeight <= GetHeight; CodeHeight++){
        for (Empty = 1; Empty <= GetHeight - CodeHeight; Empty++){
            printf(" ");
        }
        for (Block = 0; Block <= CodeHeight; Block++){
            printf("#");
        }
        printf("\n");
    }
}
