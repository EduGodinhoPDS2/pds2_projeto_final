# Programação e Desenvolvimento de Software 2 - Projeto Final
<b>UFMG 2024.1</b><br>
<b>Profa. Evellyn Soares Cavalcante</b><br><br>

<b>Apresentação do Problema</b><br><br>
Eu sou o representante de uma empresa do ramo de venda de passagens aéreas e de reserva de vagas de hotel.<br>
Até o momento apenas trabalhamos com lojas físicas, mas ainda possuímos poucas unidades e elas estão concentradas em poucas cidades. Nossa intenção é aumentar o volume de vendas e alcançar um público mais amplo, por isso gostaríamos de solicitar o desenvolvimento de um sistema de reserva de passagens e quartos de hotel, permitindo que usuários acessem nosso catálogo e realizem compras
a partir de seus computadores pessoais, sem a necessidade de se locomover para uma de nossas unidades.<br><br>
<b>Visão Geral da Solução</b><br><br>

1. Passagens aéreas e hotéis:<br>
Duas classes - Hotel e Passagem - devem representar os produtos do catálogo da empresa, ou seja, passagens aéreas e quartos de hotel, incorporando conceitos de encapsulamento. Cada produto deve ter uma série de atributos, de acordo com seu tipo, que são acessados através de métodos.<br>
2. Cliente:<br>
O cliente deve ter uma classe separada e deve ser capaz de utilizar métodos para realizar ações como a escolha e compra de produtos (check-out).<br>
3. Sistema:<br>
O sistema deve ser capaz de acessar um arquivo texto contendo informações sobre os produtos, decodificar seu conteúdo e armazená-lo adequadamente, bem como exibir essas informações de forma adequada ao usuário, também aplicando conceitos de abstração e encapsulamento.<br>
O sistema deve ser fácil de usar e ter uma interface intuitiva.<br>
4. Código:<br>
O código deve ser bem organizado e seguir boas práticas de programação.<br>
O sistema deve ser robusto e capaz de lidar com erros ou situações excepcionais (entrada inválida e.g. numero fora da faixa).<br>
Sempre que o usuário digitar uma entrada inválida, o programa deve informá-lo e retornar ao menu principal.<br><br>

<b>Estrutura do Projeto</b><br><br>

DiretorioPrincipal<br>
  - src: códigos fonte, arquivos auxiliares e cmake files<br>
  - doc: documentação gerada pelo Doxygen. Arquivos html e css.<br>
  - cartaoCRC<br><br>

<b>Instruções de Uso</b><br>
  - Para compilar:<br>
  acessar o terminal e digitar:<br>
  g++ Main.cpp Hotel.cpp Passagem.cpp Produto.cpp Sistema.cpp Cliente.cpp -o Main<br><br>
  - Para construir o projeto com cmake:<br>
  ir para o diretório build-dir e rodar o comando: cmake ..<br>
  abrir a pasta build-dir no explorador ou na linha de comando e rodar a solução ou executável gerado<br>
  - Para acessar a documentação:<br>
  baixar a pasta html, descompactar e abrir o arquivo index.html. <br><br>

<b>Principais Dificuldades</b><br>
A classe cliente faz o ckeck-out, e não a classe Sistema, devido a complicações no acesso e modificação de variáveis.<br>
A modelagem inicial foi descartada pois não permitia o acesso de certas classes aos métodos de outras, dificultando o desenvolvimento do projeto<br>
Encontramos dificuldades para acessar e modificar elementos de estruturas de dados entre classes<br>
Os arquivos cmake seguem regras diferentes, tivemos de aprender um pouco sobre as diferenças e gerar os arquivos num diretório diferente para melhorar a organização<br><br>
