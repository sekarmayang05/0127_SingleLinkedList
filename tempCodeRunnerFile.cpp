case '4':
        {
            if (mhs.lisEmpty() == true)
            {
                cout <<"\nList Kosong\n";
                break;
            }
            Node *previous, *current;
            cout <<endl
                << "Masukkan no mahasiswa yang dicari : ";
            cin >> nim;
            if (mhs.Search(nim, &previous, &current) == false)
                cout << endl
                    << "Data tidak ditemukan" << endl;
            else
            {
                cout << endl
                    << "Data ditemukan" << endl;
                cout << "\nNo Mahasiswa: " << current->noMhs << endl;
                cout << "\n";
            }
        }
        break;