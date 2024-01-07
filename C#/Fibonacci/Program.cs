Console.WriteLine("Fibonacci-Folge:");

int secondLast = 1;
int last = 1;

Console.WriteLine("{0,9:N0}", secondLast);
Console.WriteLine("{0,9:N0}", last);

int current = secondLast + last;

Console.WriteLine("{0,9:N0}", current);

Console.ReadLine();