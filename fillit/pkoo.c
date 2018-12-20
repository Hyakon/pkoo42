
/* 
   t_tri			add_last(t_tri *tetrilist)
   {
   t_tri *tmp;

   tmp = new_tetri();
   if (tmp == NULL)
   {	
   lstdel(&tmp);
   ft_putendl("new_tetri: fail");
   return (0);
   }
   if (!(tetrilist))
   return (tmp);
   while ((tetrilist)->next)
   {
   tetrilist = (tetrilist)->next;
   }
   tetrilist->next = tmp;
   return (tetrilist);
   }

   int				tetrifill(t_tri **tetrilist, const char *file)
   {
   int		fd;
   char	*line;
   int		ret;
   int		i;

   if (!tetrilist)
   return (0);
 *tetrilist = NULL;
 if ((fd = open(file, O_RDONLY)) == -1)
 {
 ft_putendl("open: fail");
 return (0);
 }
 i = 0;
 while ((ret = get_next_line(fd, &line)) == 1)
 {
 if (i % 5 == 0)
 {
 if (!(add_last(*tetrilist)))
 {
 lstdel(tetrilist);
 ft_putendl("new_tetri: fail");
 return (0);
 }
 }
