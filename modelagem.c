//Tabelas
Table album {
  id int [pk, increment]
  nome_album varchar
  descricao_album varchar
  selecoes_album int
}

Table selecoes {
  id int [pk, increment]
  nome_selecao varchar
  descricao_selecao varchar
  titulos_selecao varchar
  emblema_selecao varchar
  tecnico_selecao varchar
}

Table jogadores {
  id int [pk, increment]
  nome_jogador varchar
  idade_jogador varchar
  titulos_selecao varchar
  selecao_jogador int
}

// Creating references
// You can also define relaionship separately
// > many-to-one; < one-to-many; - one-to-one; <> many-to-many
Ref: jogadores.selecao_jogador > selecoes.id  
Ref: selecoes.id > album.selecoes_album

