package com.company;

/**
 * Created by bossa on 13.06.2017.
 */
import java.util.*;

class CustomList {
    List<SmartPhone> list;

    CustomList()
    {
        this.list = new ArrayList<>();
    }

    void addElement(SmartPhone p)
    {
        this.list.add(p);
    }

    List<SmartPhone> getList()
    {
        return list;
    }

    List<SmartPhone> findByBrand(String brand)
    {
        List<SmartPhone> temp = new ArrayList<>();
        for (SmartPhone t : list) {
            if (t.getBrand().equals(brand)) {
                temp.add(t);
            }
        }
        return temp;
    }

    CustomDeque OutputBrandsByCondition(String brand){
        List<SmartPhone> result = this.findByBrand(brand);
        CustomDeque temp = new CustomDeque();
        if(result.size()!=0){
            System.out.println("Found:");
            for(SmartPhone obj : result){
                System.out.println(obj);
                temp.addElement(obj);
                this.list.remove(obj);
            }
        }
        else{
            System.out.println("Nothing Found!!!");
        }
        return temp;
    }

    void sortDescending(){
        this.list.sort(new DescendingComparator());
    }

    void sortAscending(){
        this.list.sort(new AscedingComparator());
    }

    void PrintList(){
        System.out.println("Print List:");
        for(SmartPhone obj: list){
            System.out.println(obj);
        }
    }

    int CountByPrice(int price){
        int result = 0;
        for(SmartPhone obj: list){
            if(obj.getPrice() > price){
                result += 1;
            }
        }
        return result;
    }

    void writeToDeque(Deque<SmartPhone> dq){
        if(!dq.isEmpty())dq.clear();
        dq.addAll(list);
    }

}
