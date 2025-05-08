bool delNode (int nim)
{
    Node *current, *previous;
    if (!Search(nim, &previous, &current))
        return false;

    if (current == START)
        START = START->next;
    else
        previous->next = current->next;

    delete current;
    return true;
}