using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RandomNameGenerator
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] starts = { "a", "b", "c", "d", "e", "f", "g", "i", "j", "k", "l", "m", "n", "o", "r", "p", "s", "t", "u" };
            Dictionary<string, string[]> speakable = new Dictionary<string, string[]>()
            {
                { "a", new string[] { "b", "d", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "r", "s", "t", "u" } },
                { "b", new string[] { "a", "e", "i", "l", "o", "r", "u" } },
                { "c", new string[] { "h" } },
                { "d", new string[] { "a", "e", "i", "l", "o", "r", "u" } },
                { "e", new string[] { "f", "i", "j", "k", "m", "n", "p", "r", "s", "t", "u" } },
                { "f", new string[] { "a", "e", "i", "l", "o", "r", "u" } },
                { "g", new string[] { "a", "e", "i", "l", "o", "u" } },
                { "h", new string[] { "a", "e", "i", "o", "u" } },
                { "i", new string[] { "b", "f", "k", "l", "m", "n", "p", "r", "h", "s", "t" } },
                { "j", new string[] { "a", "e", "i", "o", "u" } },
                { "k", new string[] { "a", "e", "i", "l", "o", "u" } },
                { "l", new string[] { "a", "e", "i", "o", "u" } },
                { "m", new string[] { "a", "e", "i", "l", "o", "u" } },
                { "n", new string[] { "a", "e", "i", "o", "u" } },
                { "o", new string[] { "b", "c", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "r", "s", "t" } },
                { "p", new string[] { "a", "e", "i", "l", "o", "r", "u" } },
                { "r", new string[] { "a", "e", "i", "o", "u" } },
                { "s", new string[] { "a", "e", "c", "i", "o", "u", "t" } },
                { "t", new string[] { "a", "e", "i", "o", "u" } },
                { "u", new string[] { "b", "g", "i", "k", "n", "m", "p", "r", "s", "t" } }
            };
            int minLength = 5;
            int maxLength = 10;

            string name = "";
            Random rnd = new Random();
            int length = rnd.Next(minLength, maxLength);
            string char = starts[rnd.Next(starts.Length)];

            for (int i = 0; i < length; i++)
            {
                char = speakable[char][rnd.Next(speakable[char].Length)];
                name += char;
            }
            Console.WriteLine(name);
        }
    }
}
