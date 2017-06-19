using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace appoo3
{
    class DescendingComparator : IComparer<SmartPhone>
    {
        public int Compare(SmartPhone x, SmartPhone y)
        {
            return y.GetPrice().CompareTo(x.GetPrice());
        }
    }
}
