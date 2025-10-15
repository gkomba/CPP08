/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:31:33 by gkomba            #+#    #+#             */
/*   Updated: 2025/10/15 12:54:26 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

class Pessoa {
    private:
        std::string nome;
        int idade;
    public:
        Pessoa() : nome("Desconhecido"), idade(0) {}
        Pessoa(const std::string &n, int i) : nome(n), idade(i) {}
        Pessoa(const Pessoa &other) : nome(other.nome), idade(other.idade) {}

        Pessoa &operator=(const Pessoa &other) {
            if (this != &other) {
                nome = other.nome;
                idade = other.idade;
            }
            return *this;
        }
        ~Pessoa() {}
        const std::string &getNome() const { return nome; }
        int getIdade() const { return idade; }
};

std::ostream &operator<<(std::ostream &os, const Pessoa &p) {
    os << "[" << p.getNome() << ", " << p.getIdade() << "]";
    return os;
}

int main()
{
    std::cout << "USANDO MUTANTSTACK" << std::endl;
    MutantStack<int, std::list<int> > mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Topo " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int, std::list<int> >::iterator it = mstack.begin();
    MutantStack<int, std::list<int> >::iterator ite = mstack.end();
    ++it;
    --it;
    int i = 0;
    while (it != ite)
    {
        i++;
        std::cout << "Pos " << i << " - " << *it << std::endl;
        ++it;
    }
    std::stack<int, std::list<int> > s(mstack);

    std::cout << "USANDO LIST" << std::endl;
    std::list<int> mstack_list; 
    mstack_list.push_back(5);
    mstack_list.push_back(17);
    std::cout << "Topo " << mstack_list.front() << std::endl;
    mstack_list.pop_back();
    std::cout << mstack_list.size() << std::endl;
    mstack_list.push_back(3);
    mstack_list.push_back(5);
    mstack_list.push_back(737);
    mstack_list.push_back(0);
    std::list<int>::iterator it_l = mstack_list.begin();
    std::list<int>::iterator ite_l = mstack_list.end();
    ++it_l;
    --it_l;
    i = 0;
    while (it_l != ite_l)
    {
        i++;
        std::cout << "Pos " << i << " - " << *it_l << std::endl;
        ++it_l;
    }

    std::cout << "=== TESTE 1: MutantStack<int> ===" << std::endl;
    MutantStack<int> pilhaInt;
    pilhaInt.push(10);
    pilhaInt.push(20);
    pilhaInt.push(30);

    std::cout << "Elementos da pilha: ";
    for (MutantStack<int>::iterator it = pilhaInt.begin(); it != pilhaInt.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Topo da pilha: " << pilhaInt.top() << std::endl;

    std::cout << "\n=== TESTE 2: MutantStack<std::string> ===" << std::endl;
    MutantStack<std::string> pilhaStr;
    pilhaStr.push("Luma");
    pilhaStr.push("AddPay");
    pilhaStr.push("42Luanda");

    std::cout << "Elementos da pilha: ";
    for (MutantStack<std::string>::iterator it = pilhaStr.begin(); it != pilhaStr.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Topo da pilha: " << pilhaStr.top() << std::endl;

    std::cout << "\n=== TESTE 3: MutantStack<Pessoa> ===" << std::endl;
    MutantStack<Pessoa> pilhaPessoa;
    pilhaPessoa.push(Pessoa("Gildo", 23));
    pilhaPessoa.push(Pessoa("Ana", 19));
    pilhaPessoa.push(Pessoa("Carlos", 28));

    std::cout << "Elementos da pilha: " << std::endl;
    for (MutantStack<Pessoa>::iterator it = pilhaPessoa.begin(); it != pilhaPessoa.end(); ++it)
        std::cout << "  " << *it << std::endl;

    std::cout << "Topo da pilha: " << pilhaPessoa.top() << std::endl;

    std::cout << "\n=== TESTE 4: Cópia e Atribuição ===" << std::endl;
    MutantStack<Pessoa> copia(pilhaPessoa);
    MutantStack<Pessoa> atribuida;
    atribuida = pilhaPessoa;

    std::cout << "Cópia: ";
    for (MutantStack<Pessoa>::iterator it = copia.begin(); it != copia.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Atribuída: ";
    for (MutantStack<Pessoa>::iterator it = atribuida.begin(); it != atribuida.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "\n=== TESTE 5: Iteradores const ===" << std::endl;
    const MutantStack<std::string> constStack(pilhaStr);
    for (MutantStack<std::string>::const_iterator it = constStack.begin(); it != constStack.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}
