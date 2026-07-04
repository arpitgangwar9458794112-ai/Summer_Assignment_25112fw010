#include <stdio.h>

int main()
{
    int totalSeats = 50;
    int bookedSeats, availableSeats;
    char name[50];

    printf("===== Ticket Booking System =====\n");

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Total Seats Available: %d\n", totalSeats);

    printf("Enter Number of Seats to Book: ");
    scanf("%d", &bookedSeats);

    if (bookedSeats <= 0)
    {
        printf("Invalid number of seats.\n");
    }
    else if (bookedSeats > totalSeats)
    {
        printf("Booking Failed! Only %d seats are available.\n", totalSeats);
    }
    else
    {
        availableSeats = totalSeats - bookedSeats;

        printf("\n===== Booking Successful =====\n");
        printf("Customer Name : %s\n", name);
        printf("Seats Booked  : %d\n", bookedSeats);
        printf("Seats Left    : %d\n", availableSeats);
    }

    return 0;
}