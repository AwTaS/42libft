void    ft_bzero(void *s, size_t n)
{
    char    *temp;
    while (n > 0)
    {
        *temp = 0;
        n--;
    }
}