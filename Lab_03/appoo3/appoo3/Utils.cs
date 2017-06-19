using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace appoo3
{
    class Utils
    {
        public CustomList Merge(CustomList lst,CustomDeque dq)
        {
            CustomList result = new CustomList();
            foreach(var obj in lst.GetList())
            {
                result.AddElement(obj);
            }
            foreach(var obj in dq.GetDeque())
            {
                result.AddElement(obj);
            }
            return result;
        }
    }
}
