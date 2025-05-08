void addNode()
{
    int nim;
    cout << "\nMasukkan Nomor Mahasiswa :";
    cin >> nim;

    Node *nodeBaru = new Node;
    nodeBaru->noMhs = nim;