# include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef    struct    s_btree
{
    struct s_btree    *left;
    struct s_btree    *right;
    void            *item;
}                t_btree;

t_btree    *btree_create_node(void *item)
{
    t_btree    *tmp;

    tmp = malloc(sizeof(t_btree));
    if (tmp)
    {
        tmp->item = item;
        tmp->left = 0;
        tmp->right = 0;
    }
    return (tmp);
}

int    ft_strcmp(void *v1, void *v2)
{
    int i;
    char *s1 = (char *)v1;
    char *s2 = (char *)v2;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    return (s1[i] - s2[i]);
}

void ft_putstr(void *v)
{
    char *str;

    str = (char *)v;
    while (*str)
    {
      write(1, str, 1);
      str++;
    }
	write(1, "\n", 1);
}

void    btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
    if (*root == NULL)
        *root = btree_create_node(item);
    else if (cmpf((*root)->item, item) >= 1)
    {
        if ((*root)->left)
            btree_insert_data(&((*root)->left), item, cmpf);
        else
            (*root)->left = btree_create_node(item);
    }
    else
    {
        if ((*root)->right)
            btree_insert_data(&((*root)->right), item, cmpf);
        else
            (*root)->right = btree_create_node(item);
    }
}

int btree_level_count(t_btree *root)
{
	if (root->left && root->right)
	{
		if (btree_level_count(root->left) > btree_level_count(root->right))
			return (btree_level_count(root->left) + 1);
		else
			return (btree_level_count(root->right) + 1);
	}
	if (root->left)
		return (btree_level_count(root->left) + 1);
	if (root->right)
		return (btree_level_count(root->right) + 1);
	return (1);
}



int main() {
  t_btree *root;
  root = 0;
  char *s1 = "1";
    char *s2 = "0";
      char *s3 = "3";
        char *s4 = "4";
  btree_insert_data(&root, s1, ft_strcmp);
  btree_insert_data(&root, s2, ft_strcmp);
  btree_insert_data(&root, s3, ft_strcmp);
  btree_insert_data(&root, s4, ft_strcmp);
  printf("%d\n", btree_level_count(root));
  return 0;
}
