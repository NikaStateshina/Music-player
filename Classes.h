#pragma once
#include <string>

//����� ������������
class User {
private:
	string[24] Name;
	string[16] Password;
	unsigned int[11] phone_number;

public:
	
	//���������������� ������������
	User(_Name, _Password, _Phone_number) {
		Name = _Name;
		Password = _Password;
		Phone_number = _Phone_number;
	}

	//������� ������������
	~User(_Name, _Password, _Phone_number) {
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
	string[20] Song_name;
	string[20] Singer;
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
	bool Play_Song() {

	}

	//������� �����
	~Song(_Song_name, _Singer, _Album_name) {
	}

	//�����


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
	string[20] Album_name;
	string[20] Singer;
	
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

	//������� ����� �� �������

	//����� �� ��������

	//������������� ������
};

class Playlist {
private:
	string[20] Playlist_name;
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
		
	//������� ����� �� ��������� 

	//������������� ��������

	//����� �� ��������


};
