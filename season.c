#include<stdio.h>
enum month
{
    January = 1,
    Feb, March, April, May, June, July, August, September, October, November, December
};
void main()
{
    enum month m ;
    m = Feb;
    char *season;
    switch(m)
{
    case December: case January: case Feb:
    season  = "winter";break;
    case March: case April: case May:
    season = "summer";break;
    case June: case July: case August:
    season = "Monsoon";
    break;
    case September: case October: case  November:
    season = "spring";
    break;
}
printf("%d",May);
}