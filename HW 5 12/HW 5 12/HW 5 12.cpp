#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pageCount;
    bool isHardcover;
    double price;
public:
    
    Book() : Book("Title", "Author", 10, false, false) {}
    Book(string title, string author, int pageCount, bool isHardcover, double price)
    {
        SetTitle(title);
        SetAuthor(author);
        SetPageCount(pageCount);
        SetIsHardCover(isHardcover);
        SetPrice(price);
    }

    void SetTitle(string title)
    {
        this->title = title;
    }
    string GetTitle()
    {
        return title;
    }
    void SetAuthor(string author)
    {
        this->author = author;
    }
    string GetAuthor()
    {
        return author;
    }
    void SetPageCount(int pageCount)
    {
        this->pageCount = pageCount;
    }
    int GetPageCount()
    {
        return pageCount;
    }
    void SetIsHardCover(bool isHardCover)
    {
        this->isHardcover = isHardCover;
    }
    bool GetIsHardCover()
    {
        return isHardcover;
    }
    void SetPrice(double price)
    {
        this->price = price;
    }
    double GetPrice()
    {
        return price;
    }

    void GetInfo()
    {
        cout << title << "\n";
        cout << author << "\n";
        cout << pageCount << "\n";
        cout << isHardcover << "\n";
        cout << price << "\n";
    }
    void BookmarkPage()
    {
        int bookmark = rand() % pageCount;
        cout << "Bookmark at page" << bookmark << "\n";
    }
    bool AddHardCover()
    {
        if (isHardcover)
        {
            return isHardcover;
        }
        isHardcover = true;
        return isHardcover;
    }
    void Lend()
    {
        cout << "Book borrowed by Human "<< "\n";
    }
    double CalculateDiscountPrice()
    {
        double discount = 0.2;
        price *= discount;
        return price;
    }
};

class Smartphone {
private:
    string brand;
    string model;
    int capacity;
    bool hasDualCamera;
    bool isWaterproof;
public:

    Smartphone(): Smartphone("Apple", "iPhone 15",128, true,true) {}
    Smartphone(string brand, string model, int capacity, bool hasDualCamera, bool isWaterproof)
    {
        SetBrand(brand);
        SetModel(model);
        SetCapacity(capacity);
        SetCamera(hasDualCamera);
        SetWaterproof(isWaterproof);
    }

    void SetBrand(string brand)
    {
        this->brand = brand;
    }
    string GetBrand()
    {
        return brand;
    }
    void SetModel(string model)
    {
        this->model = model;
    }
    string GetModel()
    {
        return model;
    }
    void SetCapacity(int capacity)
    {
        this->capacity = capacity;
    }
    int GetCapacity()
    {
        return capacity;
    }
    void SetCamera(bool hasDualCamera)
    {
        this->hasDualCamera = hasDualCamera;
    }
    bool GetCamera()
    {
        return hasDualCamera;
    }
    void SetWaterproof(bool isWaterproof)
    {
        this->isWaterproof = isWaterproof;
    }
    bool GetWaterproof()
    {
        return isWaterproof;
    }
    void MakeCall()
    {
        cout << "You are calling to Human" << "\n";
    }
    void TakePhoto()
    {
        cout << "You took a picture of Cat" << "\n";
    }
    void InstallApp(string app)
    {
        cout << "You have installed " << app << "\n";
    }
    int CheckStorageSpace()
    {
        int used = rand() % capacity;
        cout << used << " GB of " << capacity << "GB used\n";
        return used;
    }
    void SetAlarm()
    {
        if (CheckStorageSpace() > 100)
        {
            cout << "Your storage almost full\n";
        }
    }
};

class Cat {
private:
    string name;
    int age;
    string color;
    bool isMale;
    bool hasCollar;
public:
    Cat(): Cat("Cat", 1, "white", false, false) {}

    Cat(string name, int age, string color, bool isMale, bool hasCollar)
    {
        SetAge(age);
        SetName(name);
        SetCollar(hasCollar);
        SetMale(isMale);
        SetColor(color);
    }

    void SetName(string name)
    {
        this->name = name;
    }
    string GetName()
    {
        return name;
    }
    void SetAge(int age)
    {
        this->age = age;
    }
    int GetAge()
    {
        return age;
    }
    void SetColor(string color)
    {
        this->color = color;
    }
    string GetColor()
    {
        return color;
    }
    void SetMale(bool isMale)
    {
        this->isMale = isMale;
    }
    bool GetMale()
    {
        return isMale;
    }
    void SetCollar(bool hasCollar)
    {
        this->hasCollar = hasCollar;
    }
    bool GetCollar()
    {
        return hasCollar;
    }
    void Meow()
    {
        cout << "Meow\n";
    }

