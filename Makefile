
# 匹配所有的*.cpp文件
SOURCE2=$(wildcard ./src/*.cpp)
# 把所有的*.cpp文件替换成*.o文件
SOURCE=$(patsubst %.cpp,%.o,$(SOURCE2))

# 开始编译
main:$(SOURCE)
	g++ $(SOURCE) -g -o ./out/main 

clean:
	@rm -rfv $(SOURCE)