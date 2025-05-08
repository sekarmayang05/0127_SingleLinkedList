case '2':
        {
            if (mhs.lisEmpty())
            {
                cout << endl
                    << "List Kosong" << endl;
                break;
            }
            cout << endl
                << "\nMasukkan no mahasiswa yang akan dihapus : ";
            cin >> nim;
            if (mhs.delNode(nim)== false)
                cout << endl
                    << "Data tidak ditemukan" << endl;
            else
                cout << endl
                    << "Data dengan npmor mahasiswa " << nim << "berhasil dihapus " << endl;
        }
        break;