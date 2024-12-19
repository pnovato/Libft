/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:07:24 by pnovato-          #+#    #+#             */
/*   Updated: 2024/11/16 14:12:25 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


int	main()
{
	//char s[] = "so jhgasdf k ;ihsg f ;ahsf   jkhsfg  n   ";
	//char b = ' ';
	//char **pdattr = NULL;
	
	//int i;
	/* t_list *node = malloc(sizeof(t_list));
    t_list *nnode = malloc(sizeof(t_list));
	if (!node || !nnode)
    {
        printf("Erro ao alocar memória\n");
        free(node);
        free(nnode);
        return (1);
    } */
	/* node->content = NULL;
	node->next = NULL;
	nnode->content = NULL;
	nnode->next = NULL;
  */
	//int n = 345;nno

	//char c[20] = "hello world!";
	//ft_bzero("Se o valor for encontrado", ft_memcpy(s,b,14));
	//printf("%s\n",b);

	//printf("%s\n",s);

	//printf("%zu %s\n",ft_strlcat(b,s,14), b);

	//printf("%c\n",ft_toupper(b));
	
	//printf("%c\n",ft_tolower(a));

	//printf("%s\n",ft_strchr(s,'w'));
	//printf("%s\n",strchr(s,'w'));

	//printf("%s\n",ft_strrchr(s,'d'));
	//printf("%s\n",strrchr(s,'d'));

	//printf("%d\n",ft_strncmp(s,b,3));
	//printf("%d\n",strncmp(s,b,3));

	//printf("%s\n",(char *)ft_memchr(s,a,3));
	//printf("%s\n",(char *)memchr(s,a,3));
	
	/* char	*ptr = (char *)ft_memmove(s+2,s,3);
	printf("%s\n",ptr);int
	for(size_t i = 0; i < strlen(ptr); i++)
	{
		printf("%c -> [%li]\n",ptr[i], i);
	} */
	
	//printf("%s\n",(char *)memmove(s+2,s,3)ft_lstadd_front(&node, nnode););

	//printf("%d\n",ft_memcmp(s,b,3));
	//printf("%d\n",memcmp(s,b,3));

	/* a = (size_t *)ft_calloc(4,sizeof(size_t));
	for(int i= 0; i < 4; i++)
		pr intf("%lu ",a[i]);

	printf("\n");

	a = (size_t *)calloc(4,sizeof(size_t));
	for(int i= 0; i < 4; i++)
		printf("%lu ",a[i]); */

	/*char *ptr = ft_strnstr(s,b,7);
	char *tr = strnstr(s,b,7);
	printf("%s\n", ptr);
	printf("%s\n", tr);*/
	//char *ptr = ft_substr(s,0,23);
	//printf("%s\n",ft_substr(s,2,5));
	/*for (size_t i = 0; i < 24; i++)
	{
		printf("%c\n",ptr[i]);
	}*/
	
	

	//printf("%s\n",ft_strjoin(s,b));

	//printf("%s\n",ft_strtrim(s,b));


	//ft_split
	/*
	pdattr = ft_split(s, b);
	char *result;
	int i;

	if (!pdattr) {
		printf("Erro ao alocar memória.\n");
		return (1);
	}

	printf("String original: \"%s\"\n", s);
	printf("Separador: '%c'\n", b);
	printf("Resultado do ft_split:\n");
	i = 0;
	while (result[i]) {
		printf("  [%d]: \"%s\"\n", i, pdattr[i]);
		i++;
	}
*/
	//ft_free(pdattr);
	//free(pdattr);
	


	// ft_strmapi
	/*
	const char *original = "exemplo de teste";
    	char *result;

	result = ft_strmapi(original, ft_toupper);
	if (result) 
	{
		printf("Original: %s\n", original);
		printf("Modificado: %s\n", result);
		free(result);
	}
	else 
	{
		printf("Erro ao alocar memória.\n");
	
	}
	*/


	//ft_itoa
	/*
	int		test_cases[] = {0, 123, -123, 2147483647, -2147483648};
	int		num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
	char	*result;
	int		i;

	for (i = 0; i < num_cases; i++) {
		int num = test_cases[i];
		result = ft_itoa(num);
		if (result) {
			printf("  Entrada: %d, Saída: \"%s\"\n", num, result);
			free(result);
		} else {
			printf("  Erro ao converter %d\n", num);
		}
	}
	 */

	//ft_striteri
	/*
	char str1[] = "exemplo de string";
	printf("String original 1: %s\n", str1);
	ft_striteri(str1, to_uppercase);
	printf("Após to_uppercase: %s\n\n", str1);
	 */


	//ft_putchar
	/*
	 ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);

	ft_putchar_fd('E', 1);
	ft_putchar_fd('\n', 1);
	 */

	//ft_pustr
	/*
	 ft_putstr_fd("Teste de escrita no stdout.\n", 1);
	 */

	//ft_putendl
	/*
	 ft_putendl_fd("Teste de escrita no stdout.", 1);
	 */

	//ft_putnbr
	/*
	t_putnbr_fd(12345, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-98765, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(123456789, 2);
	ft_putchar_fd('\n', 2); 
	 */

	//t_list *node = ft_lstnew(&i);
	//printf("%d\n",*(int *)node->content);

	//ft_lstadd_front(&node, NULL);
	

	//ft_lstsize
	/*
	t_list *list = NULL;
    	printf("Tamanho da lista (vazia): %d\n", ft_lstsize(list));
    	ft_lstadd_back(&list, ft_lstnew(42));
   	printf("Tamanho da lista (1 elemento): %d\n", ft_lstsize(list));
	*/

	//ft_lstlast
	/*
	  t_list *list = NULL;
	  t_list *last;

   	 last = ft_lstlast(list);
    	if (last)
        	printf("O último nó da lista contém: %d\n", last->content);
    	else
        	printf("A lista está vazia.\n");

    	ft_lstadd_back(&list, ft_lstnew(42));
    	last = ft_lstlast(list);
    	if (last)
        	printf("O último nó da lista contém: %d\n", last->content);
     	*/

	//ft_lstaddback
	
	 t_list *list = NULL;

   	 ft_lstadd_back(&list, ft_lstnew(42));
    	printf("Lista após adicionar 42: ");
    	ft_lstprint(list);

    	ft_lstadd_back(&list, ft_lstnew(36));
    	printf("Lista após adicionar 36: ");
    	ft_lstprint(list);
    	

	//ft_lstdelone
	/*
	 t_list *list = NULL;
    	int *content1 = malloc(sizeof(int));
    	int *content2 = malloc(sizeof(int));
    	int *content3 = malloc(sizeof(int));

    	*content1 = 42;
    	*content2 = 36;
    	*content3 = 58;

   	ft_lstadd_back(&list, ft_lstnew(content1));
    	ft_lstadd_back(&list, ft_lstnew(content2));
    	ft_lstadd_back(&list, ft_lstnew(content3));

    	printf("Lista original: ");
    	ft_lstprint(list);

    
    	t_list *node_to_delete = list->next;  
	ft_lstdelone(node_to_delete, del_content);

    	printf("Lista após deletar o segundo nó (com conteúdo 36): ");
    	ft_lstprint(list);

    	 ft_lstclear(&list, del_content);
	 */

	//ft_lstclear
	/*
	  t_list *list = NULL;
    	int *content1 = malloc(sizeof(int));
    	int *content2 = malloc(sizeof(int));
    	int *content3 = malloc(sizeof(int));

    	*content1 = 42;
    	*content2 = 36;
    	*content3 = 58;

        ft_lstadd_back(&list, ft_lstnew(content1));
    	ft_lstadd_back(&list, ft_lstnew(content2));
    	ft_lstadd_back(&list, ft_lstnew(content3));

    	printf("Lista original: ");
    	ft_lstprint(list);

        ft_lstclear(&list, del_content);

    	printf("Lista após ft_lstclear (depois de liberar todos os nós): ");
    	ft_lstprint(list); 
	 */


	//ft_lstiter
	/*
	  t_list *list = NULL;
   	int *content1 = malloc(sizeof(int));
    	int *content2 = malloc(sizeof(int));
    	int *content3 = malloc(sizeof(int));

    	*content1 = 42;
    	*content2 = 36;
    	*content3 = 58;

       	ft_lstadd_back(&list, ft_lstnew(content1));
    	ft_lstadd_back(&list, ft_lstnew(content2));
    	ft_lstadd_back(&list, ft_lstnew(content3));

   	printf("Lista original: ");
    	ft_lstprint(list);

        printf("Usando ft_lstiter para imprimir os valores: ");
    	ft_lstiter(list, print_content);
    	printf("\n");
       	*/


	//ft_lstmap
	/*
	   t_list *list = NULL;
    	int *content1 = malloc(sizeof(int));
    	int *content2 = malloc(sizeof(int));
    	int *content3 = malloc(sizeof(int));

    	*content1 = 42;
    	*content2 = 36;
    	*content3 = 58;

        ft_lstadd_back(&list, ft_lstnew(content1));
    	ft_lstadd_back(&list, ft_lstnew(content2));
    	ft_lstadd_back(&list, ft_lstnew(content3));

    	printf("Lista original: ");
    	ft_lstprint(list);

        t_list *new_list = ft_lstmap(list, double_content, del_content);

    	printf("Lista após ft_lstmap (valores duplicados): ");
    	ft_lstprint(new_list);

        ft_lstclear(&list, del_content);
    	ft_lstclear(&new_list, del_content);
	 */
}

