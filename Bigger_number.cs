using System;

class Program
{
    static void Main()
    {
        Console.Write("Εισάγετε τον πρώτο αριθμό: ");
        int num1 = int.Parse(Console.ReadLine());

        Console.Write("Εισάγετε τον δεύτερο αριθμό: ");
        int num2 = int.Parse(Console.ReadLine());

        if (num1 > num2)
        {
            Console.WriteLine($"Ο μεγαλύτερος αριθμός είναι: {num1}");
        }
        else if (num2 > num1)
        {
            Console.WriteLine($"Ο μεγαλύτερος αριθμός είναι: {num2}");
        }
        else
        {
            Console.WriteLine("Οι δύο αριθμοί είναι ίσοι.");
        }
    }
}
