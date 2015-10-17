#include <stdio.h>

/* To shorten example, not using argp */
int main ()
{
  enum planets
  {
    Mercury,
    Venus,
    Earth,
    Mars,
    Jupiter,
    Saturn,
    Uranus,
    Neptune,
    Pluto
  };

  enum planets planet1, planet2;

  planet1 = Mars;
  planet2 = Earth;

  if (planet1 > planet2)
    puts ("Mars is farther from the Sun than Earth is.");
  else
    puts ("Earth is farther from the Sun than Mars is.");

  return 0;
}
