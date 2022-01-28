# PasswordManager

Password manager is an app we made for our school project. \
We used QT (C++) for UI and database (PostgreSQL) connections. \
User passwords are hashed (SHA256) and every password you store is encrypted. \
You don't need local PostgreSQL server, app connects to remote PostgreSQL server (ElephantSQL).

&nbsp;
&nbsp;
&nbsp;
&nbsp;

## Dependencies

QT [Download](https://www.qt.io/download)

QT Postgresql Driver

&nbsp;

To install on Ubuntu 20.04

```bash
sudo apt install libqt5sql5-psql
```

&nbsp;

## Clone the project

```bash
git clone https://github.com/batuhaninan/PasswordManager
```

&nbsp;

## Build

&nbsp;

### Create Build Directory

```bash
mkdir build
cd build
```

&nbsp;

### Build & compile project

```bash
qmake -makefile -o Makefile ../passwordManager.pro
make
```

&nbsp;

### Environment Variables

&nbsp;

#### You need to set these env variables to run Password Manager

* PM_HOST: Host
* PM_USER_DB: Username - Database
* PM_PASSWORD: Password

&nbsp;

### Run App

```bash
./passwordManager
```

&nbsp;


## References

### SHA256 Implementation [GitHub](https://github.com/System-Glitch/SHA256)

### SimpleEncrypt (.cpp & .h) [GitHub](https://github.com/Drifter321/admintool)

&nbsp;

## Authors

Mehmet Batuhan INAN [GitHub](https://github.com/batuhaninan) \
Atilla Recep BASARAN [GitHub](https://github.com/atilla525) \
Emre Yasin SALLI [GitHub](https://github.com/emreysalli)
