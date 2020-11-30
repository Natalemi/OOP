using System;
/* В консольном приложении:
1) создать стохастическую матрицу n на m (элементы матрицы больше или равны нулю и меньше или равны единицы; 0<=x<=1);
2) найти сумму элементов четных столбцов;
3) умножить матрицу на скаляр;
4) проверить матрицу на стохастичность. */

namespace lr9
{
    class Matrix
    {
        static void Print(double[,] Array, int n, int m)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    Console.Write(Array[i, j] + "\t");
                }
                Console.WriteLine();
            }
        }

        static void Main(string[] args)
        {
            Console.Write("Введите количество строк: ");
            int n = Convert.ToInt32(Console.ReadLine());
            Console.Write("Введите количество столбцов: ");
            int m = Convert.ToInt32(Console.ReadLine());

            double[,] Array = new double[n, m];

            Random rand = new Random();

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    Array[i, j] = rand.NextDouble();
                }
            }

            Print(Array, n, m);

            Console.WriteLine("Заполнение случайными числами, от 0 до 1");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    Array[i, j] = rand.NextDouble();
                }
            }

            double sum_cols = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 1; j < m; j += 2)
                {
                    sum_cols = sum_cols + Array[i, j];
                }
            }
            Console.WriteLine("\nСумма элементов четных столбцов = " + sum_cols + "\n");

            Console.Write("Введите скаляр: ");
            int k = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    Array[i, j] = Array[i, j] * k;
                }
            }

            Print(Array, n, m);

            Console.WriteLine("\nПроверка, является ли матрица стохастической");
            int No = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (Array[i, j] < 0 || Array[i, j] > 1) { No++; }
                }
            }
            if (No == 0) { Console.WriteLine("Матрица стохастическая"); }
            else { Console.WriteLine("Матрица не стохастическая"); }
        }
    }
}