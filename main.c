#include "include/center.h"

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#define sleep(x) Sleep(x)
#else
#include <unistd.h>
#define sleep(x) usleep((x) * 1000)
#endif

int main(void)
{
    char line[WIDTH];

    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
            line[j] = ' ';

        int stars = (i == HEIGHT - 1) ? 0 : (2 * i - 1);
        if (stars < 0) stars = 0;
        if (stars > WIDTH) stars = WIDTH;

        for (int s = 0; s < stars; s++)
        {
            line[s] = '*';
            print_centered(line, s + 1);
            sleep(100);
        }

        if (i == HEIGHT - 1)
        {
            line[0] = '|';
            print_centered(line, 1);
            sleep(100);
        }

        printf("\n");
    }

    return 0;
}
