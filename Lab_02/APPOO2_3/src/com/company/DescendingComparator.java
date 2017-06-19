package com.company;

/**
 * Created by bossa on 13.06.2017.
 */
import java.util.Comparator;

public class DescendingComparator implements Comparator<SmartPhone>{
    public int compare(SmartPhone o1, SmartPhone o2)
    {
        return o1.getBrand().compareTo(o2.getBrand());
    }
}