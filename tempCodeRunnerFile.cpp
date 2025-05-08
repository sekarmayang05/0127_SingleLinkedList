 while ((current != NULL) && (nim>= current->noMhs))
    {
        if (nim == current-> noMhs)
        {
            cout << "\nDuplikasi noMhs tidak dijinkan\n";
            return;
        }
        prevoius = current;
        current = current->next;

    }