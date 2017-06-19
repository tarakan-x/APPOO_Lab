package com.company;

import java.util.*;

//1. Создать объект-контейнер в соответствии с вариантом задания и заполнить его данными,
// тип которых определяется вариантом задания.
//2. Просмотреть контейнер.
//3. Изменить контейнер, удалив из него одни элементы и заменив другие.
//4. Просмотреть контейнер, используя для доступа к его элементам итераторы.
//5. Создать второй контейнер этого же класса и заполнить его данными того же типа, что и первый контейнер.
//6. Изменить первый контейнер, удалив из него n элементов после заданного
// и добавив затем в него все элементы из второго контейнера.
//7. Просмотреть первый и второй контейнеры.

public class Main {
    public static void main(String[] args)
    {
        List<SmartPhone> list = new ArrayList<SmartPhone>();
        List<SmartPhone> list1 = new ArrayList<SmartPhone>();
        CDT cdt = new CDT();
        cdt.setSize();
        System.out.println("1.Set List: ");
        cdt.setList(list);
        System.out.println("2.Print List: ");
        cdt.printListNoIterator(list);
        System.out.println("3.Replace in List: ");
        cdt.replaceInList(list);
        System.out.println("4.Print List using iterators: ");
        cdt.printListIterator(list);
        System.out.println("5.Set second container: ");
        cdt.setList(list1);
        System.out.println("6.Remove n Elements and Append second container: ");
        cdt.removeRange(list);
        cdt.addAll(list,list1);
        System.out.println("7.Print results: ");
        cdt.printListNoIterator(list);
        cdt.printListNoIterator(list1);
    }
}
