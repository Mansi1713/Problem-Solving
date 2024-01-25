class CommandLine
{
    public static void main(String[] args) {
        
        System.out.println("Number of command Line Arguments are"+args.length);

        System.out.println("Command Line arguments are:");

        for(int i=0;i < args.length;i++)
        {
            System.out.println(args[i]);
        }
    }
}