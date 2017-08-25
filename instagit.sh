# !/bin/bash

echo "Escribe el mensaje del commit a realizar:";
read message;

(git add $*);

(git status);

(git commit -m "$message");

(git push -u origin master);
