/*
 * Created by Maksim Paramonov on 08.04.2021.
*/

#include "../include/Deck.h"

void Deck::populate() {
    for (int suit = Suit::CLUB; suit <= Suit::DIAMOND; suit++) {
        for (int rank = Rank::TWO; rank <= Rank::ACE; rank++) {
            add(new Card(static_cast<Suit>(suit), static_cast<Rank>(rank)));
        }
    }
}

void Deck::shuffle() {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine e(seed);
    std::mt19937 g(e());
    std::shuffle(cards->begin(), cards->end(), g);
}

void Deck::deal(Hand &aHand) {
    if (!cards->empty()) {
        Card *card = cards->at(cards->size() - 1);
        cards->pop_back();
        card->flip();
        aHand.add(card);
    }
}

void Deck::addltionalCards(GenericPlayer &aGenerlcPlayer) {
    while (aGenerlcPlayer.isHitting()) {
        deal(aGenerlcPlayer);
        std::cout << aGenerlcPlayer << std::endl;
    }
}
