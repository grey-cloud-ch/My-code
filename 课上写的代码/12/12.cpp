#include<bits/stdc++.h>
using namespace std;

struct Tele {
    char date[11];
    char caller[12];
    char callee[13];
    char start[9];
    int duration;
    float cost;
} records[1000];

float calculate_cost(Tele record) {
    int minutes = record.duration / 60;
    if (record.duration % 60 > 0) {
        minutes++;
    }
    
    float cost = 0.0;
    
    if (record.callee[0] == '0') {
        if (record.callee[1] == '0') {
            cost = minutes * 1.00;
        } else {
            cost = minutes * 0.60;
        }
    } else {
        if (minutes <= 3) {
            cost = 0.20;
        } else {
            cost = 0.20 + (minutes - 3) * 0.10;
        }
    }
    
    return cost;
}
bool cmp(const Tele &a, const Tele &b) {
    return a.cost > b.cost;
}
void print_record(const Tele &record, int index) {
    printf("%-4d %-12s %-13s %-14s %-10s %-10d %-10.2f\n", 
           index, record.date, record.caller, record.callee, 
           record.start, record.duration, record.cost);
}
int main() {
    int count = 0;
    FILE *fp;
    fp = fopen("in.txt", "r");
    if (fp == NULL) {
        printf("打开文件失败！\n");
        return 1;
    }
    while (count < 1000 && 
           fscanf(fp, "%10s %11s %12s %8s %d", 
                  records[count].date, 
                  records[count].caller, 
                  records[count].callee, 
                  records[count].start, 
                  &records[count].duration) == 5) {
        count++;
    }
    fclose(fp);
    for (int i = 0; i < count; i++) {
        records[i].cost = calculate_cost(records[i]);
    }
    sort(records, records + count, cmp);
    for (int i = 0; i < count; i++) {
        print_record(records[i], i + 1);
    }
    float total_cost = 0.0;
    for (int i = 0; i < count; i++) {
        total_cost += records[i].cost;
    }
    return 0;
}
