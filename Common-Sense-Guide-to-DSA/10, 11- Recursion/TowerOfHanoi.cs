using Playground;

class Program
{

    // Solution for N discs:
    // Move (n-1) Discs from A to B using C.
    // Move 1 Disc from A to C.
    // Move (n-1) Discs from B to C using A.

    // source, destination and aux 
    static void towerOfHanoi(int number, char A, char B, char C)
    {
        if (number > 0)
        {
            towerOfHanoi(number - 1, A, C, B);
            Console.WriteLine($"Moving a disc from {A} to {C}");
            towerOfHanoi(number - 1, B, A, C);
        }
    }

    static void Main(string[] args)
    {
        towerOfHanoi(3, 'A', 'B', 'C');
    }
}