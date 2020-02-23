#include <QString>
#include <QDebug>

void show(QString tmp) {
	qDebug() << tmp;
}

int main(int argc, char* argv[]) {
	for (int i=0; i<10; i++) {
		show(QString::number(i));
	}
}
