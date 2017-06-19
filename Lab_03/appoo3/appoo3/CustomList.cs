using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace appoo3
{
    class CustomList
    {
        private List<SmartPhone> list;

        public CustomList()
        {
            this.list = new List<SmartPhone>();
        }

        public List<SmartPhone> GetList()
        {
            return list;
        }

        public void AddElement(SmartPhone obj)
        {
            this.list.Add(obj);
        }

        public List<SmartPhone> FindByBrand(String brand)
        {
            List<SmartPhone> temp = new List<SmartPhone>();
            foreach (var obj in list)
            {
                if (obj.GetBrand().Equals(brand))
                {
                    temp.Add(obj);
                }
            }
            return temp;
        }

        public CustomDeque OutputToDeque(String brand)
        {
            List<SmartPhone> temp = FindByBrand(brand);
            CustomDeque result = new CustomDeque();
            if (temp.Count() != 0)
            {
                foreach (var obj in temp)
                {
                    result.AddElement(obj);
                    this.list.Remove(obj);
                }
            }
            else
            {
                Console.WriteLine("Nothing Found!");
            }
            return result;
        }

        public void SortDescending()
        {
            list.Sort(new DescendingComparator());
        }

        public void SortAscending()
        {
            list.Sort(new AscendingComparator());
        }

        public int CountByPrice(int price)
        {
            int count = 0;
            foreach (var obj in list)
            {
                if (obj.GetPrice() > price)
                {
                    count += 1;
                }
            }
            return count;
        }

        public void Print()
        {
            Console.WriteLine("\n[Print List]\n");
            foreach (var obj in list)
            {
                Console.WriteLine(obj);
            }
        }

        public void OutputByBrand(String brand)
        {
            if (list.Count() != 0)
            {
                Console.WriteLine("Found:");
                foreach (var obj in list)
                {
                    if (obj.GetBrand().Equals(brand))
                    {
                        Console.WriteLine(obj);
                    }
                }
            }
            else
            {
                Console.WriteLine("Nothing Found:!");
            }
        }
    }
}
