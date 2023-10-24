void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char   *temp_dst;
    unsigned char   *temp_src;

    if (dst == (void *)0 && src == (void *)0)
        return (dst);
    temp_dst = (unsigned char *)dst;
    temp_src = (unsigned char *)src;
    while (n > 0)
    {
        *temp_dst = *temp_src
        temp_dst++;
        temp_src++;
        n--;
    }
    return (dst);
}