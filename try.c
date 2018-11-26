#include    <unistd.h>                                                                                                                                                                                                               
#include    <stddef.h>
 
size_t  ft_strlen(char *str)
{
    size_t  ret;
 
    ret = 0;
    while(*(str++) != (char)(0))
        ret++;
 
    return (ret);
}
 
void    ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}
 
int     main(void)
{
    char text[] =   {   67,     111,    117,    99, 
                        111,    117,    32,     116,
                        111,    117,    116,    32, 
                        108,    101,    32,     109,
                        111,    110,    100,    101,
                        32,     33,     10,     0   
                    };
 
    ft_putstr(text);
    return (0);
}