    void Sleep()
    {
        cout << name << "is sleeping\n";
    }

    void Eat()
    {
        cout << name << "is eating\n";
    }

    void Purr()
    {
        cout << "Purrrr\n";
    }

    void Play()
    {
        cout << name << "is plaing\n";
    }
};

class RemoteControl {
private:
    string brand;
    bool hasBattery;
    int buttonsCount;
    bool isProgrammable;
    bool isTouchScreen;
public:

    RemoteControl(): RemoteControl("Remove", false, 10, false, false) {}
    RemoteControl(string brand, bool hasBattery, int buttonsCount, bool isProgrammable, bool isTouchScreen)
    {
        SetBrand(brand);
        SetHasBattery(hasBattery);
        SetButtonsCount(buttonsCount);
        SetIsProgrammable(isProgrammable);
        SetIsTouchScreen(isTouchScreen);
    }
    
    void SetBrand(string brand)
    {
        this->brand = brand;
    }
    string GetBrand()
    {
        return brand;
    }
    void SetHasBattery(bool hasBattery)
    {
        this->hasBattery = hasBattery;
    }
    bool GetHasBattery()
    {
        return hasBattery;
    }
    void SetButtonsCount(int buttonsCount)
    {
        this->buttonsCount = buttonsCount;
    }
    int GetButtonsCount()
    {
        return buttonsCount;
    }
    void SetIsProgrammable(bool isProgrammable)
    {
        this->isProgrammable = isProgrammable;
    }
    bool GetIsProgrammable()
    {
        return isProgrammable;
    }
    void SetIsTouchScreen(bool isTouchScreen)
    {
        this->isTouchScreen = isTouchScreen;
    }
    bool GetIsTouchScreen()
    {
        return isTouchScreen;
    }
    void PressButton()
    {
        cout << "Button have pressed\n";
    }

    void PowerOn()
    {
        cout << "Switched on TV\n";
    }

    void PowerOff()
    {
        cout << "Switched off TV\n";
    }

    void ProgramButton()
    {
        if (isProgrammable)
        {
            cout << "Button has been programmed\n";
        }
        else
        {
            cout << "Button not programmable\n";
        }
    }

    void AdjustVolume()
    {
        cout << "Volume has benn adjusted\n";
    }
};

class Human {
private:
    int age;
    int height;
    int weight;
    string name;
    string gender;
public:
    Human() : Human(20,180,80,"Human", "Male") {}

    void SetAge(int age)
    {
        this->age = age;

    }
    int GetAge()
    {
        return age;
    }
    void SetHeight(int height)
    {
        this->height = height;
    }
    int GetHeight()
    {
        return height;
    }
    void SetWeight(int weight)
    {
        this->weight = weight;
    }
    int GetWeight()
    {
        return weight;
    }
    void SetName(string name)
    {
        this->name = name;
    }
    string GetName()
    {
        return name;
    }
    void SetGender(string gender)
    {
        this->gender = gender;
    }
    string GetGender()
    {
        return gender;
    }

    Human(int age, int height, int weight, string name, string gender)
    {
        SetAge(age);
        SetHeight(height);
        SetWeight(weight);
        SetName(name);
        SetGender(gender);
    }

    void GetInfo()
    {
        cout << "Name: " << name << "\n";
        cout << "Gender: " << gender << "\n";
        cout << "Age: " << age << "\n";
        cout << "Height: " << height << "\n";
        cout << "Weight: " << weight << "\n";
    }
    void ChangeChannel(RemoteControl remote)
    {
        int channel = 1 + rand() % remote.GetButtonsCount();
        cout << "Change to " << channel << " channel\n";
    }
    void ReadPage(Book book)
    {
        int page = rand() % book.GetPageCount();
        cout << book.GetTitle() << "    " << book.GetAuthor() << "\n";
        cout << name << " current on page " << page << "\n";
    }
    void BuySmartphone(Smartphone phone)
    {
        cout << name << " bought " << phone.GetBrand() << " " << phone.GetModel() << "\n";
    }
    void ChangeCatName(Cat cat, string newName)
    {
        cout << name << " changed name for " << cat.GetName();
        cat.SetName(newName);
        cout << " to " << cat.GetName() << "\n";
    }
};

int main()
{
    srand(time(NULL));
    Human human;
    Book book;
    Cat cat;
    Smartphone phone;
    RemoteControl remote;
    human.BuySmartphone(phone);
    human.ChangeCatName(cat, "asd");
    human.ChangeChannel(remote);
    human.ReadPage(book);
    human.GetInfo();

}
