package com.company;

/**
 * Created by bossa on 13.06.2017.
 */
import java.util.*;

class CustomDeque{
    Deque<SmartPhone> dq;

    CustomDeque(){
        this.dq = new ArrayDeque<>();
    }

    void addElement(SmartPhone p)
    {
        dq.add(p);
    }

    void sortAscending(){
        CustomList temp = new CustomList();
        for(SmartPhone obj : dq) temp.addElement(obj);
        temp.sortAscending();
        temp.writeToDeque(dq);
    }

    void PrintDeque(){
        System.out.println("Print Deque: ");
        for(SmartPhone obj : dq){
            System.out.println(obj);
        }
    }

    CustomList AddToList(CustomList list){
        CustomList result = new CustomList();
        for(SmartPhone obj : list.getList()){
            result.addElement(obj);
        }
        for(SmartPhone obj : dq){
            result.addElement(obj);
        }
        return result;
    }
}