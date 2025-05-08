int nim;
    cout << "\nMasukkan Nomor Mahasiswa :";
    cin >> nim;

    Node *nodeBaru = new Node;
    nodeBaru->noMhs = nim;

    if (START == NULL || nim <= START-> noMhs)
    {
        if ((START != NULL) && (nim == START->noMhs))
        {
            cout << "\nDuplikasi noMhs tidak dijinkan\n";
            return;
        }
        nodeBaru->next = START;
        START = nodeBaru;
        return;
    }