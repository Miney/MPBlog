#ifndef Validacao
#define Validacao


#ifdef  LUSUARIO_SERV
#define EXT_V
#else
#define EXT_V extern
#endif

/// variavel struct de usuario
EXT_V struct autenticar{
int x;
};
///variavel struct de usuario a ser cadastrado
EXT_V struct cadastrar{
int x;
};


///função autenticar usuario
void Funcao_Autenticar(struct autenticar x){

printf("\nautenticar\n");
}
///função cadastrar usuario
void Funcao_Cadastrar(struct cadastrar y){

printf("\ncadastrar\n");

}



#endif
