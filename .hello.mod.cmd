savedcmd_/home/ankitjksel/Drivers/hello/hello.mod := printf '%s\n'   hello.o | awk '!x[$$0]++ { print("/home/ankitjksel/Drivers/hello/"$$0) }' > /home/ankitjksel/Drivers/hello/hello.mod
