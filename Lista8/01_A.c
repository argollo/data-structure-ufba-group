Pilha* cria (void)
{
   Pilha* p = (Pilha*) malloc(sizeof(Pilha));
   p->n = 0;
   return p;
}
