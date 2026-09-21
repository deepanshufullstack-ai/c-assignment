#include<stdio.h>
enum Color {
    RED,
    GREEN,
    BLUE
};

enum Status {
    FAILED=0,
    SUCCESS=1,
    PEDING=2
};

enum Number {
    A=10,
    B,
    C,
    D
};

enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY
};

enum TrafficLight
{
    R,
    Y,
    G
};

int main(){
    // conceptual example
    enum Color c;
    c=GREEN;
    printf("%d\n", c);

    // giving your own values
    enum Status s=SUCCESS;
    printf("%d\n", s);

    // what happens after custom values
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    printf("%d\n", D);

    // enum with switch
    enum Day day = TUESDAY;

    switch(day)
    {
        case MONDAY:
            printf("Monday");
            break;

        case TUESDAY:
            printf("Tuesday");
            break;

        case WEDNESDAY:
            printf("Wednesday");
            break;
    }
    
    // real life example
    enum TrafficLight signal = G;

    if(signal == R)
    {
        printf("Stop");
    }
    else if(signal == Y)
    {
        printf("Wait");
    }
    else if(signal == G)
    {
        printf("Go");
    }
    return 0;
}










