#pragma once

namespace Protoko³yProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ sendButton;
	private: System::Windows::Forms::ComboBox^ portComboBox;
	private: System::Windows::Forms::Button^ connectButton;
	private: System::Windows::Forms::TextBox^ commandTextBox;
	private: System::Windows::Forms::TextBox^ recivedTextBox;
	private: System::Windows::Forms::Button^ disconnectButton;
	private: System::Windows::Forms::Button^ button1;

	protected:

	protected:







	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->sendButton = (gcnew System::Windows::Forms::Button());
			this->portComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->connectButton = (gcnew System::Windows::Forms::Button());
			this->commandTextBox = (gcnew System::Windows::Forms::TextBox());
			this->recivedTextBox = (gcnew System::Windows::Forms::TextBox());
			this->disconnectButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// sendButton
			// 
			this->sendButton->Location = System::Drawing::Point(299, 158);
			this->sendButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sendButton->Name = L"sendButton";
			this->sendButton->Size = System::Drawing::Size(75, 25);
			this->sendButton->TabIndex = 0;
			this->sendButton->Text = L"Send";
			this->sendButton->UseVisualStyleBackColor = true;
			this->sendButton->Click += gcnew System::EventHandler(this, &MyForm::sendButton_Click);
			// 
			// portComboBox
			// 
			this->portComboBox->FormattingEnabled = true;
			this->portComboBox->Location = System::Drawing::Point(101, 111);
			this->portComboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->portComboBox->Name = L"portComboBox";
			this->portComboBox->Size = System::Drawing::Size(177, 24);
			this->portComboBox->TabIndex = 1;
			// 
			// connectButton
			// 
			this->connectButton->Location = System::Drawing::Point(299, 112);
			this->connectButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->connectButton->Name = L"connectButton";
			this->connectButton->Size = System::Drawing::Size(75, 23);
			this->connectButton->TabIndex = 2;
			this->connectButton->Text = L"Connect";
			this->connectButton->UseVisualStyleBackColor = true;
			this->connectButton->Click += gcnew System::EventHandler(this, &MyForm::connectButton_Click);
			// 
			// commandTextBox
			// 
			this->commandTextBox->Location = System::Drawing::Point(101, 161);
			this->commandTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->commandTextBox->Name = L"commandTextBox";
			this->commandTextBox->Size = System::Drawing::Size(177, 22);
			this->commandTextBox->TabIndex = 3;
			// 
			// recivedTextBox
			// 
			this->recivedTextBox->Location = System::Drawing::Point(101, 228);
			this->recivedTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->recivedTextBox->Multiline = true;
			this->recivedTextBox->Name = L"recivedTextBox";
			this->recivedTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->recivedTextBox->Size = System::Drawing::Size(271, 152);
			this->recivedTextBox->TabIndex = 4;
			// 
			// disconnectButton
			// 
			this->disconnectButton->Location = System::Drawing::Point(299, 430);
			this->disconnectButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->disconnectButton->Name = L"disconnectButton";
			this->disconnectButton->Size = System::Drawing::Size(108, 23);
			this->disconnectButton->TabIndex = 5;
			this->disconnectButton->Text = L"Disconnect";
			this->disconnectButton->UseVisualStyleBackColor = true;
			this->disconnectButton->Click += gcnew System::EventHandler(this, &MyForm::disconnectButton_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(407, 158);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 25);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Output On/Off";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::outputOnOff_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1605, 817);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->disconnectButton);
			this->Controls->Add(this->recivedTextBox);
			this->Controls->Add(this->commandTextBox);
			this->Controls->Add(this->connectButton);
			this->Controls->Add(this->portComboBox);
			this->Controls->Add(this->sendButton);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: System::IO::Ports::SerialPort^ serialPort;
		private: double voltage = 0.1;
		private:  bool isOn = false;
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		portComboBox->Items->Clear();
		array<String^>^ ports = System::IO::Ports::SerialPort::GetPortNames();
		for each(String ^ port in ports) {
			portComboBox->Items->Add(port);
		}
		if (portComboBox->Items->Count > 0)
			portComboBox->SelectedIndex = 0;
	}
	private: System::Void connectButton_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			serialPort = gcnew System::IO::Ports::SerialPort();
			serialPort->PortName = portComboBox->SelectedItem->ToString();

			//Konfiguracje
			serialPort->BaudRate = 9600;
			serialPort->DataBits = 8;
			serialPort->Parity = System::IO::Ports::Parity::None;
			serialPort->StopBits = System::IO::Ports::StopBits::One;

			serialPort->Open();
			serialPort->DtrEnable = true;
			serialPort->RtsEnable = true;
			serialPort->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(
				this, &MyForm::serialPort_DataReceived);
			MessageBox::Show("Connected to " + serialPort->PortName);
			connectButton->Enabled = false;
			disconnectButton->Enabled = true;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
}
	   private: System::Void sendButton_Click(System::Object^ sender, System::EventArgs^ e) {
		   
		   if (serialPort == nullptr || !serialPort->IsOpen) {
			   MessageBox::Show("Not connected");
			   return;
		   }

		   
			//////////////////////////KOMENDY NA TESTY
			///SET:001,VS:15.00,IS:0.100
			//OUTPUT1 / OUTPUT0
		   
		   try {
			   
				voltage += 0.1;

			   // tworzenie komendy
			   String^ command = String::Format(
				   "SET:001,VS:{0:00.00},IS:0.100/n",
				   voltage
			   );

			   serialPort->Write(command);

			   recivedTextBox->AppendText("Send: " + command + Environment::NewLine);
		   }
		   catch(Exception^ ex){
			   MessageBox::Show("Errot: " + ex->Message);
		   }
	   }
	private: System::Void serialPort_DataReceived(System::Object^ sender,
			System::IO::Ports::SerialDataReceivedEventArgs^ e) {
		String^ data = serialPort->ReadExisting();
		this->Invoke(gcnew Action<String^>(this, &MyForm::UpdateTextBox), data);
	}

	private: System::Void UpdateTextBox(String^ data) {
		recivedTextBox->AppendText("Received: " + data);
	}

	private: System::Void disconnectButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (serialPort != nullptr && serialPort->IsOpen) {
			serialPort->Close();
			MessageBox::Show("Disconnected!");
			connectButton->Enabled = true;
			disconnectButton->Enabled = false;
	}
}
private: System::Void outputOnOff_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (serialPort == nullptr || !serialPort->IsOpen) {
		MessageBox::Show("Not connected");
		return;
	}
	if (isOn == false) 
	{
		isOn = true;
	}
	else
	{
		isOn = false;
	}
	
	try {


		// On/Off commands
		String^ onCommand = String::Format(
			"OUTPUT1/n"
		);

		String^ offCommand = String::Format(
			"OUTPUT0/n"
		);

		if (isOn == true)
		{
			serialPort->Write(onCommand);

			recivedTextBox->AppendText("Send: " + onCommand + Environment::NewLine);
		}

		else
		{
			serialPort->Write(offCommand);

			recivedTextBox->AppendText("Send: " + offCommand + Environment::NewLine);
		}
		
	}
	catch (Exception^ ex) {
		MessageBox::Show("Errot: " + ex->Message);
	}
}
};

}
