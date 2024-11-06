using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter a number: ");
        int num = int.Parse(Console.ReadLine());

        if (num >= 100 && num <= 999)
        {
            Console.WriteLine("The number is three-digit.");
        }
        else
        {
            Console.WriteLine("The number is not three-digit.");
        }
    }
}
