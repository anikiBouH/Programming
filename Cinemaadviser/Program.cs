using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cinemaadviser
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Вы запустили программу Выбора фильма");
            Console.WriteLine("Введите свое имя!");
            string name = Console.ReadLine();
            Console.WriteLine("Здравствуйте " + name);
            Console.WriteLine("Какой жанр фильмов вы бы хотели посмотреть. П Т Ф ");
            string genre = Console.ReadLine();
            if (genre == "П")
            {
                Console.WriteLine("В таком случае, предлагаю вам посмотреть следующие фильмы:");
                Console.WriteLine("Властелин колец: Братство кольца");
                Console.WriteLine("Джанго освобожденный");
                Console.WriteLine("Хоббит: Нежданное путешествие");
                Console.WriteLine("Апокалипсис");
                Console.WriteLine("Джуманджи");
                Console.WriteLine("Поли");
                Console.WriteLine("Безумный Макс: Дорога ярости");
                Console.WriteLine("Хоббит");
                Console.WriteLine("Стражи Галактики");
                Console.WriteLine("Мумия");
                Console.WriteLine("Путь домой");
            }
            else if (genre == "Т")
            {
                Console.WriteLine("В таком случае, предлагаю вам посмотреть следующие фильмы:");
                Console.WriteLine("Леон");
                Console.WriteLine("Законопослушный гражданин");
                Console.WriteLine("Области тьмы");
                Console.WriteLine("Заложница");
                Console.WriteLine("Гнев");
                Console.WriteLine("Выхода нет");
                Console.WriteLine("Кровавый алмаз");
                Console.WriteLine("Красный дракон");
                Console.WriteLine("Судная ночь");
            }
            else if (genre == "Ф")
            {
                Console.WriteLine("В таком случае, предлагаю вам посмотреть следующие фильмы:");
                Console.WriteLine("Я легенда");
                Console.WriteLine("Веном");
                Console.WriteLine("Первому игроку приготовиться");
                Console.WriteLine("Поезд в Пусан");
                Console.WriteLine("Голодные игры");
                Console.WriteLine("Росомаха");
                Console.WriteLine("Хищник");
                Console.WriteLine("Логан");
            }
            else
            {
                Console.WriteLine("К сожелению жанра " + genre +" в списке нет");

            }


            Console.ReadLine(); 
        }
    }
}
