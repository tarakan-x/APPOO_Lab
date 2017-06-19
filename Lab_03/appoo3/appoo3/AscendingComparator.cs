using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace appoo3
{
    class AscendingComparator : IComparer<SmartPhone>
    {
        public int Compare(SmartPhone x, SmartPhone y)
        {
            return x.GetPrice().CompareTo(y.GetPrice());
        }
    }
}
