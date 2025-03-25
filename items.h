#include <vector>

class Inventory {
private:
    std::vector<Item*> items;  // Using vector instead of fixed array
    float total_money;

public:
    Inventory() : total_money(0) {}

    void add_item() {
        std::string name;
        int quantity;
        float price;

        std::cin.ignore();
        std::cout << "\nEnter item name: ";
        std::cin >> name;
        std::cout << "Enter quantity: ";
        std::cin >> quantity;
        std::cout << "Enter price: ";
        std::cin >> price;

        items.push_back(new Item(name, quantity, price));  // Dynamically adding item to vector
    }

    void sell_item() {
        std::string item_to_check;
        std::cin.ignore();
        std::cout << "\nEnter item name: ";
        std::cin >> item_to_check;

        for (size_t i = 0; i < items.size(); i++) {
            if (items[i]->is_match(item_to_check)) {
                remove_item(i);
                return;
            }
        }
        std::cout << "\nThis item is not in your Inventory";
    }

    void remove_item(size_t item_index) {
        int input_quantity;
        Item* item = items[item_index];
        std::cout << "\nEnter number of items to sell: ";
        std::cin >> input_quantity;

        int quantity = item->get_quantity();
        if (input_quantity <= quantity) {
            float price = item->get_price();
            float money_earned = price * input_quantity;
            item->set_quantity(quantity - input_quantity);
            std::cout << "\nItems sold";
            std::cout << "\nMoney received: " << money_earned;
            total_money += money_earned;

            // **Remove item completely if quantity reaches zero**
            if (item->get_quantity() == 0) {
                std::cout << "\nItem '" << item->get_name() << "' is out of stock and will be removed from inventory.";

                delete item;  // Free memory
                items.erase(items.begin() + item_index);  // Remove item from vector
            }
        } else {
            std::cout << "\nCannot sell more items than you have.";
        }
    }

    void list_items() {
        if (items.empty()) {
            std::cout << "\nInventory empty.";
            return;
        }

        for (Item* item : items) {
            std::cout << "\nItem name: " << item->get_name();
            std::cout << "\nQuantity: " << item->get_quantity();
            std::cout << "\nPrice: " << item->get_price();
            std::cout << "\n";
        }
    }

    ~Inventory() {
        for (Item* item : items) {
            delete item;  // Free dynamically allocated memory
        }
    }
};
