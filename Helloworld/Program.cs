using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Helloworld
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("программа *****  ");
            Console.WriteLine("Введите первое число");
            string a = Console.ReadLine();
            Console.WriteLine("Введите второе число");
            string b = Console.ReadLine();

            int num1 = Int32.Parse(a);
            int num2 = Int32.Parse(b);

            int result = num1 + num2;
            double ar = (double) (num1 + num2) / 2;
            Console.WriteLine(num1 + num2);
            Console.WriteLine(num1 - num2);
            Console.WriteLine(num1 * num2);
            Console.WriteLine(num1 / num2);
            Console.WriteLine(ar);

            Console.ReadLine();
        }
    }
}
