class String1{
    public static void main(String[] args) {
        String Str1="aab";
        String Str2="xxy";

        // char ch=Str1.charAt(0);
        // int Asc=(int)ch;
        // System.out.println(Asc);
        for(int i=0;i<Str1.length();i++)
        {
            char ch1=Str1.charAt(i);
            char ch2=Str2.charAt(i);
            int Asc1=(int)ch1;
            int Asc2=(int)ch2;
        for(int j=i+1;i<Str2.length()-1;j++)
        {

            char sh1=Str1.charAt(j);
            char sh2=Str2.charAt(j);
            int As1=(int)sh1;
            int As2=(int)sh2;

            if(As1-Asc1==As2-Asc2)
            System.out.println(1);
            else
            System.out.println(0);

        }
            
        


        }
    }

    }
