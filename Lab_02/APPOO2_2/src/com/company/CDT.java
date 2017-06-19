package com.company;

/**
 * Created by bossa on 13.06.2017.
 */
import java.util.*;

public class CDT {
    private Scanner keyboard = new Scanner(System.in);
    private int size;

    public CDT(){}

    public void setSize()
    {
        this.size = keyboard.nextInt();
    }

    public int getSize()
    {
        return this.size;
    }

    public void setList(List<SmartPhone> list)
    {
        for (int i=0; i<size; i++)
        {
            SmartPhone obj = new SmartPhone();
            obj.inputData();
            list.add(obj);
        }
    }

    void replaceInList(List<SmartPhone> list)
    {
        System.out.println("\nInput index: ");
        int index = keyboard.nextInt();
        if(!(index < 0 || index >= list.size()))
        {
            list.remove(index);
            System.out.println("Set new Value: ");
            SmartPhone temp = new SmartPhone();
            temp.inputData();
            list.add(index,temp);
        }
    }

    public void printListNoIterator(List<SmartPhone> list) {
        System.out.println("[PRINT LIST]");
        for(SmartPhone temp : list)
        {
            temp.outputData();
        }
    }

    public void printListIterator(List<SmartPhone> list)
    {
        System.out.println("[PRINT LIST]");
        Iterator<SmartPhone> it = list.iterator();
        while(it.hasNext())
        {
            System.out.println(it.next());
        }
    }

    void removeRange(List<SmartPhone> list)
    {
        System.out.println("Input range: ");
        int from = keyboard.nextInt(),to = keyboard.nextInt();
        if(!(from < 0 || to > list.size() || from > to || from == to)) {
            Iterator it = list.subList(from, to).iterator();
            while (it.hasNext()) {
                list.remove(it.next());
            }
        }
    }

    void addAll(List<SmartPhone> list, List<SmartPhone> list1)
    {
        list.addAll(list1);
    }

}
