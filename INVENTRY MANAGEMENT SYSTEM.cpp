#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;

const int MAX_PRODUCTS = 1000;
struct Product 
{
    int id;
    char name[50];
    char category[30];
    int quantity;
    int reorderLevel;
    double price;
};

struct Sale
{
    int productId;
    int quantitySold;
    double totalAmount;
    char date[20];
};

Product products[MAX_PRODUCTS];
int productCount = 0;

Sale sales[MAX_PRODUCTS];
int saleCount = 0;

//DECLARING MY ALL FUNCTIONS WITH VOID
void loadProducts();
void saveProducts();
void loadSales();
void saveSales();
void addProduct();
void updateProduct();
void deleteProduct();
void searchProduct();
void showInventory();
void recordSale();
void lowStockReport();
void mainMenu();
int findProductIndex(int id);

int main()
{
    loadProducts();
    loadSales();
    mainMenu();
    saveProducts();
    saveSales();
    return 0;
}

// NOW LOADING PRODUCTS FROM FILE
void loadProducts()
{
    ifstream fin("products.dat", ios::binary);
    if (!fin) return;
    fin.read((char*)&productCount, sizeof(productCount));
    fin.read((char*)products, sizeof(Product) * productCount);
    fin.close();
}

// SAVING PRODUCTS TO FILE
void saveProducts()
{
    ofstream fout("products.dat", ios::binary);
    fout.write((char*)&productCount, sizeof(productCount));
    fout.write((char*)products, sizeof(Product) * productCount);
    fout.close();
}

// LOADING SALES FROM FILE
void loadSales()
{
    ifstream fin("sales.dat", ios::binary);
    if (!fin) return;
    fin.read((char*)&saleCount, sizeof(saleCount));
    fin.read((char*)sales, sizeof(Sale) * saleCount);
    fin.close();
}

// FOR SAVING SALES TO FILE 
void saveSales()
{
    ofstream fout("sales.dat", ios::binary);
    fout.write((char*)&saleCount, sizeof(saleCount));
    fout.write((char*)sales, sizeof(Sale) * saleCount);
    fout.close();
}

// ADD NEW PRODUCT
void addProduct()
{
    if
	  (productCount >= MAX_PRODUCTS)
	  {
        cout << "Inventory full!" << endl;
        return;
    }
    Product p;
    cout << "Enter Product ID: "; cin >> p.id;
    if(findProductIndex(p.id) != -1)
	{
        cout << "Product ID already exists!" << endl;
        return;
    }
    cin.ignore();
    cout << "Enter Product Name: "; cin.getline(p.name, 50);
    cout << "Enter Category: "; cin.getline(p.category, 30);
    cout << "Enter Quantity: "; cin >> p.quantity;
    cout << "Enter Reorder Level: "; cin >> p.reorderLevel;
    cout << "Enter Price: "; cin >> p.price;
    products[productCount++] = p;
    cout << "Product added successfully!" << endl;
}

// FOR UPDATING THE EXISTING PRODUCTS
void updateProduct()
{
    int id;
    cout << "Enter Product ID to update: "; cin >> id;
    int idx = findProductIndex(id);
    if (idx == -1)
	{
        cout << "Product not found!" << endl;
        return;
    }
    Product &p = products[idx];
    cin.ignore();
    cout << "Enter Product Name: "; cin.getline(p.name, 50);
    cout << "Enter Category: "; cin.getline(p.category, 30);
    cout << "Enter Quantity: "; cin >> p.quantity;
    cout << "Enter Reorder Level: "; cin >> p.reorderLevel;
    cout << "Enter Price: "; cin >> p.price;
    cout << "Product updated successfully!" << endl;
}

// FOR DELETING THE PRODUCTS
void deleteProduct()
{
    int id;
    cout << "Enter Product ID to delete: "; cin >> id;
    int idx = findProductIndex(id);
    if (idx == -1)
	{
        cout << "Product not found!" << endl;
        return;
    }
    for (int i = idx; i < productCount - 1; i++)
        products[i] = products[i + 1];
    productCount--;
    cout << "Product deleted successfully!" << endl;
}

// FOR SEARCHING THE PRODUCTS
void searchProduct()
{
    int id;
    cout << "Enter Product ID to search: "; cin >> id;
    int idx = findProductIndex(id);
    if (idx == -1)
	{
        cout << "Product not found!" << endl;
        return;
    }
    Product &p = products[idx];
    cout << "ID: " << p.id << "\nName: " << p.name
         << "\nCategory: " << p.category
         << "\nQuantity: " << p.quantity
         << "\nReorder Level: " << p.reorderLevel
         << "\nPrice: $" << p.price << endl;
}

// FOR SHOWING ALL THE INVENTORY
void showInventory()
{
    if
	(productCount == 0)
	{
        cout << "No products in inventory!" << endl;
        return;
    }
    cout << left << setw(5) << "ID" << setw(20) << "Name" << setw(15) 
         << "Category" << setw(10) << "Qty" << setw(10) << "Reorder" 
         << setw(10) << "Price" << endl;
    cout << "------------------------------------------" << endl;
    for(int i = 0; i < productCount; i++)
	{
        Product &p = products[i];
        cout << left << setw(5) << p.id << setw(20) << p.name 
             << setw(15) << p.category << setw(10) << p.quantity 
             << setw(10) << p.reorderLevel << setw(10) << p.price << endl;
    }
}

// FOR RECORDING A SCALE
void recordSale()
{
    int id, qty;
    cout << "Enter Product ID: "; cin >> id;
    int idx = findProductIndex(id);
    if (idx == -1)
	{
        cout << "Product not found!" << endl;
        return;
    }
    Product &p = products[idx];
    cout << "Enter quantity sold: "; cin >> qty;
    if (qty > p.quantity)
	{
        cout << "Not enough stock!" << endl;
        return;
    }
    p.quantity -= qty;
    Sale s;
    s.productId = id;
    s.quantitySold = qty;
    s.totalAmount = qty * p.price;
    cin.ignore();
    cout << "Enter date (dd-mm-yyyy): "; cin.getline(s.date, 20);
    sales[saleCount++] = s;
    cout << "Sale recorded successfully!" << endl;
}

// FOR LOW STOCK REPORT
void lowStockReport()
{
    cout << "Low Stock Items:" << endl;
    for (int i = 0; i < productCount; i++)
	{
        if(products[i].quantity <= products[i].reorderLevel)
		{
            cout << "ID: " << products[i].id << " | Name: " << products[i].name 
                 << " | Qty: " << products[i].quantity << endl;
        }
    }
}

// FINDING PRODUCT INDEX BY ID
int findProductIndex(int id)
{
    for(int i = 0; i < productCount; i++)
        if(products[i].id == id) return i;
    return -1;
}

// FOR MAIN MENU
void mainMenu()
{
    int choice;
    do 
	{
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Product\n2. Update Product\n3. Delete Product\n";
        cout << "4. Search Product\n5. Show Inventory\n6. Record Sale\n";
        cout << "7. Low Stock Report\n8. Exit\n";
        cout << "Enter your choice: "; cin >> choice;
        switch(choice)
		{
            case 1:
			 addProduct();
			     break;
            case 2:
			 updateProduct();
			     break;
            case 3: 
			  deleteProduct();
			     break;
            case 4:
			 searchProduct();
			     break;
            case 5:
			 showInventory();
			     break;
            case 6:
			 recordSale();
			     break;
            case 7:
			 lowStockReport();
			     break;
            case 8:
			 cout << "Exiting program...\n";
			     break;
            default:
			 cout << "Invalid choice!\n";
        }
    }
	 while(choice != 8);
}

