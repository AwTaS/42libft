void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *temp_dst;
    char    *temp_src;
    size_t  i;

    
    if (!dst && !src)
        return (0);

    temp_dst = (char *) dst;
    temp_src = (char *) src;
    i = 0;

    if (temp_dst > temp_src)
        while (len > 0)
        {
            temp_dst[len] = temp_src[len];
            len--;
        }
    else
    {
        while (i < len)
        {
            temp_dst[i] = temp_src[i];
            i++;
        }
    }
    return (dst);
}