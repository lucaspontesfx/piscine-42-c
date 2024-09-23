/*
Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.

Examples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$

*/

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i; // To control the argument to be interated
    int j;// To iterate the string passed as argument

    i = 1;
    if  (argc != 2) //If the number of arguments is not 1, the program displays '\n'.
    {
        write (1, "\n", 1);
        return (0);
    }
    j = 0;
    while (argv[1][j] != '\0') 
    {
        if (argv[1][j] >= 'a' && argv[1][j] <= 'z') // reversing lower cases iin uppercases
        argv[1][j] = argv[1][j] - 32; //receiving converted characteres

        else if (argv[1][j] >= 'A' && argv[1][j] <= 'Z') //reversing uppercase letters in lowercase letters
        argv[1][j] = argv[1][j] + 32;//receiving lowercase characteres

        ft_putchar(argv[i][j]);//calling the function to print each converted letter
        j++; // incrementing to iterate until the '\n'
    }
    ft_putchar('\n');// placing the \n befor end the program
    return (0);
}