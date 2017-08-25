# !/bin/bash

echo "Escribe el mensaje del commit a realizar:";
read message;

(git add $*);

(git commit -m "$message");

(git push -u origin master);
