double f();

int main()
{
    // asm("li $sp, 0x34fffffc;");
    f();
    return 0;
}

double f()
{
    return 1;
}