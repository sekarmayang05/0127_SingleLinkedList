bool Search (int nim, Node ** previous, Node **current)
{
    *previous = START;
    *current = START;

    while ((*current != NULL) && (nim != (*current)->noMhs))
    {
        *previous = *current;
        *current = (*current)->next;
    }
    return (*current != NULL);
       