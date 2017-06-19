using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace appoo3
{
    class SmartPhone
    {
        private String brand;
        private String model;
        private String color;
        private double price;

        public SmartPhone(String brand, String model, String color, double price)
        {
            this.brand = brand;
            this.model = model;
            this.color = color;
            this.price = price;
        }

        public String GetBrand()
        {
            return brand;
        }

        public void SetBrand(String brand)
        {
            this.brand = brand;
        }

        public String GetModel()
        {
            return model;
        }

        public void SetModel(String model)
        {
            this.model = model;
        }

        public String GetColor()
        {
            return color;
        }

        public void SetColor(String color)
        {
            this.color = color;
        }

        public double GetPrice()
        {
            return price;
        }

        public void SetPrice(double price)
        {
            this.price = price;
        }

        public override string ToString()
        {
            return "["+this.brand+"|"+this.model+"|"+this.color+"|"+this.price+"$]";
        }

    }
}
