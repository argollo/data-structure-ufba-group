No* insere_inicio (No* l, float v)
{
   No* p = (No*) malloc(sizeof(No));
   p->info = v;
   p->prox = l;
   return p;
}

No* remove_inicio (No* l)
{
   No* p = l->prox;
   free(l);
   return p;
}
