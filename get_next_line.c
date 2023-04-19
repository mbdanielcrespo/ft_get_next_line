char	*get_next_line(int fd)
{
	char	*line;
	static char	*str_rev;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str_rev = ft_read_str(fd, str_rev);
	if (!str_rev)
	{
		return (NULL);
	}
	line = ft_new_str(str_rev);
	str_rev = ft_new_str_rev(str_rev);
	return (line);
}

char	*ft_read_str(int fd, char *str_rev)
{
	char	*buff;
	int	read_bytes;

	buff = malloc(BUFFER_SIZE + 1) * sizeof(char);
	if (!buff)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(str_rev, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_bytes] = '\0';
		str_rev = ft_strjoin(str_rev, buff);
	}
	free(buff);
	return (str_rev);
}
