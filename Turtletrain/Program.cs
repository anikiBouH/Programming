using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.SmallBasic.Library;

namespace Turtletrain
{
    class Program
    {
        static void WriteT(int size)
        {
            Turtle.Angle = 0;
            Turtle.Move(size);
            Turtle.Angle = 270;
            Turtle.Move(size / 2.5);
            Turtle.Angle = 90;
            Turtle.Move(2*(size /2.5));
        }


        static void WriteO(int size)
        {
            Turtle.Angle = 0;
            Turtle.Move(size);
            Turtle.Angle = 90;
            Turtle.Move(size / 1.5);
            Turtle.Angle = 180;
            Turtle.Move(size);
            Turtle.Angle = 270;
            Turtle.Move(size / 1.5);


        }

        static void WriteR(int size)
        {
            Turtle.Angle = 0;
            Turtle.Move(size);
            Turtle.Angle = 90;
            Turtle.Move(size / 2);
            Turtle.Angle = 180;
            Turtle.Move(size /2);
            Turtle.Angle = 270;
            Turtle.Move(size / 2);
            Turtle.Angle = 135;
            int length = Convert.ToInt32(System.Math.Sqrt(size*size/2));
            Turtle.Move(length);


        }



        static void Main(string[] args)
        {
            Turtle.Speed = 15;
            int sizex = 200;
            int sizey = sizex;
            // Буква "Т"
            Turtle.X = sizex;
            Turtle.Y = sizey+20;
            WriteT(sizex);
            // Конец "Т"


            // Буква "O"
            Turtle.X = sizex*1.6;
            Turtle.Y = sizey+20;
            WriteO(sizex/2);
            // Конец "O"


            // Буква "R"
            Turtle.X = sizex*2.5;
            Turtle.Y = sizey+20;
            WriteR(sizex/2);
            // Конец "R"

            // Буква "Т"
            Turtle.X = sizex*3.6;
            Turtle.Y = sizey+20;
            WriteT(sizex/2);
            // Конец "Т"

            //int i = 0;
            //Turtle.Speed = 9;
            //int n = 90;
            //while (i < 16)
            //{
            //    Turtle.Move(100);
            //    Turtle.TurnRight();
            //    Turtle.Turn(60);
            //    Turtle.Move(20);
            //    Turtle.Turn(n);
            //    if (i % 2 == 1) { n = -n; }
            //    i++;
            //}
        }
    }
}
