package com.company;

/**
 * Created by bossa on 13.06.2017.
 */
import java.util.*;

class SmartPhone{
    private String brand;
    private String model;
    private String color;
    private double price;
    private Scanner keyboard = new Scanner(System.in);


    SmartPhone(String brand, String model, String color, double price) {
        this.brand = brand;
        this.model = model;
        this.color = color;
        this.price = price;
    }

    public void setBrand(String brand)
    {
        this.brand = brand;
    }

    public String getBrand()
    {
        return brand;
    }

    public void setModel(String model)
    {
        this.model = model;
    }

    public String getModel()
    {
        return model;
    }

    public void setColor(String color)
    {
        this.color = color;
    }

    public String getColor()
    {
        return color;
    }

    public void setPrice(double price)
    {
        this.price = price;
    }

    public double getPrice()
    {
        return price;
    }

    public void inputData()
    {
        System.out.println("Input Brand|Model|Color|Price: ");
        this.brand = keyboard.nextLine();
        this.model = keyboard.nextLine();
        this.color = keyboard.nextLine();
        this.price = keyboard.nextDouble();
    }

    @Override
    public String toString()
    {
        String print = "[Brand:"+getBrand() +"|Model:"+getModel() + "|Color:"+getColor() + "|Price:"+getPrice() +"]";
        return print;
    }

}
