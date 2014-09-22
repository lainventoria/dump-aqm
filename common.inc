user=siafa
password=hola
database=siafa
database_local=siafa_temporal

function mysql() {
  /usr/bin/mysql -u ${user} --password="${password}" $@
}

