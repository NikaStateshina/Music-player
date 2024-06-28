#pragma once
#include <string>

//Класс пользователя
class User {
private:
	string[24] Name;
	string[16] Password;
	unsigned int[11] phone_number;

public:
	
	//Зарегестрировать пользователя
	User(_Name, _Password, _Phone_number) {
		Name = _Name;
		Password = _Password;
		Phone_number = _Phone_number;
	}

	//Удалить пользователя
	~User(_Name, _Password, _Phone_number) {
	}

	//Найти пользователя по имени
	int Find_Person(_Name) {
		//Если найден такой пользователь
		return 0;
		//Если не найден
		return 1;
	}
};

class Song {
private:
	string[20] Song_name;
	string[20] Singer;
	float Song_time;
	int Hash;              //пускай по индивидуальному хешу хранятся песни
	Album* Album_name;

public:

	//Создает хеш для песни
	int Hash_song(_Song_name, _Singer, _Album_name) {
		//Сложит например все буковки названия песни, альбома и исполнителя
		// и поделит на что-нибудь, вернет хеш
		return Hash;
	}

	//Создать песню
	Song(_Song_name, _Singer, _Album_name) {
		Song_name = _Song_name;
		Singer = _Singer; 
		Album_name = _Album_name;
		Hash = Hash_song(_Song_name, _Singer, _Album_name);
		//И заносит куда-нибудь в базу данных
	}

	//Воспроизвести песню
	bool Play_Song() {

	}

	//Удалить песню
	~Song(_Song_name, _Singer, _Album_name) {
	}

	//Пауза


	//Найти по названию
	int Find_Song(Song_name) {
		//Если найдена
		return 0;
		//Если не найдена
		return 1;
	}
};

class Album{
private:
	int* album
	string[20] Album_name;
	string[20] Singer;
	
public:

	//Создать альбом
	Album(_Album_name, _Singer) {
		Album_name = _Album_name;
		Singer = _Singer;
		album = new int[N];
	}

	//Удалить альбом
	~Album() {
		delete[] album;
	}

	//Добавить песню в альбом

	//Удалить песню из альбома

	//Найти по названию

	//Воспроизвести альбом
};

class Playlist {
private:
	string[20] Playlist_name;
	int* playlist;

public:

	//Создать плейлист
	Playlist(Playlist_name) {
		Playlist_name = _Playlist_name;
		playlist = new int[N];
	}

	//Удалить плейлист
	~Playlist() {
		delete[] playlist;
	}

	//Добавить песню в плейлист
		
	//Удалить песню из плейлиста 

	//Воспроизвести плейлист

	//Найти по названию


};
