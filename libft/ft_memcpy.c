#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t num)
{
	char	*ptrs;
	char	*ptrd;

	ptrs = (char *)src;
	ptrd = (char *)dst;
	if(ptrs != NULL || ptrd != NULL)
	{
		while(num > 0)
		{
			*ptrd = *ptrs;
			num--;
			ptrs++;
			ptrd++;
		}
	}
	return(dst);
}