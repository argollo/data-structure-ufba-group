float pop (Pilha* p)
{
   float v;
   if (vazia(p)) {
      printf("Pilha vazia.\n");
      exit(1);
   }
   v = p->vet[p->n-1];
   p->n--;
   return v;
}
