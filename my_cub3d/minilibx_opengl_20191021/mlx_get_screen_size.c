#include "mlx.h"

int	mlx_get_screen_size(t_xvar *mlx_ptr, int *sizex, int *sizey)
{
	*sizex = DisplayWidth (mlx_ptr->display, mlx_ptr->screen);
	*sizey = DisplayHeight (mlx_ptr->display, mlx_ptr->screen);
	return (0);
}