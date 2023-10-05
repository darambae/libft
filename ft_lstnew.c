t_list  *ft_lstnew(void *content)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(struct));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}