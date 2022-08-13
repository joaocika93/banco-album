//Tabelas
Table usuario {
  id int [pk, increment]
  usuario varchar
  senha varchar
  album id
}

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
  emblema_selecao varchar
  tecnico_selecao varchar
}

Table jogadores {
  id int [pk, increment]
  nome_jogador varchar
  idade_jogador varchar
  titulos_jogador int
  selecao_jogador int
}

Table titulos {
  id int [pk, increment]
  nome_titulo varchar
}

Table titulos_jogador {
  id int [pk, increment]
  jogador int
  titulo int
}

Table titulos_selecao {
  id int [pk, increment]
  selecao int
  titulo int
}

// Creating references
// You can also define relaionship separately
// > many-to-one; < one-to-many; - one-to-one; <> many-to-many
Ref: jogadores.selecao_jogador > selecoes.id  
Ref: selecoes.id > album.selecoes_album
Ref: album.id < usuario.album
Ref: titulos_jogador.titulo <> titulos.id
Ref: titulos_jogador.jogador <> jogadores.id
Ref: titulos_selecao.selecao <> selecoes.id
Ref: titulos_selecao.titulo <> titulos.id