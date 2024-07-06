# Programação e Desenvolvimento de Software 2 - Projeto Final
<b>UFMG 2024.1</b><br>
<b>Profa. Evellyn Soares Cavalcante</b><br><br>

<b>Apresentação do Problema</b><br><br>
Eu sou o representante de uma empresa do ramo de venda de passagens aéreas e de reserva de vagas de hotel, e por esse motivo<br>
gostaria de compartilhar nossa visão de crescimento e solicitar uma parceria para o desenvolvimento de um sistema online.<br>
Atualmente, nossa operação está concentrada em lojas físicas, com uma presença limitada a algumas unidades localizadas<br>
em poucas regiões, e, embora este modelo tenha funcionado bem até agora, ele nos impõe limitações significativas em termos<br>
de alcance e capacidade de atender a um público mais amplo.<br>
Nossa estratégia de expansão consiste em aumentar nosso volume de vendas e tornar nossos serviços acessíveis a uma base<br>
de clientes maior. Para isso, estamos buscando desenvolver uma plataforma digital que permita aos nossos clientes realizar<br>
reservas de passagens aéreas e quartos de hotel diretamente de seus computadores pessoais, sem a necessidade de visitar<br>
nossas lojas físicas e sem sair do conforto de seus lares.<br>
Este sistema online terá como objetivo principal oferecer uma experiência de compra conveniente e acessível a partir de qualquer lugar.<br>
Isso não apenas facilitará o processo de reserva para nossos clientes atuais, mas também nos permitirá alcançar novos mercados<br>
e expandir nossa presença de forma significativa.<br>
Estamos ansiosos para discutir essa oportunidade e trabalhar para criar uma solução tecnológica que alinhe com nossa visão de futuro.<br><br>
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
  - html: documentação gerada pelo Doxygen. Arquivos html e css.<br>
  - crc_cards.png: cartão CRC<br><br>

<b>Instruções de Uso</b><br>
  - Para compilar:<br>
  acessar o terminal e digitar:<br>
  g++ Main.cpp Hotel.cpp Passagem.cpp Produto.cpp Sistema.cpp Cliente.cpp -o Main<br><br>
  - Para construir o projeto com cmake:<br>
  ir para o diretório build-dir e rodar o comando: cmake ..<br>
  abrir a pasta build-dir no explorador ou na linha de comando e rodar a solução ou executável gerado<br><br>
  - Para acessar a documentação:<br>
  baixar a pasta html, descompactar e abrir o arquivo index.html. <br><br>

<b>Principais Dificuldades</b><br>
A classe cliente faz o ckeck-out, e não a classe Sistema, devido a complicações no acesso e modificação de variáveis.<br>
A modelagem inicial foi descartada pois não permitia o acesso de certas classes aos métodos de outras, dificultando o desenvolvimento do projeto<br>
Encontramos dificuldades para acessar e modificar elementos de estruturas de dados entre classes<br>
Os arquivos cmake seguem regras diferentes, tivemos de aprender um pouco sobre as diferenças e gerar os arquivos num diretório diferente para melhorar a organização<br><br>

<b>Extra: vídeo ilustrando o funcionamento do projeto</b><br><br>
https://www.youtube.com/watch?v=pIGz5Dfl1yw<br>
