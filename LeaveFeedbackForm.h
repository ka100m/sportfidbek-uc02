// ... (InitializeComponent с элементами)
private: System::Windows::Forms::ComboBox^ cmbService;     // Услуга
private: System::Windows::Forms::ComboBox^ cmbTrainer;     // Тренер
private: System::Windows::Forms::TrackBar^ ratingBar;      // 1-5 звёзд
private: System::Windows::Forms::TextBox^ txtComment;
private: System::Windows::Forms::Button^ btnSend;
private: System::Windows::Forms::Button^ btnAttachPhoto;

// Обработчик отправки отзыва
private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show(L"Отзыв успешно отправлен!\n"
                     L"Услуга: " + cmbService->Text + L"\n"
                     L"Тренер: " + cmbTrainer->Text + L"\n"
                     L"Рейтинг: " + ratingBar->Value.ToString() + L" ★\n"
                     L"Комментарий сохранён.", 
                     L"Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
    
    // Здесь можно добавить запись в базу (симуляция)
    this->Close();
}
