# **Chain of Responsibility (Cadeia de Responsabilidade):**

Permite que você passe solicitações ao longo de uma cadeia de manipuladores. Ao receber uma solicitação, cada manipulador decide processar a solicitação ou passá-la para o próximo manipulador na cadeia;

# **Exemplo:**

## **Loja de Artigos Esportivos - Promoções**

Este projeto implementa o padrão de design Chain of Responsibility para gerenciar promoções em uma loja de artigos esportivos. O objetivo é determinar quais produtos estão elegíveis para uma promoção com base em regras específicas.

### **Contexto**

Para atrair mais clientes, a loja decidiu criar uma campanha promocional. No entanto, nem todos os produtos são automaticamente elegíveis para descontos. A elegibilidade de um produto para a promoção é determinada por três critérios principais:

- **Especialidade do Produto:** O produto deve ser marcado como 'especial' no sistema da loja.
- **Preço Mínimo:** O produto deve custar pelo menos R$100.
- **Quantidade em Estoque:** O produto deve ter pelo menos 100 unidades disponíveis em estoque.
