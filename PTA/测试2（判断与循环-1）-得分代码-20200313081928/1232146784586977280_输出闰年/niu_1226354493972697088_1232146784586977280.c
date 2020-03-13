int is_leap_year(int year){
    return (year % 4 == 0) && (year % 100 != 0) || year % 400 == 0;
}

int main()
{
    int current, year;
    scanf("%d", &current);
    if(current<=2000 || current>2100)
    {
        printf("Invalid year!\n");
    }else if(current < 2004)
    {
        printf("None");
    }
    for(year=2001; year<=current; year++)
    {
        if(is_leap_year(year))
        {
            printf("%d\n", year);
        }
    }
    return 0;
}