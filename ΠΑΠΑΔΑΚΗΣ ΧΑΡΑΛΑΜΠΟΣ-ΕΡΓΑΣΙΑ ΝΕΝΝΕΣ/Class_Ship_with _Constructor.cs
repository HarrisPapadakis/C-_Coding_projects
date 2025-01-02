using System;

class Ship
{
    private string name;
    private string country;
    private double capacity;
    private int year;

    // Constructor to initialize the ship's details
    public Ship(string name, string country, double capacity, int year)
    {
        this.name = name;
        this.country = country;
        this.capacity = capacity;
        this.year = year;
    }

    // Method to print the ship's details
    public void DisplayDetails()
    {
        Console.WriteLine($"Name: {name}, Country: {country}, Capacity: {capacity} cubic meters, Year: {year}");
    }

    static void Main()
    {
        // Create a Ship object and display its details
        Ship ship = new Ship("Titanic", "UK", 52310.5, 1912);
        ship.DisplayDetails();
    }
}

