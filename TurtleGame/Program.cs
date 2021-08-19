using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.SmallBasic.Library;

namespace TurtleGame
{
    class Program
    {
        static void Main(string[] args)
        {
            GraphicsWindow.KeyDown += GraphicsWindow_KeyDown;
            Turtle.PenUp();
            GraphicsWindow.BrushColor = "Red";
            var eat = Shapes.AddRectangle(10, 10);
            int MaxX = GraphicsWindow.Width;
            int MaxY = GraphicsWindow.Height;
            Random X = new Random();
            Random Y = new Random();
            int coordinateX = X.Next(MaxX);
            int coordinateY = Y.Next(MaxY);
            Shapes.Move(eat, coordinateX, coordinateY);
            Turtle.Speed = 4;
            while (true)
            {
                Turtle.Move(10);
                MaxX = GraphicsWindow.Width;
                MaxY = GraphicsWindow.Height;
                if (Turtle.X >= coordinateX-10 && Turtle.Y >= coordinateY-10 &&
                    Turtle.X <= coordinateX + 10 && Turtle.Y <= coordinateY + 10)
                {
                    
                    
                    coordinateX = X.Next(MaxX);
                    coordinateY = Y.Next(MaxY);
                    Shapes.Move(eat, coordinateX, coordinateY);
                    Turtle.Speed = Turtle.Speed +1;
                }

                if (Turtle.X >= MaxX) { Turtle.X = 1; }
                if (Turtle.Y >= MaxY) { Turtle.Y = 1; }
                if (Turtle.X <= 0) { Turtle.X = MaxX-1; }
                if (Turtle.Y <= 0) { Turtle.Y = MaxY-1; }
                
            }

        }

        private static void GraphicsWindow_KeyDown()
        {
            if (GraphicsWindow.LastKey == "Up")
            {
                Turtle.Angle = 0;
            }
            else if (GraphicsWindow.LastKey == "Right")
            {
                Turtle.Angle = 90;
            }
            else if (GraphicsWindow.LastKey == "Down")
            {
                Turtle.Angle = 180;
            }
            else if (GraphicsWindow.LastKey == "Left")
            {
                Turtle.Angle = -90;
            }

        }
    }
}
