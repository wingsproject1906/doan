//chu thich duoc ghi o cuoi dong code
#include <iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
void vietnamese()
{
	int magiamgia;
	int a, b, c, tongTien = 0;
	int soLuong[10] = { 0 };//tạo biến mảng chua so luong mon ăn cua quan
	std::cout << "                                 ----MENU QUAN AN----" << endl;
	std::cout << "__________________________________________________________________________" << endl;
	std::cout << "1.com tam_______________________________40K |	6.nuoc ngot___________10K" << endl;
	std::cout << "2.com ga________________________________40K |	7.tra da______________5K" << endl;
	std::cout << "3.com chien duong chau _________________40K |	8.tra chanh___________7K" << endl;
	std::cout << "4.com xao bo____________________________40K |	9.hong tra____________10K" << endl;
	std::cout << "5.com suon xao chua ngot________________40K |	10.nuoc suoi___________5K" << endl;
	std::cout << "" << endl;
	std::cout << "moi ban goi mon theo so tren menu, NHAP 0 KET THUC GOI MON" << endl;
	while (true)
	{
		c = 0;
		std::cout << "so thu tu mon an: ";
		std::cin >> a;
		while (a < 0 || a>10)
		{

			std::cout << "mon an khong ton tai! hay chon lai" << endl;
			std::cout << "so thu tu mon an: ";
			std::cin >> a;
			break;
		}

		if (a >= 1 && a < 6)
		{
			c = 40;
		}
		else if (a == 6)
		{
			c = 10;
		}
		else if (a == 7 || a == 10)
		{
			c = 5;
		}
		else if (a == 8)
		{
			c = 7;
		}
		else if (a == 9)
		{
			c = 10;
		}

		if (a == 0)
		{
			std::cout << "                       KET THUC GOI MON! HAY CHO DE DUOC PHUC VU" << endl;
			break;
		}
		std::cout << "so luong: ";
		std::cin >> b;
		soLuong[a - 1] += b;//kiểm tra số lượng đồng thời cộng giá
		tongTien += b * c;//tổng tiền ban đàu là 0 công bằng giá trị của số món nhân giá
		if (b * c < 1000)
		{
			std::cout << "Gia: " << b * c << " K" << endl;

		}
		if (b * c >= 1000)
		{
			std::cout << "Gia: " << b * c << " K" << endl;
		}
	}
	system("cls");
	std::cout << "                       KET THUC GOI MON! HAY CHO DE DUOC PHUC VU" << endl;
	std::cout << "                       " << endl;
	std::cout << "                               DAY LA HOA DON THANH TOAN" << endl;
	std::cout << "  ------------------------------------------------------------------" << endl;
	std::cout << "   " << endl;
	std::cout << "  ------------------------------------------------------------------" << endl;
	string tenMon[10] = { "Com tam", "Com ga", "Com chien duong chau", "Com xao bo", "Com suon xao chua ngot","Nuoc ngot", "Tra da", "Tra chanh", "Hong tra", "Nuoc suoi" };//

	int gia[10] = { 40000, 40000, 40000, 40000, 40000, 10000, 5000, 7000, 10000, 5000 };//
	int tongcong = 0;
	for (int i = 0; i < 10; i++)//
	{//
		if (soLuong[i] > 0)//
		{//
			int thanhtien = soLuong[i] * gia[i];
			tongcong += thanhtien;
			std::cout << "mon an" << "         " << tenMon[i] << endl;
			std::cout << "sl/gia" << "         " << soLuong[i] << "        " << soLuong[i] * gia[i] << " vnd" << endl;
			thanhtien;
		}//

	}
	std::cout << "______________________________________________" << endl;
	std::cout << "tong hoa don cua ban la: " << tongcong << endl;//tổng hoá đơn
	std::cout << "______________________________________________" << endl;
	//ket thuc hoa đơn thuần tuý
	if (tongcong >= 200000 && tongcong < 500000)
	{
		std::cout << "hoa don cua ban hien tai dat gia tri tren 200k! ban duoc giam gia 10% tren tong hoa don" << endl;
		std::cout << "so tien ban can thanh toan la: " << tongcong * 0.9 << " vnd" << endl;
	}
	if (tongcong >= 500000)
	{
		std::cout << "hoa don cua ban hien tai dat gia tri tren 500k! ban duoc giam gia 10% tren tong hoa don va duoc chon 1 phan qua ngau nhien!" << endl;
		std::cout << "so tien ban can thanh toan la: " << tongcong * 0.9 << " vnd" << endl;
		//tạo vòng quay (bien thoi gian [srand (time(0))])-(range random=int [biến]=rand()%[khoảng rand]
		string qua[10] = { "op dien thoai","tai nghe","non bao hiem","non luoi trai","the cao 20k","kinh mat","khan tay","ao mua","moc khoa","sticker" };
		srand(time(0));
		int vitri = rand() % 10;
		//van hanh
		std::cout << "=======================================================" << endl;
		std::cout << "moi ban tham gia vong quay may man!!!choi(Y)/khong(N)" << endl;
		char z;
		std::cin >> z;
		if (z == 'y' || z == 'Y')
		{
			std::cout << "Phan thuong may man la!!! ";
			std::cout << qua[vitri] << endl;
		}
		else if (z == 'N' || z == 'n')
		{
			std::cout << "that tiec! Vi ban khong tham gia!!!" << endl;
			std::cout << "Hay nhap ma giam gia (neu co)!: ";

		}
		//van hanh
	}

	//cac truong hop giam gia
	//tạo mã giảm giá
	std::cout << "*****************************************" << endl;
	std::cout << "Hay nhap ma giam gia (neu co)!: ";
	float tongtien_sau_giam = tongcong;
	cin >> magiamgia;
	if ((tongcong < 200000) && (magiamgia == 123456 || magiamgia == 190606 || magiamgia == 192006))
	{
		std::cout << "ma giam gia hop le! Ban duoc giam 5% tren tong hoa don" << endl;
		std::cout << "=====================================================================" << endl;
		std::cout << "" << endl;
		tongtien_sau_giam = tongcong * 0.95;
		std::cout << "hoa don cuoi cung la! " << tongtien_sau_giam << " vnd" << endl;
	}
	else if ((tongcong < 200000) && (magiamgia != 123456 && magiamgia != 190606 && magiamgia != 192006))
	{
		std::cout << "ma giam gia khong hop le!!! ban khong duoc giam gia" << endl;
		std::cout << "=====================================================================" << endl;
		std::cout << "" << endl;
		std::cout << "hoa don cuoi cung la! " << tongcong << " vnd" << endl;
	}
	else if ((tongcong >= 200000 && tongcong < 500000) && (magiamgia == 123456 || magiamgia == 190606 || magiamgia == 192006))
	{
		std::cout << "ma giam gia hop le! Ban duoc giam 5% tren tong hoa don" << endl;
		std::cout << "=====================================================================" << endl;
		std::cout << "" << endl;
		tongtien_sau_giam = tongcong * 0.85;
		std::cout << "hoa don cuoi cung la! " << tongtien_sau_giam << " vnd" << endl;
	}
	else if ((tongcong >= 200000 && tongcong < 500000) && (magiamgia != 123456 && magiamgia != 190606 && magiamgia != 192006))
	{
		std::cout << "ma giam gia khong hop le!!! ban khong duoc giam gia" << endl;
		std::cout << "=====================================================================" << endl;
		std::cout << "" << endl;
		tongtien_sau_giam = tongcong * 0.9;
		std::cout << "hoa don cuoi cung la! " << tongtien_sau_giam << " vnd" << endl;
	}
	else if ((tongcong >= 500000) && (magiamgia == 123456 || magiamgia == 190606 || magiamgia == 192006))
	{
		std::cout << "ma giam gia hop le! Ban duoc giam 5% tren tong hoa don" << endl;
		std::cout << "=====================================================================" << endl;
		std::cout << "" << endl;
		tongtien_sau_giam = tongcong * 0.85;
		std::cout << "hoa don cuoi cung la! " << tongtien_sau_giam << " vnd" << endl;
	}
	else if ((tongcong >= 500000) && (magiamgia != 123456 && magiamgia != 190606 && magiamgia != 192006))
	{
		std::cout << "ma giam gia khong hop le!!! ban khong duoc giam gia" << endl;
		std::cout << "=====================================================================" << endl;
		std::cout << "" << endl;
		tongtien_sau_giam = tongcong * 0.9;
		std::cout << "hoa don cuoi cung la! " << tongtien_sau_giam << " vnd" << endl;
	}
	//kết thúc mã giảm giá
	int k;
	std::cout << "khach dua: ";
	std::cin >> k;
	if (k >= tongtien_sau_giam)
	{
		std::cout << "tra khach: " << k - tongtien_sau_giam << " d" << endl;
	}
	else if (k < tongtien_sau_giam)
	{
		int q = tongcong - k; // Số tiền còn thiếu
		std::cout << "Ban chua dua du tien!!! Ban con thieu: " << q << " vnd" << std::endl;

		while (q > 0) // Yêu cầu khách tiếp tục đưa tiền đến khi đủ
		{
			int tienThem;
			std::cout << "Hay dua them: ";
			std::cin >> tienThem;

			q -= tienThem; // Cập nhật số tiền còn thiếu

			if (q > 0) // Nếu vẫn còn thiếu tiền
			{
				std::cout << "Ban con thieu: " << q << " vnd" << std::endl;
			}
			else // Khi khách đã đưa đủ hoặc dư
			{
				std::cout << "Cam on! Ban da thanh toan du." << std::endl;
				if (q < 0) // Nếu khách đưa dư
				{
					std::cout << "Tra khach: " << -q << " vnd" << std::endl;
				}
			}
		}
	}
	int t;
	std::cout << " " << endl;
	std::cout << "===================================================================== " << endl;
	std::cout << "Ban hay danh gia chung to tu 0 den 5 sao!! ";
	std::cin >> t;
	std::cout << "" << endl;
	std::cout << "===================================================================== " << endl;
	if (t <= 3)
	{
		std::cout << "xin loi vi trai nghiem khong tot cua ban :((" << endl;
		std::cout << "hay cho chung toi biet ban gap van de gi???" << endl;
		std::cin.ignore();
		string s;
		getline(cin, s);
	}
	else
	{
		std::cout << "rat vui khi duoc biet ban cam thay hai long ve dich vu nay!!! Cam on ban. " << endl;
	}
	std::cout << "-------------------------------------------------------------------------" << endl;
	std::cout << "Cam on vi danh gia cua ban!!!" << endl;
	system("cls");
}
void english()
{
	int discountCode;
	int x, y;
	float z = 0.0, totalPrice = 0.0;
	int quantity[10] = { 0 };

	std::cout << "                                   ----RESTAURANT MENU----" << endl;
	std::cout << "__________________________________________________________________________" << endl;
	std::cout << "1. Com tam______________________________1.6USD |  6. Soft drink___________0.4USD" << endl;
	std::cout << "2. Fried chicken rice___________________1.6USD |  7. Iced tea_____________0.2USD" << endl;
	std::cout << "3. Yangzhou fried rice _________________1.6USD |  8. Lemon tea____________0.28USD" << endl;
	std::cout << "4. Stir-fried beef rice_________________1.6USD |  9. Black tea____________0.4USD" << endl;
	std::cout << "5. Sweet and sour pork rice_____________1.6USD | 10. Bottled water________0.2USD" << endl;
	std::cout << "Please order by the number on the menu, ENTER 0 TO FINISH ORDERING" << endl;

	while (true) {
		std::cout << "Dish number: ";
		std::cin >> x;

		if (x == 0) {
			std::cout << "                       ORDER COMPLETED! PLEASE WAIT TO BE SERVED" << endl;
			break;
		}

		if (x < 0 || x > 10) {
			std::cout << "Invalid dish! Please choose again." << endl;
			continue;
		}

		// Gán giá tiền theo món
		if (x >= 1 && x <= 5) z = 1.6;
		else if (x == 6 || x == 9) z = 0.4;
		else if (x == 7 || x == 10) z = 0.2;
		else if (x == 8) z = 0.28;

		cout << "Quantity: ";
		cin >> y;

		quantity[x - 1] += y;
		float itemTotal = y * z;
		totalPrice += itemTotal;

		cout << "Price: " << itemTotal << " USD" << endl;
	}

	system("cls");
	std::cout << "                       ORDER COMPLETED! PLEASE WAIT TO BE SERVED" << endl;
	std::cout << "                               THIS IS YOUR INVOICE" << endl;
	std::cout << "  ------------------------------------------------------------------" << endl;

	string dishNames[10] = {
		"Com tam", "Fried chicken rice", "Yangzhou fried rice",
		"Stir-fried beef rice", "Sweet and sour pork rice", "Soft drink",
		"Iced tea", "Lemon tea", "Black tea", "Bottled water"
	};
	float prices[10] = { 1.6, 1.6, 1.6, 1.6, 1.6, 0.4, 0.2, 0.28, 0.4, 0.2 };

	float grandTotal = 0.0;
	for (int i = 0; i < 10; i++) {
		if (quantity[i] > 0) {
			float itemTotal = quantity[i] * prices[i];
			grandTotal += itemTotal;
			std::cout << "food/drink: " << dishNames[i] << endl;
			std::cout << "Qty/ Price: " << quantity[i] << "        " << itemTotal << " USD" << endl;
		}
	}

	std::cout << "______________________________________________" << endl;
	std::cout << "Your total bill is: " << grandTotal << " USD" << endl;
	std::cout << "______________________________________________" << endl;
	float finalAmount = grandTotal;

	if (grandTotal >= 8 && grandTotal < 20) {
		std::cout << "Your bill is over 200K! You get a 10% discount" << endl;
		finalAmount *= 0.9;
	}
	else if (grandTotal >= 20) {
		std::cout << "Your bill is over 500K! You get a 10% discount and a chance to win a random gift!" << endl;
		finalAmount *= 0.9;

		string gifts[10] = {
			"Phone case", "Headphones", "Helmet", "Cap", "Top-up card 20K",
			"Sunglasses", "Handkerchief", "Raincoat", "Keychain", "Stickers"
		};
		srand(time(0));
		int giftIndex = rand() % 10;

		char choice;
		std::cout << "=======================================================" << endl;
		std::cout << "Would you like to spin the lucky wheel? (Y/N): ";
		std::cin >> choice;
		if (choice == 'y' || choice == 'Y') {
			std::cout << "Congratulations! You won: " << gifts[giftIndex] << endl;
		}
		else {
			std::cout << "Too bad! You skipped the chance!" << endl;
		}
	}

	std::cout << "*****************************************" << endl;
	std::cout << "Enter discount code (if any): ";
	std::cin >> discountCode;

	// Áp dụng mã giảm giá
	bool hasDiscountCode = (discountCode == 123456 || discountCode == 190606 || discountCode == 192006);

	if (grandTotal < 8 && hasDiscountCode) {
		std::cout << "Valid discount code! You get a 5% discount" << endl;
		finalAmount *= 0.95;
	}
	else if (grandTotal < 8 && !hasDiscountCode) {
		std::cout << "Invalid code! No discount applied" << endl;
	}
	else if ((grandTotal >= 8 && grandTotal < 20) && hasDiscountCode) {
		std::cout << "Valid discount code! You get additional 5% discount" << endl;
		finalAmount = grandTotal * 0.85;
	}
	else if ((grandTotal >= 8 && grandTotal < 20) && !hasDiscountCode) {
		std::cout << "Invalid code! You only get 10% discount" << endl;
	}
	else if (grandTotal >= 20 && hasDiscountCode) {
		std::cout << "Valid discount code! You get additional 5% discount" << endl;
		finalAmount = grandTotal * 0.85;
	}
	else if (grandTotal >= 20 && !hasDiscountCode) {
		std::cout << "Invalid code! You only get 10% discount" << endl;
	}

	std::cout << "Final amount: " << finalAmount << " USD" << endl;

	float cash;
	std::cout << "Customer paid: ";
	cin >> cash;

	if (cash >= finalAmount) {
		std::cout << "Change: " << cash - finalAmount << " USD" << endl;
	}
	else {
		float deficit = finalAmount - cash;
		std::cout << "Insufficient payment! You still owe: " << deficit << " USD" << endl;
		while (deficit > 0) {
			float moreCash;
			std::cout << "Please pay additional: ";
			std::cin >> moreCash;
			deficit -= moreCash;
			if (deficit > 0) {
				std::cout << "You still owe: " << deficit << " USD" << endl;
			}
			else {
				std::cout << "Thank you! Payment completed." << endl;
				if (deficit < 0) {
					std::cout << "Change: " << -deficit << " USD" << endl;
				}
			}
		}
	}

	int rating;
	std::cout << "===================================================================== " << endl;
	std::cout << "Please rate us from 0 to 5 stars: ";
	std::cin >> rating;
	std::cout << "===================================================================== " << endl;

	if (rating <= 3) {
		std::cout << "Sorry for your unsatisfactory experience :(" << endl;
		std::cout << "Please tell us what went wrong: ";
		std::cin.ignore();
		string feedback;
		getline(cin, feedback);
	}
	else {
		std::cout << "We're glad you had a great experience! Thank you." << endl;
	}

	std::cout << "-------------------------------------------------------------------------" << endl;
	std::cout << "Thank you for your feedback!" << endl;
}
int main()
{
	char L;
	std::cout << "English(E) or Vietnamese(V) " << endl;
	cin >> L;
	system("cls");
	while (L != 'e' && L != 'E' && L != 'v' && L != 'V')
	{
		std::cout << "please choice your languge again!!" << endl;
		std::cout << "English(E) or Vietnamese(V)" << endl;
		std::cin >> L;
		system("cls");
	}
	if (L == 'E' || L == 'e')
	{
		std::cout << "you were choice English languge" << endl;
		english();
	}
	else if (L == 'V' || L == 'v')
	{
		std::cout << "ban da chon Tieng Viet" << endl;
		vietnamese();
	}
	system("pause");
}