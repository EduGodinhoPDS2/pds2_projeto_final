#include "Sistema.hpp"
int main() {
	Sistema sistema;/// Cria um objeto da classe sistema responsável por gerenciar as operações de reserva e interação dos produtos.
	int mainMenuOpt;
	bool leave = false;
	std::string name;
	std::cout << "digite seu nome para realizar o cadastro" << std::endl;
	std::cout << ">> ";
	std::cin >> name;
	std::cout << std::endl;
	Cliente cliente(name);///Cria um objeto da classe Cliente com o nome fornecido pelo usuário durante a execução do programa.
	sistema.loadStoreFromFile("ProductList.txt"); ///Chama o método loadStoreFromFile() do objeto sistema para carregar informações sobre produtos de um arquivo chamado "ProductList.txt". Esses produtos incluem passagens de avião e quartos de hotel disponíveis para reserva.
	while (!leave) {
		Sistema::printSectionDelimiter();
		std::cout << std::endl << "menu principal" << std::endl << std::endl;
		std::cout << "(0) sair" << std::endl;
		std::cout << "(1) reservar passagem de aviao" << std::endl;
		std::cout << "(2) reservar quarto de hotel" << std::endl;
		std::cout << "(3) remover item do carrinho" << std::endl;
		std::cout << "(4) ver carrinho" << std::endl;
		std::cout << "(5) fazer check-out" << std::endl << std::endl;
		std::cout << "digite o numero correspondente a acao desejada" << std::endl;
		mainMenuOpt = -1;
		Sistema::readInteger(mainMenuOpt, 0, 5);
		switch (mainMenuOpt) {
			///Define leave como true, indicando que o usuário deseja sair do programa.
			case 0:
				std::cout << std::endl << "voce saiu do programa" << std::endl;
				leave = true;
				break;
			///Chama o método addToCart() do objeto cliente para adicionar uma passagem de avião ao carrinho, usando o método pickFlyTicket() do objeto sistema para selecionar a passagem.
			case 1:
				Sistema::printSectionDelimiter();
				cliente.addToCart(sistema.pickFlyTicket());
				break;
			///Chama o método addToCart() do objeto cliente para adicionar um quarto de hotel ao carrinho, usando o método pickHotelRoom() do objeto sistema para selecionar o quarto.
			case 2:
				Sistema::printSectionDelimiter();
				cliente.addToCart(sistema.pickHotelRoom());
				break;
			///Chama o método removeFromCart() do objeto cliente para remover um item específico do carrinho.
			case 3:
				Sistema::printSectionDelimiter();
				cliente.removeFromCart();
				break;
			///Chama o método dispCart(BOTH) do objeto cliente para exibir o conteúdo completo do carrinho (passagens e quartos de hotel).
			case 4:
				Sistema::printSectionDelimiter();
				cliente.dispCart(BOTH);
				break;
			///Chama o método checkOut() do objeto cliente para finalizar a compra, exibindo um resumo da compra e permitindo a confirmação da compra pelo usuário.
			case 5:
				Sistema::printSectionDelimiter();
				cliente.checkOut();
				break;
			///Caso o usuário digite uma opção inválida (fora do intervalo 0 a 5), exibe uma mensagem indicando que a opção não corresponde a nenhuma ação válida.
			default:
				std::cout << "o numero digitado nao corresponde a nenhuma acao" << std::endl;
		}
	}
	return 0;
}
