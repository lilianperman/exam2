/*adicionar biblioteca quando der o grademe.

typedef struct s_point
{
	int x;
	int y;
}	t_point;
*/

void	flood_fill(char **tab, t_point size, t_point, begin)
{
	if ((begin.y > 0 && begin.y <= size.y) && (begin.x > 0 && begin.x <= size.x) && tab[begin.x][begin.y] == 1)
	{
		tab[begin.x][begin.y] = 'F';
		flood_fill(tab, size, (t_point){begin.x - 1, begin.y});
		flood_fill(tab, size, (t_point){begin.x + 1, begin.y});
		flood_fill(tab, size, (t_point){begin.x, begin.y - 1});
		flood_fill(tab, size, (t_point){begin.x, begin.y + 1});
	}
}
