// ... (KPI: Label'ы для среднего рейтинга, NPS, количества отзывов)
private: System::Void LoadDashboard()
{
    lblAvgRating->Text = L"4.8 ★";
    lblNPS->Text = L"72";
    lblReviewsCount->Text = L"147 отзывов за месяц";
    
    // Топ-тренеры
    dataGridTopTrainers->Rows->Add(L"Иванова А.А.", L"4.9", L"Групповые занятия");
    dataGridTopTrainers->Rows->Add(L"Петров С.В.", L"4.7", L"Тренажёрный зал");
}
