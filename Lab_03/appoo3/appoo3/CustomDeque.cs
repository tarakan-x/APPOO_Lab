using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace appoo3
{
    class CustomDeque
    {
        private LinkedList<SmartPhone> dq;

        public CustomDeque()
        {
            this.dq = new LinkedList<SmartPhone>();
        }

        public void AddElement(SmartPhone obj)
        {
            this.dq.AddLast(obj);
        }

        public LinkedList<SmartPhone> GetDeque()
        {
            return dq;
        }

        public void Print()
        {
            Console.WriteLine("\n[Print Deque]\n");
            foreach(var obj in dq)
            {
                Console.WriteLine(obj);
            }
        }

        public void SortAsceding()
        {
            CustomList temp = new CustomList();
            foreach(var obj in dq)
            {
                temp.AddElement(obj);
            }
            temp.SortAscending();
            dq.Clear();
            foreach(var obj in temp.GetList())
            {
                dq.AddLast(obj);
            }
        }
    }
}
