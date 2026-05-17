#pragma once
namespace SportFidbek {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class LoginForm : public System::Windows::Forms::Form
    {
    public:
        LoginForm(void) { InitializeComponent(); }
    protected: ~LoginForm() { if (components) delete components; }
    private: System::Windows::Forms::TextBox^ txtLogin;
    private: System::Windows::Forms::TextBox^ txtPassword;
    private: System::Windows::Forms::Button^ btnLogin;
    private: System::Windows::Forms::Button^ btnExit;
    private: System::ComponentModel::Container^ components;

    void InitializeComponent(void)
    {
        this->txtLogin = gcnew System::Windows::Forms::TextBox();
        this->txtPassword = gcnew System::Windows::Forms::TextBox();
        this->btnLogin = gcnew System::Windows::Forms::Button();
        this->btnExit = gcnew System::Windows::Forms::Button();
        this->SuspendLayout();

        // txtLogin
        this->txtLogin->Location = System::Drawing::Point(120, 80);
        this->txtLogin->Size = System::Drawing::Size(200, 25);
        this->txtLogin->PlaceholderText = L"Логин";

        // txtPassword
        this->txtPassword->Location = System::Drawing::Point(120, 120);
        this->txtPassword->Size = System::Drawing::Size(200, 25);
        this->txtPassword->PasswordChar = '*';
        this->txtPassword->PlaceholderText = L"Пароль";

        // btnLogin
        this->btnLogin->Location = System::Drawing::Point(150, 170);
        this->btnLogin->Size = System::Drawing::Size(140, 35);
        this->btnLogin->Text = L"Войти";
        this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);

        // btnExit
        this->btnExit->Location = System::Drawing::Point(150, 220);
        this->btnExit->Size = System::Drawing::Size(140, 35);
        this->btnExit->Text = L"Выход";
        this->btnExit->Click += gcnew System::EventHandler(this, &LoginForm::btnExit_Click);

        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->ClientSize = System::Drawing::Size(440, 300);
        this->Text = L"СпортФидбек — Авторизация";
        this->Controls->Add(this->txtLogin);
        this->Controls->Add(this->txtPassword);
        this->Controls->Add(this->btnLogin);
        this->Controls->Add(this->btnExit);
        this->ResumeLayout(false);
    }

    private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e)
    {
        if (txtLogin->Text == "manager" && txtPassword->Text == "12345")
        {
            DashboardForm^ dash = gcnew DashboardForm();
            dash->Show();
            this->Hide();
        }
        else
            MessageBox::Show(L"Неверный логин или пароль!", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

    private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e)
    {
        Application::Exit();
    }
    };
}
