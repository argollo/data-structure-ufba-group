float pop (Pilha* p)
{
   float v;
   if (vazia(p)) {
      printf("Pilha vazia.\n");
      exit(1);
   }
   v = p->prim->info;
   p->prim = remove_inicio(p->prim);
   return v;
}
