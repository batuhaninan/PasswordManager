# PasswordManager

Basic password manager app in C++

## Dependencies

QT [Download](https://www.qt.io/download)

QT Postgresql Driver (On Ubuntu 20.04)

```bash
sudo apt install libqt5sql5-psql
```

## Build

### Create Build Directory

```bash
mkdir build
cd build
```

### Build & compile project
```bash
qmake -makefile -o Makefile ../passwordManager.pro
make
```
### Run App

```bash
./passwordManager
```

## References

### SHA256 Implementation [GitHub](https://github.com/System-Glitch/SHA256)

## Authors

Mehmet Batuhan INAN <br />
Atilla Recep BASARAN <br />
Emre Yasin SALLI
