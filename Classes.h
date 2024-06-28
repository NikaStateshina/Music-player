#pragma once
#include <string>

//����� ������������
class User {
private:
	string Name;
	string Password;
	unsigned int phone_number;

public:
	
	//���������������� ������������
	User(_Name, _Password, _Phone_number) {
		Name = _Name;
		Password = _Password;
		Phone_number = _Phone_number;
	}

	//������� ������������
	~User(_Name, _Password, _Phone_number) {
		//������ ������������ �� ������ � ������
	}

	//����� ������������ �� �����
	int Find_Person(_Name) {
		//���� ������ ����� ������������
		return 0;
		//���� �� ������
		return 1;
	}
};

class Song {
private:
	string Song_name;
	string Singer;
	float Song_time;
	int Hash;              //������ �� ��������������� ���� �������� �����
	Album* Album_name;

public:

	//������� ��� ��� �����
	int Hash_song(_Song_name, _Singer, _Album_name) {
		//������ �������� ��� ������� �������� �����, ������� � �����������
		// � ������� �� ���-������, ������ ���
		return Hash;
	}

	//������� �����
	Song(_Song_name, _Singer, _Album_name) {
		Song_name = _Song_name;
		Singer = _Singer; 
		Album_name = _Album_name;
		Hash = Hash_song(_Song_name, _Singer, _Album_name);
		//� ������� ����-������ � ���� ������
	}

	//������������� �����
	bool Play_Song(Hash) {
		//hash ������, ��� �������� ������������ 
		//����� ���� �� �������� � ��������� ������ ������ ��� � �������� ������ �����

		//���� ������ ������:      
		return true
	    //�� ��������� ���� false
	}

	//������� �����
	~Song(_Song_name, _Singer, _Album_name) {
		//������� ��� ���������, �������� ��� � ������ �� ���� �����
	}

	//�����
	bool Stop_Song(Hash) {
		//�� ���� ������ ������ �����, ��������� ���������������
		//���� ������ �� ������:      
		return false
	}

	//����� �� ��������
	int Find_Song(Song_name) {
		//���� �������
		return 0;
		//���� �� �������
		return 1;
	}
};

class Album{
private:
	int* album
	string Album_name;
	string Singer;
	
public:

	//������� ������
	Album(_Album_name, _Singer) {
		Album_name = _Album_name;
		Singer = _Singer;
		album = new int[N];
	}

	//������� ������
	~Album() {
		delete[] album;
	}

	//�������� ����� � ������
	int Add_To_Album(int* album, _Song_name) {
		//��������� ����� � ������ ������� �������
		//��� �������� ����������
		return 0
		//��� ������ ����������
		return 1
	}

	//������� ����� �� �������
	int Del_from_Album(int* album, _Song_name) {
		//������� ����� �� ������� ������� �������
		//��� �������� ��������
		return 0
		//��� ������ ��������
		return 1
	}

	//����� �� ��������
	int Find_Album(_Album_name) {
		//���� ������
		return 0;
		//���� �� ������
		return 1;
	}

	//������������� ������
	bool Play_Album(Hash) {
		//Hash ������ ����� � ���� �������
		//���� ������ ������:      
		return true
	    //�� ��������� ���� false
	}
};

class Playlist {
private:
	string Playlist_name;
	int* playlist;

public:

	//������� ��������
	Playlist(Playlist_name) {
		Playlist_name = _Playlist_name;
		playlist = new int[N];
	}

	//������� ��������
	~Playlist() {
		delete[] playlist;
	}

	//�������� ����� � ��������
	int Add_To_Playlist(int* playlist, _Song_name) {
		//��������� ����� � ������ ������� ���������
		//��� �������� ����������
		return 0
		//��� ������ ����������
		return 1
	}
		
	//������� ����� �� ��������� 
	int Del_from_Playlist(int* playlist, _Song_name) {
		//������� ����� �� ������� ������� ���������
		//��� �������� ��������
		return 0
		//��� ������ ��������
		return 1
	}

	//������������� ��������
	bool Play_Playlist(Hash) {
		//Hash ������ ����� � ���� ���������
		//���� ������ ������:      
		return true
		//�� ��������� ���� false
	}

	//����� �� ��������
	int Find_Playlist(Playlist_name) {
		//���� ������
		return 0;
		//���� �� ������
		return 1;
	}
};
