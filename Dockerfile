FROM gcc:latest

COPY . /usr/src/PasswordManager

WORKDIR /usr/src/PasswordManager

RUN make

CMD ["./PasswordManager"]



