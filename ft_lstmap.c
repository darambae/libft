t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    if (lst && f && del)
    {
        t_list *new_lst;
        t_list *new_elem;

        new_lst = NULL;
        new_elem = ft_lstnew(f(lst->content));
        while (lst)
        {
            if (!new_elem)
            {
                ft_lstclear(&new_lst, del);
                return (NULL);
            }
            ft_lstadd_back(&new_lst, new_elem);
            lst = lst->next;
        }
        return (new_lst);
    }
    return (NULL);
}