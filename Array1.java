class Array1
{
    public static void main(String[] args) {
        
        int Arr1[]={11,21,5,121};

        int Arr2[]=new int[4];
        Arr2[0]=11;
        Arr2[1]=21;
        Arr2[2]=5;
        Arr2[3]=101;

        System.out.println("length of array is  : "+Arr1.length);

        int icnt=0;
        for(icnt=0;icnt<Arr1.length;icnt++)
        {
            System.out.println(Arr1[icnt]);
        }

    }
}