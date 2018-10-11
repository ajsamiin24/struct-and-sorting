
#include <conio.h>


struct movies_t {
char title [50];
int year;
}mine, yours;
void printmovie (movies_t movie);
int main(){
char buffer [50];
strcpy (mine.title,"Finding Nemo");
mine.year=2003;
cout<<"Masukan Judul Film Favorit : ";
cin.getline (yours.title,50);
cout<<"Masukan Tahun : ";
cin.getline (buffer,50);
yours.year= atoi (buffer);
cout<<"Judul Film Favorit yang ada : \n";
printmovie (mine);
cout<<"Judul Film Favorit Kamu adalah : \n";
printmovie (yours);
return 0;
}
void printmovie (movies_t movie);
{
cout<<movie.title;
cout<<"("<<movie.year<< ")"\n;
}
