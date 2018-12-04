#include <cs50.h>
#include <stdio.h>

int main(void)
{
    typedef struct
    {
        int month;
        int day;
        int year;
    }
    date;

    typedef struct
    {
        string artist;
        float ticketPrice;
        int attendance;
        date concertDate;
    }
    concert;

    date d1;
    d1.month = get_int("Month: ");
    d1.day = get_int("Day: ");
    d1.year = get_int("Year: ");

    concert c1 = { "The Struts", 20.85, 1000, d1 };

    FILE* concertHistory = fopen("concerts.csv", "w");
    if (concertHistory == NULL)
    {
        printf("Error creating file\n");
        return 1;
    }

    fprintf(concertHistory, "Artist,Ticket Price,Attendance,Date\n");
    fprintf(concertHistory, "%s,%.2f,%d,%d-%d-%d\n", c1.artist, c1.ticketPrice, c1.attendance, c1.concertDate.month, c1.concertDate.day, c1.concertDate.year);

    fclose(concertHistory);
}