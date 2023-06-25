#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define TRACK_LENGTH 50
#define CAR_LENGTH 4
#define MAX_SPEED 3

void drawTrack(int position);
void drawCar(int position);
void clearScreen();
int randomInt(int max);

int main()
{
    int carPosition = TRACK_LENGTH / 2;
    int trackPosition = 0;
    int speed = 0;
    int distance = 0;

    srand(time(NULL));

    while (1)
    {
        clearScreen();

        drawTrack(trackPosition);
        drawCar(carPosition);

        printf("Distance: %d meters\n", distance);

        if (kbhit())
        {
            char input = getch();

            if (input == ' ')
            {
                speed++;
                if (speed > MAX_SPEED)
                {
                    speed = MAX_SPEED;
                }
            }
            else if (input == 'q')
            {
                break;
            }
        }

        distance += speed;
        trackPosition += speed;

        if (trackPosition >= TRACK_LENGTH)
        {
            trackPosition = 0;
        }

        carPosition = carPosition + randomInt(3) - 1;

        if (carPosition < 0)
        {
            carPosition = 0;
        }
        else if (carPosition > TRACK_LENGTH - CAR_LENGTH)
        {
            carPosition = TRACK_LENGTH - CAR_LENGTH;
        }

        if (carPosition >= trackPosition && carPosition <= trackPosition + CAR_LENGTH)
        {
            printf("Game Over!\n");
            break;
        }

        fflush(stdout);

        usleep(50000);
    }

    return 0;
}

void drawTrack(int position)
{
    int i;

    for (i = 0; i < TRACK_LENGTH; i++)
    {
        if (i == position || i == position + 1 || i == position + 2)
        {
            printf("|");
        }
        else
        {
            printf(" ");
        }
    }

    printf("\n");
}

void drawCar(int position)
{
    int i;

    for (i = 0; i < TRACK_LENGTH; i++)
    {
        if (i >= position && i < position + CAR_LENGTH)
        {
            printf("=");
        }
        else
        {
            printf(" ");
        }
    }

    printf("\n");
}

void clearScreen()
{
    printf("\033[2J\033[H");
}

int randomInt(int max)
{
    return rand() % max;
}

