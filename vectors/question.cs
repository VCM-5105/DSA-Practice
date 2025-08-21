using System;

class Program
{
    static void Main()
    {
        Console.Write("Please enter a date and time: ");
        string input = Console.ReadLine();

        if (DateTime.TryParse(input, out DateTime result))
        {
            Console.WriteLine("Valid DateTime: " + result);
        }
        else
        {
            Console.WriteLine("Invalid input");
        }
    }
}
