using System;

class OverloadingExample {
    public int Add(int a, int b) {
        return a + b; // Adds two integers
    }

    public double Add(double a, double b) {
        return a + b; // Adds two doubles
    }
    
    public string Add(string a, string b) {
        return a + b; // Concatenates two strings
    }
    
    static void Main() {
        OverloadingExample example = new OverloadingExample();
        
        Console.WriteLine(example.Add(5, 10));        // Output: 15
        Console.WriteLine(example.Add(5.5, 2.3));    // Output: 7.8
        Console.WriteLine(example.Add("Hello, ", "World!")); // Output: Hello, World!
    }
}
