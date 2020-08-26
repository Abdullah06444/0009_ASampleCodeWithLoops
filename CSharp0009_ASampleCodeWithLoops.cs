using System;

namespace CSharp0009_ASampleCodeWithLoops
{
    class CSharp0009_ASampleCodeWithLoops
    {
        static void Main(string[] args)
        {

            int number, counter = 0;
            double sum = 0;

            while ((number = int.Parse(Console.ReadLine())) != -1)
            {    // -1 olana kadar devam et

                bool isPrime = true, canDivideby10 = false;
                
                int i;
                if (number % 10 == 0)
                    canDivideby10 = true;                    
                else
                    if (number < 2)
                        isPrime = false;
                    else
                        for (i = 2; i <= (float)number / 2; i++)
                        {

                            if (number % i == 0)
                            {

                                isPrime = false;
                                break;
                            }
                        }

                if (!canDivideby10 && !isPrime)
                    sum += Math.Pow(number, 2);

                counter++;
                //Console.WriteLine("number: " + number + " counter: " + counter + " sum:" + sum/*String.Format("{0:0}", sum)*/);
            }

            Console.Write(counter + " " + sum);
        }
    }
}
