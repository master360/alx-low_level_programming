/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_left = 0;
    int i;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        days_in_month[1] = 29;
    }

    for (i = month - 1; i < 12; i++)
    {
        days_left += days_in_month[i];
    }

    days_left -= day - 1;

    if (days_left == 0 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month == 2 && day == 29)
    {
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else if (days_left < 0)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else
    {
        printf("Day of the year: %d\n", convert_day(month, day));
        printf("Remaining days: %d\n", days_left);
    }
}
