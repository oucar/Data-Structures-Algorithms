using System;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;

class Stack
{

    static readonly int MAX = 10;
    private int _topElement;
    private char[] _stack = new char[MAX];

    // Constructor
    public Stack()
    {
        _topElement = -1;
    }

    // Is the Stack Empty
    public bool IsEmpty()
    {
        if (_topElement < 0) return true;
        return false;
    }

    // Insert a new element at the end (PUSH)
    public bool Push(char data)
    {
        if (_topElement >= MAX)
        {
            Console.WriteLine("Stack Overflow!");
            return false;
        }
        else
        {
            _stack[_topElement + 1] = data;
            _topElement++;
            // Console.WriteLine($"Added '{data}' to position {_topElement + 1}");
            return true;
        }
    }

    // Remove an element from the end (POP)
    public char? Pop()
    {
        if (_topElement < 0)
        {
            Console.WriteLine("Stack Underflow!");
            return null;
        }
        else
        {
            char value = _stack[_topElement];
            _topElement--;
            return value;
        }
    }

    // Get the Top Element
    public char TopElement()
    {
        if (_topElement < 0)
        {
            Console.WriteLine("Stack Underflow!");
            return '-';
        }
        else
        {
            return _stack[_topElement];
        }
    }
}

class Linter
{
    Stack stack = new Stack();


    public string Lint(string text)
    {
        char? lastBrace = null;

        foreach(var character in text)
        {

            if (IsOpeningBrace(character))
            {
                lastBrace = character;

                stack.Push(character);
            }

            else if (IsClosingBrace(character))
            {
                lastBrace = character;

                char? poppedOpeningBrace = stack.Pop();

                // If stack is empty (returned null)
                // It means that an opening brace is missing.
                if (poppedOpeningBrace == null)
                {
                    return $"Linter: {character} doesn't have an opening brace.";
                }

                // If the popped opening brace doesn't match the current
                // closing brace --> mismatching brace
                if (!BracesMatch(poppedOpeningBrace, character))
                {
                    return $"Linter: {character} has mismatched opening brace.";
                }
            }
        }

        // If we get to the end of line, and the the stack isn't empty
        if (!stack.IsEmpty())
        {
            // it means that we have an opening brace without a
            // corresponding closing brace
            return $"Linter: {lastBrace} doesn't have a closing brace.";
        }

        return "Linter: Valid string.";
    }

    private bool IsOpeningBrace(char character)
    {
        char[] openingBraces = { '(', '[', '{' };

        return (openingBraces.Contains(character)) ? true : false;
    }

    private bool IsClosingBrace(char character)
    {
        char[] openingBraces = { ')', ']', '}' };

        return (openingBraces.Contains(character)) ? true : false;
    }

    private bool BracesMatch(char? openingBrace, char closingBrace)
    {
        if (openingBrace == '(' && closingBrace == ')') return true;
        if (openingBrace == '[' && closingBrace == ']') return true;
        if (openingBrace == '{' && closingBrace == '}') return true;

        return false;
    }


}



class Program
{


    static void Main(string[] args)
    {
        Linter linter = new Linter();

        var a1 = linter.Lint("{123}");
        Console.WriteLine(a1);

        var a2 = linter.Lint("{123)");
        Console.WriteLine(a2);

        var a3 = linter.Lint("[123}");
        Console.WriteLine(a3);

        var a4 = linter.Lint("123}");
        Console.WriteLine(a4);

        var a5 = linter.Lint("(123");
        Console.WriteLine(a5);




    }
}