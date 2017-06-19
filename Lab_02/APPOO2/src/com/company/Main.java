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
    public static void main(String[] argv)
    {
        List<Long> list = new ArrayList<>();
        List<Long> list1 = new ArrayList<>();
        longDataType obj = new longDataType();
        System.out.println("Input the size: ");
        obj.setSize();
        System.out.println("1.Set List: ");
        obj.setList(list);
        System.out.println("2.Print List: ");
        obj.printListNoIterators(list);
        System.out.println("3.Replace: ");
        obj.replaceInList(list);
        System.out.println("4.Print List with Iterators: ");
        obj.printListWithIterators(list);
        System.out.println("5.Set the second container: ");
        obj.setList(list1);
        System.out.println("6.Remove n elements: ");
        obj.removeRange(list);
        obj.addAll(list,list1);
        System.out.println("7.Print both containers: ");
        obj.printList(list);
        obj.printList(list1);
    }
}
