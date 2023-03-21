int main(void)
{
char letter = 'a';  // start with 'a'
// loop through each letter of the alphabet
while (letter <= 'z')
{
putchar(letter);  // print the current letter
letter++;         // move on to the next letter
}
putchar('\n');       // print a newline character
return 0;
}
