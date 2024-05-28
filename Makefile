build:
	# bison -d sql.y
	flex sql.l
	bison sql.y -d
	gcc  sql.tab.c `pkg-config --cflags --libs gtk+-3.0`
