ini adalah percobaan Vial untuk repair TKL digital aliance yang ghosting,
ganti pcb ke wired


notes 
> cd vial-qmk

Install QMK CLI (jika belum ada):
> python3 -m pip install qmk

Jalankan setup dependensi QMK/Vial:
> qmk setup -y  (y apa ini ya)

> git submodule update --init --recursive
make 0_didik/87tkl:vial
