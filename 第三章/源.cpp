#include<iostream>
using namespace std;


int main(){
    const int days = 24;
    const int hours = 60;
    const int minutes = 60;
    long long seconds;
    cout << "请用整数输入秒数 \n";
    cin >> seconds;
    int day, hour, minute, second;
    second = seconds % minutes;
    minute = seconds / minutes % hours;
    hour = seconds / minutes / hours % days;
    day = seconds / minutes / hours / days;
    /*minute = seconds / 60;
    second = seconds - 60 * minute;

    hour = minute / 60;
    minute = minute - 60 * hour;

    day = hour / 24;
    hour = hour - 24 * day;*/

    cout << seconds << " seconds=" << day << " days," << hour << " hours," << minute << " minutes," << second << " seconds" << endl;

     
    return 0;
}