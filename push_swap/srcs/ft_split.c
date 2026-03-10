/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjakosal <pjakosal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:53:04 by pjakosal          #+#    #+#             */
/*   Updated: 2026/03/10 13:54:26 by pjakosal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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