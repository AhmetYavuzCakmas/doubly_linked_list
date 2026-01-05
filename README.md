# doubly_linked_list
data structure doubly linked list code
Doubly Linked List, her elemanın hem bir sonraki (next) hem de bir önceki (prev) elemana işaret ettiği bağlı liste türüdür.

🔹 Yapısı

Her düğüm (node) içinde üç şey olur:
  prev → bir önceki düğümün adresi
  data → verinin kendisi
  next → bir sonraki düğümün adresi

  NULL ← [prev | data | next] ↔ [prev | data | next] ↔ [prev | data | next] → NULL

🔹 Neden Kullanılır?

Çünkü hem ileri hem geri dolaşmayı sağlar.
Bu sayede:

  Eleman silmek kolay
  Eleman eklemek kolay
  Listeyi tersten gezmek mümkün

🔹 Avantajları

  ✔ Hem ileri hem geri traversal yapılır
  ✔ Tek yönlü linked list’e göre silme ve ekleme daha rahattır
  ✔ Orta elemanlara erişim daha esnektir

🔹 Dezavantajları

  ✖ Tek yönlü listeye göre daha fazla hafıza kullanır (ekstra prev pointer)
  ✖ Yapısı daha karmaşıktır

🔹 Nerelerde Kullanılır?

  Tarayıcı geri–ileri geçmişi
  Müzik listesi ileri/geri geçme
  Undo–redo işlemleri
  OS scheduler yapıları
