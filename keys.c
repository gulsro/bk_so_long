#include "so_long.h"

void	mlx_key_hook_callback(mlx_key_data_t keydata, void *param)
{
//	if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
//		mlx_close_window((mlx_t*)param->mlx);
//	find_player((t_map*)param);
	if (keydata.action == MLX_PRESS)
	{
		if (keydata.key == MLX_KEY_W) {
			move_up((t_map*)param);
		} else if (keydata.key == MLX_KEY_S) {
			move_down((t_map*)param);
		} else if (keydata.key == MLX_KEY_D) {
			move_right((t_map*)param);
		} else if (keydata.key == MLX_KEY_A){
			move_left((t_map*)param);
		} else {
			printf("exit.\n");
		}
	}
	//images_to_window((t_map*)param);
}
/*
void	set_key_up(mlx_key_data_t keydata, t_map *my_map)
{
                move_up(my_map);

}

void	set_key_down(mlx_key_data_t keydata, t_map *my_map)
{
		move_down(my_map);

}

void	set_key_right(mlx_key_data_t keydata, t_map *my_map)
{
                move_right(my_map);

}

void	set_key_left(mlx_key_data_t keydata, t_map *my_map)
{
                move_left(my_map);

*/

