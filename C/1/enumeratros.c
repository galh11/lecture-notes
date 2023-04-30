enum Gender { MALE, FEMALE };
enum Month { JAN, FEB, MAR, /* ... */, DEC, MONTH_NUM };
enum Season { SUMMER = 1, FALL, WINTER = 8, SPRING };

enum Gender gender = MALE;
enum Season seasons[MONTH_NUM];
seasons[JAN] = WINTER;

...

int count = 0;
for (int month = 0; month < MONTH_NUM; month++)
{
    count += (seasons[month] == WINTER);
}

printf("%d months are in winter\n", count);

enum Month next_month(enum Month current)
{
    if(current == DEC)
        {
            return JAN;
        }
    return (enum Month)(current + 1);
}