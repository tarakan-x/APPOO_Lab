using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace appoo3
{
    class Program
    {
        static void Main(string[] args)
        {
            CustomList list = new CustomList();
            CustomList result;
            CustomDeque dq;
            Utils utils = new Utils();

            string brand;
            int price;

            SmartPhone s1 = new SmartPhone("iPhone", "7", "Black", 699.99);
            SmartPhone s2 = new SmartPhone("iPhone", "6", "Space Gray", 499.90);
            SmartPhone s3 = new SmartPhone("Samsung", "Galaxy S8", "Black", 899.99);
            SmartPhone s4 = new SmartPhone("iPhone", "7", "Red", 799.99);
            SmartPhone s5 = new SmartPhone("Nokia", "3310", "Red", 49.99);
            SmartPhone s6 = new SmartPhone("Nokia", "3310", "Yellow", 49.99);
            SmartPhone s7 = new SmartPhone("Samsung", "Galaxy Grand Prime", "Black", 299.90);

            list.AddElement(s1);
            list.AddElement(s2);
            list.AddElement(s3);
            list.AddElement(s4);
            list.AddElement(s5);
            list.AddElement(s6);
            list.AddElement(s7);

            Console.WriteLine("1,2,3 Set|Sort|Print: \n");
            list.SortDescending();
            list.Print();
            Console.WriteLine("4,5,6 Search|Copy|Print: ");
            brand = Console.ReadLine();
            dq = list.OutputToDeque(brand);
            dq.Print();
            Console.WriteLine("7,8 Sort|Print: ");
            list.SortAscending();
            dq.SortAsceding();
            list.Print();
            dq.Print();
            Console.WriteLine("9,10 MergeContainers|Print: ");
            result = utils.Merge(list, dq);
            result.Print();
            Console.WriteLine("11 Count:");
            Console.WriteLine("\nInput price: ");
            price = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Found: " + result.CountByPrice(price));
            Console.WriteLine("12 Find:");
            brand = Console.ReadLine();
            result.OutputByBrand(brand);
            Console.ReadKey();
        }
    }
}
