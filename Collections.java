import java.util.*;
class Collections
{
    public static void main(String[] args) throws Exception{
        
        LinkedList<Integer> lobj=new LinkedList<Integer>();
        lobj.add(10);
        lobj.add(20);
        lobj.add(30);
        lobj.add(40);
        lobj.addFirst(5);
        boolean bret=true;
        bret=lobj.contains(30);
        System.out.println(bret);

        System.out.println(lobj);

        Iterator iobj=lobj.iterator();
        while (iobj.hasNext()) {
            
            System.out.println(iobj.next());
        }
        System.out.println("Index of 30  "+lobj.indexOf(30));
        lobj.clear();
    }
    
}