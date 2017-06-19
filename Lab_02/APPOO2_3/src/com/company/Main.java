package com.company;

import java.util.*;

public class Main {

    public static void main(String[] args){
        CustomList list = new CustomList();
        CustomList result;
        CustomDeque dq;
        Scanner keyboard = new Scanner(System.in);

        String brand;
        int price;

        SmartPhone sp1 = new SmartPhone("iPhone", "5S" ,"Gray",210);
        SmartPhone sp2 = new SmartPhone("Nokia", "3310" ,"Yellow",49.99);
        SmartPhone sp3 = new SmartPhone("iPhone", "7S Plus" ,"Red",899);
        SmartPhone sp4 = new SmartPhone("Samsung", "Galaxy S8" ,"Black",850);

        list.addElement(sp1);
        list.addElement(sp2);
        list.addElement(sp3);
        list.addElement(sp4);

        System.out.println("1,2,3: Set|Sort|Print List:");
        list.sortDescending();
        list.PrintList();
        System.out.println("4,5: Find|Place in Deque:");
        System.out.println("Set Brand: ");
        brand = keyboard.nextLine();
        dq = list.OutputBrandsByCondition(brand);
        System.out.println("6: Print Deque:");
        dq.PrintDeque();
        System.out.println("7,8: Sort|Print:");
        list.sortAscending();
        dq.sortAscending();
        list.PrintList();
        dq.PrintDeque();
        System.out.println("9|10 Merge Containers|Print:");
        result = dq.AddToList(list);
        result.PrintList();
        System.out.println("11 Count:");
        System.out.println("Input price:");
        price = keyboard.nextInt();
        System.out.println("Found: "+result.CountByPrice(price));
        System.out.println("12 Find:");
        System.out.println("Input brand:");
        brand = keyboard.next();
        System.out.println(result.findByBrand(brand));
    }
}

