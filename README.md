# Programação e Desenvolvimento de Software 2 - Projeto Final
<b>UFMG 2024.1</b><br>
<b>Profa. Evellyn Soares Cavalcante</b><br><br>

<b>Descrição do Projeto</b><br><br>
Eu sou o representante de uma empresa do ramo de venda de passagens aéreas e de reserva de vagas de hotel.<br>
Até o momento apenas trabalhamos com lojas físicas, mas ainda possuímos poucas unidades e elas estão concentradas em poucas cidades. Nossa intenção é aumentar o volume de vendas e alcançar um público mais amplo, por isso gostaríamos de solicitar o desenvolvimento de um sistema de reserva de passagens e quartos de hotel, permitindo que usuários acessem nosso catálogo e realizem compras
a partir de seus computadores pessoais, sem a necessidade de se locomover para uma de nossas unidades.<br><br>
<b>Requisitos do Projeto</b><br><br>
1. Passagens aéreas e hotéis:<br>
O sistema deve ser capaz de representar os produtos do catálogo da empresa, ou seja, passagens aéreas e quartos de hotel, por meio de classes que incorporem conceitos de encapsulamento. Cada produto deve ter uma série de atributos, de acordo com seu tipo, que são acessados através de métodos.<br><br>

<b>Levantamento de Requisitos</b><br><br>
Requisitos Funcionais:<br>
1. O sistema deve ser capaz de representar hotéis e passagens;<br>
2. Cada produto deve ter uma série de atributos descritivos;<br>
3. O sistema deve permitir ao usuário reservar produtos no carrinho;<br>
4. Deve ser possível remover itens do carrinho;<br><br>

Requisitos Não Funcionais:<br>
1. O sistema deve ser fácil de usar e ter uma interface intuitiva.<br>
2. O código deve ser bem organizado e seguir boas práticas de programação.<br>
3. O sistema deve ser robusto e capaz de lidar com erros ou situações excepcionais (Opcional).<br><br>

Para compilar:<br>
g++ Main.cpp Hotel.cpp Passagem.cpp Produto.cpp Sistema.cpp Cliente.cpp -o Main<br><br>
Para executar:<br>
Main<br><br>

Observações:<br>
Makefile ainda não funciona. Falta melhorar os arquivos de documentação na pasta html. Para visualizar a documentação é necessário baixar a pasta html, descompactar e abrir o arquivo index.html. A classe cliente faz o ckeck-out, e não a classe Sistema, devido a complicações no acesso e modificação de variáveis.<br><br>
