//[10 мин помыться = 120 бутылок 0.5 воды].
//Программа запрашивает у пользователя количество минут, проведенных в душе
//Пользователь вводит положительное целое число
//Программа выводит на экран количество бутылочек, израсходованных пользователем.
//Дано 1мин. = 6л. воды / 1л. = 2 бутылки

#include <cs50.h>
#include <stdio.h>

int shower(int result);

int main(void)
{
    int minutes;
    printf("Please give me your shower time: ");
    minutes = get_int("");
    shower(minutes);
}

int shower(int result)
{
    printf("You used %i bottles for shower\n", result);
    return result * 12;
}
