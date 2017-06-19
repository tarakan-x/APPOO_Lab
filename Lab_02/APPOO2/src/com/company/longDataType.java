package com.company;

/**
 * Created by bossa on 13.06.2017.
 */import java.util.*;

class longDataType {
    private Scanner keyboard = new Scanner(System.in);
    private int size;

    void setSize()
    {
        size  = keyboard.nextInt();
    }

    void setList(List<Long> list)
    {
        for(int i = 0; i < size; i++)
        {
            long value = keyboard.nextLong();
            list.add(value);
        }
    }

    void printListNoIterators(List<Long> list)
    {
        for(int i=0;i<list.size(); i++)
        {
            System.out.println(list.get(i));
        }
    }

    void replaceInList(List<Long> list)
    {
        System.out.println("\nInput index: ");
        int index = keyboard.nextInt();
        if(!(index < 0 || index >= list.size()))
        {
            list.remove(index);
            System.out.println("Set new Value: ");
            long value = keyboard.nextLong();
            list.add(index,value);
        }
    }

    void printListWithIterators(List<Long> list)
    {
        Iterator it = list.iterator();
        while(it.hasNext())
        {
            System.out.println(it.next());
        }
    }

    void removeRange(List<Long> list)
    {
        System.out.println("Input range: ");
        int from = keyboard.nextInt(),to = keyboard.nextInt();
        if(!(from < 0 || to > list.size() || from > to)) {
            Iterator it = list.subList(from, to).iterator();
            while (it.hasNext()) {
                list.remove(it.next());
            }
        }
    }

    void addAll(List<Long> list, List<Long> list1)
    {
        list.addAll(list1);
    }

    void printList(List<Long> list)
    {
        System.out.println(list);
    }
}

