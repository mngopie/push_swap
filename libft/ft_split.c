/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:37:43 by pjakosal          #+#    #+#             */
/*   Updated: 2025/11/28 16:38:12 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_len(const char *s, char delimiter)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (s[i] != '\0' && s[i] != delimiter)
	{
		i++;
		length++;
	}
	return (length);
}

int	ft_wordcount(const char *s, char delimiter)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == delimiter)
			i++;
		if (s[i] != '\0' && s[i] != delimiter)
			count++;
		while (s[i] != '\0' && s[i] != delimiter)
			i++;
	}
	return (count);
}

static void	ft_free_strings(char **array, int word_index)
{
	while (word_index > 0)
	{
		word_index--;
		free(array[word_index]);
	}
	free(array);
}

char	*ft_create_strs(const char *s, int word_length, int index)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (word_length + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < word_length)
	{
		word[i] = s[index + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	int		word_index;
	int		word_count;
	char	**array;

	if (!s)
		return (NULL);
	index = 0;
	word_index = -1;
	word_count = ft_wordcount(s, c);
	array = malloc(sizeof(char *) * (word_count + 1));
	if (array == NULL)
		return (NULL);
	while (++word_index < word_count)
	{
		while (s[index] == c)
			index++;
		array[word_index] = ft_create_strs(s, ft_word_len(s + index, c), index);
		if (array[word_index] == NULL)
			return (ft_free_strings(array, word_index), NULL);
		index += ft_word_len(s + index, c);
	}
	array[word_index] = NULL;
	return (array);
}

// static int	ft_wordlength(char *s, char delimiter)
// {
// 	int	i;
// 	int	length;

// 	i = 0;
// 	length = 0;
// 	while (s[i] != '\0' && s[i] != delimiter)
// 	{
// 		i++;
// 		length++;
// 	}
// 	return (length);
// }

// static int	ft_wordcount(char *s, char delimiter)
// {
// 	int	count;
// 	int	i;

// 	i = 0;
// 	count = 0;
// 	while (s[i] != '\0')
// 	{
// 		while (s[i] != '\0' && s[i] == delimiter)
// 			i++;
// 		if (s[i] != '\0' && s[i] != delimiter)
// 			count++;
// 		while (s[i] != '\0' && s[i] != delimiter)
// 			i++;
// 	}
// 	return (count);
// }

// static int	ft_skip(char *s, char delimiter, int index)
// {
// 	while (s[index] != '\0' && s[index] == delimiter)
// 		index++;
// 	return (index);
// }

// char	**ft_split(char *s, char delimiter)
// {
// 	int		j;
// 	int		index;
// 	int		word_index;
// 	int		word_count;
// 	int		word_length;
// 	char	**array;

// 	index = 0;
// 	word_index = 0;
// 	word_count = ft_wordcount(s, delimiter);
// 	array = malloc(sizeof(char *) * (word_count + 1));
// 	if (array == NULL)
// 		return (NULL);
// 	while (word_index < word_count)
// 	{
// 		index = ft_skip(s, delimiter, index);
// 		word_length = ft_wordlength(s + index, delimiter);
// 		array[word_index] = malloc(sizeof(char) * (word_length + 1));
// 		if (array[word_index] == NULL)
// 			return (NULL);
// 		j = 0;
// 		while (j < word_length)
// 		{
// 			array[word_index][j] = s[index + j];
// 			j++;
// 		}
// 		array[word_index][j] = '\0';
// 		index = index + word_length;
// 		word_index++;
// 	}
// 	array[word_count] = NULL;
// 	return (array);
// }

// int main()
// {
// 	char *s = "hello***I*had*enough*to*drink!!1";
// 	char del = '*';
// 	char **result;
// 	int i;
// 	result = ft_split(s, del);
// 	printf("%s\n", result)
// }

// static int	ft_wordlength(char *s, char delimiter)
// {
// 	int	i;
// 	int	length;

// 	i = 0;
// 	length = 0;
// 	while (s[i] != '\0')
// 	{
// 		while (s[i] != '\0' && s[i] == delimiter)
// 			i++;
// 		while (s[i] != '\0' && s[i] != delimiter)
// 		{
// 			i++;
// 			length++;
// 		}
// 	}
// 	return (length);
// }

// int	ft_wordcount(char *s, char delimiter)
// {
// 	int	count;
// 	int	i;

// 	i = 0;
// 	count = 0;
// 	while (s[i] != '\0')
// 	{
// 		while (s[i] != '\0' && s[i] == delimiter)
// 			i++;
// 		if (s[i] != '\0' && s[i] != delimiter)
// 			count++;
// 		while (s[i] != '\0' && s[i] != delimiter)
// 			i++;
// 	}
// 	return (count);
// }

// char	*ft_create_strings(char *s, int word_length, int index)
// {
// 	int		i;
// 	char	*string;

// 	string = malloc(sizeof(char) * (word_length + 1));
// 	if (!string)
// 		return (NULL);
// 	i = 0;
// 	while (i < word_length)
// 	{
// 		string[i] = s[index];
// 		i++;
// 		index++;
// 	}
// 	string[i] = '\0';
// 	return (string);
// }

// char	**ft_split(char *s, char delimiter)
// {
// 	int		index;
// 	int		word_index;
// 	int		word_count;
// 	int		word_length;
// 	char	**array;

// 	if (!s)
// 		return (NULL);
// 	index = 0;
// 	word_index = 0;
// 	word_count = ft_wordcount(s, delimiter);
// 	array = malloc(sizeof(char *) * (word_count + 1));
// 	if (!array)
// 		return (NULL);
// 	while (word_count > 0)
// 	{
// 		word_length = ft_wordlength(s + index, delimiter);
// 		array[word_index] = ft_create_strings(s, word_length, index);
// 		index = index + word_length;
// 		word_index++;
// 		word_count--;
// 	}
// 	array[word_index] = NULL;
// 	return (array);
// }

//#include <stdio.h>

// static int	ft_wordlength(char *s, char delimiter)
// {
// 	int	i;
// 	int	length;

// 	i = 0;
// 	length = 0;
// 	while (s[i] != '\0' && s[i] != delimiter)
// 	{
// 		i++;
// 		length++;
// 	}
// 	return (length);
// }

// int	ft_wordcount(char *s, char delimiter)
// {
// 	int	count;
// 	int	i;

// 	i = 0;
// 	count = 0;
// 	while (s[i] != '\0')
// 	{
// 		while (s[i] != '\0' && s[i] == delimiter)
// 			i++;
// 		if (s[i] != '\0' && s[i] != delimiter)
// 			count++;
// 		while (s[i] != '\0' && s[i] != delimiter)
// 			i++;
// 	}
// 	return (count);
// }

// static int	ft_skip(char *s, char delimiter, int index)
// {
// 	while (s[index] != '\0' && s[index] == delimiter)
// 		index++;
// 	return (index);
// }

// char	*ft_create_strings(char *s, int word_length, int index)
// {
// 	int		i;
// 	char	*string;

// 	string = malloc(sizeof(char) * (word_length + 1));
// 	if (!string)
// 		return (NULL);
// 	i = 0;
// 	while (i < word_length)
// 	{
// 		string[i] = s[index];
// 		i++;
// 		index++;
// 	}
// 	string[i] = '\0';
// 	return (string);
// }

// char	**ft_split(char *s, char delimiter)
// {
// 	int		index;
// 	int		word_index;
// 	int		word_count;
// 	int		word_length;
// 	char	**array;

// 	if (!s)
// 		return (NULL);
// 	index = 0;
// 	word_index = 0;
// 	word_count = ft_wordcount(s, delimiter);
// 	array = malloc(sizeof(char *) * (word_count + 1));
// 	if (!array)
// 		return (NULL);
// 	while (word_count > 0)
// 	{
// 		index = ft_skip(s, delimiter, index);
// 		word_length = ft_wordlength(s + index, delimiter);
// 		array[word_index] = ft_create_strings(s, word_length, index);
// 		index = index + word_length;
// 		word_index++;
// 		word_count--;
// 	}
// 	array[word_index] = NULL;
// 	return (array);
// }

// int	main()
// {
// 	//char *s = "hello I had enough to drink!!1  hello what is this**now?";
// 	char *s = "      split       this for   me  !       ";
// 	char del = '0';
// 	char **result;
// 	int i;

// 	i = 0;
// 	result = ft_split(s, del);
// 	while (result[i])
// 	{
// 		printf("'%s'\n", result[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }