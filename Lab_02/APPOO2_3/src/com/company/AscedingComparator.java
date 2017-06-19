package com.company;

/**
 * Created by bossa on 13.06.2017.
 */
import java.util.Comparator;

public class AscedingComparator implements Comparator<SmartPhone>{
    public int compare(SmartPhone o1, SmartPhone o2)
    {
        return o2.getBrand().compareTo(o1.getBrand());
    }
}
