#include<iostream>
#include<map>
#include<string>

using namespace std;
//使用模板类型定义，使用更方便
typedef map<int, string> MAP_INT_STRING;

int main(){
    map<int, string> mymap;
    // MAP_INT_STRING mymap;
    //使用索引符号赋值（数组方式插入）
    mymap[11] = "hou";
    mymap[22] = "jia";
    mymap[22] = "song";
    //insert函数插入
    mymap.insert(pair<int, string>(8,"xxx"));
    //valuetype插入（不太明白）

    //输出的时候可以直接号像数组一样访问
    cout<<mymap[8]<<endl;
    //输出大小
    cout<<"mymap's size:"<<mymap.size()<<endl;
    //使用指针前项遍历
    for(map<int, string>::iterator ii = mymap.begin(); ii != mymap.end(); ii++){
        cout<<ii->first<<" "<<ii->second<<endl;
    }
    //使用指针反响遍历,后面为什么是++,for循环作用域了解一下。
    for(map<int, string>::reverse_iterator rii = mymap.rbegin(); rii != mymap.rend(); rii++){
        cout<<"反向遍历："<<endl;
        cout<<rii->first<<" "<<rii->second<<endl;
    }

    map<int, string>::iterator find_iter;
    find_iter = mymap.find(9);
    if(find_iter == mymap.end()){
        cout<<"没找到"<<endl;
    }
    else{
        cout<<"value:"<<endl;
        cout<<find_iter->second<<endl;
    }
}
