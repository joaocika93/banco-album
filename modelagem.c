//Tabelas
Table usuario {
  id int [pk, increment]
  usuario varchar
  senha varchar
}

Table album {
  id int [pk, increment]
  nome_album varchar
  descricao_album varchar
  usuario_album int
}

Table selecoes {
  id int [pk, increment]
  nome_selecao varchar
  descricao_selecao varchar
  emblema_selecao varchar
  tecnico_selecao int
  album_selecao int
}

Table jogadores {
  id int [pk, increment]
  nome_jogador varchar
  idade_jogador int
  selecao_jogador int
}

Table tecnico {
  id int [pk, increment]
  nome_tecnico varchar
  idade_tecnico varchar
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

Table titulos_tecnico {
  id int [pk, increment]
  tecnico int
  titulo int
}

Table titulos_selecao {
  id int [pk, increment]
  selecao int
  titulo int
}

Table pacote {
  id int [pk, increment]
}

Table pacote_jogadores {
  id int [pk, increment]
  jogador int
  pacote int
}

// Creating references
// You can also define relaionship separately
// > many-to-one; < one-to-many; - one-to-one; <> many-to-many
Ref: jogadores.selecao_jogador > selecoes.id  
Ref: selecoes.album_selecao > album.id
Ref: album.usuario_album < usuario.id
Ref: titulos_jogador.titulo <> titulos.id
Ref: titulos_jogador.jogador <> jogadores.id
Ref: titulos_selecao.selecao <> selecoes.id
Ref: titulos_selecao.titulo <> titulos.id
Ref: pacote_jogadores.jogador <> jogadores.id
Ref: pacote_jogadores.pacote <> pacote.id
Ref: tecnico.id - selecoes.tecnico_selecao
Ref: titulos_tecnico.tecnico <> tecnico.id
Ref: titulos_tecnico.titulo <> titulos.id