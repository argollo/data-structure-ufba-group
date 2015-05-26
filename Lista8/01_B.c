void push (Pilha* p, float v)
{
   if (p->n == MAX) {
      printf("Capacidade da pilha estourou.\n");
      exit(1);
   }
   p->vet[p->n] = v;
   p->n++;
}
