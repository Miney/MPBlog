#define LURUAROIO_SERV

#ifdef  LUSUARIO_SERV
#define EXT_LU
#else
#define EXT_LU extern
#endif


#include  "Logica_Usuario.h"
#include  "Logica_Comentario.h"
#include "Logica_Postagem.h"
#include "Persistencia_Postagem.h"
#include "Persistencia_Comentario.h"
#include "Persistencia_Usuario.h"






EXT_LU struct autenticar{
int x;};
EXT_LU struct cadastrar{
int x;};
EXT_LU void executar(){
printf("oi mundo :) !!\n");
}



