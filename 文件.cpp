#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <vector>
using namespace std;

//洗牌算法
void fisher_yates_shuffle(std::vector<int>& numbers) {
    std::mt19937 rng(std::random_device{}());
    int n = numbers.size();
    for (int i = n - 1; i > 0; --i) {
        std::uniform_int_distribution<int> dist(0, i);
        int j = dist(rng);
        std::swap(numbers[i], numbers[j]);
    }
}

int main() {
    ofstream fout;
    fout.open("mine.mcfunction");

    std::vector<int> numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11, 12, 13, 14, 15, 16, 17, 8, 19, 20, 21, 22, 23, 24, 25, 26, 27 };
    fisher_yates_shuffle(numbers);

    int arry[26];

    int control = 0;
    int ore = 0;
    string blocks;

 //进行循环生成

    for (int i = 0; i < 26; i++) {
        switch (arry[i]) {
        case 1:
            blocks = "minecraft:white_wool";
            control = 1;
            break;
        case 2:
            blocks = "minecraft:white_concrete";
            control = 2;
            break;
        case 3:
            blocks = "minecraft:bookshelf";
            control = 3;
            break;
        case 4:
            blocks = "minecraft:barrel";
            control = 4;
            break;
        case 5:
            blocks = "minecraft:enchanting_table";
            control = 5;
            break;
        case 6:
            blocks = "minecraft:obsidian";
            control = 6;
            break;
        case 7:
            blocks = "minecraft:emerald_ore";
            control = 7;
            break;
        case 8:
            blocks = "minecraft:gold_ore";
            control = 8;
            break;
        case 9:
            blocks = "minecraft:redstone_ore";
            control = 9;
            break;
        case 10:
            blocks = "minecraft:oak_leaves";
            control = 10;
            break;
        case 11:
            blocks = "minecraft:stone";
            control = 11;
            break;
        case 12:
            blocks = "minecraft:gravel";
            control = 12;
            break;
        case 13:
            blocks = "minecraft:anvil";
            control = 13;
            break;
        case 14:
            blocks = "minecraft:crafting_table";
            control = 14;
            break;
        case 15:
            blocks = "minecraft:furnace";
            control = 15;
            break;
        case 16:
            blocks = "minecraft:lapis_ore";
            control = 16;
            break;
        case 17:
            blocks = "minecraft:diamond_ore";
            control = 17;
            break;
        case 18:
            blocks = "minecraft:ancient_debris";
            control = 18;
            break;
        case 19:
            blocks = "minecraft:copper_ore";
            control = 19;
            break;
        case 20:
            blocks = "minecraft:iron_ore";
            control = 20;
            break;
        case 21:
            blocks = "minecraft:coal_ore";
            control = 21;
            break;
        case 22:
            blocks = "minecraft:oak_log";
            control = 22;
            break;
        case 23:
            blocks = "minecraft:glass";
            control = 23;
            break;
        case 24:
            blocks = "minecraft:hay_block";
            control = 24;
            break;
        case 25:
            blocks = "minecraft:melon";
            control = 25;
            break;
        case 26:
            blocks = "minecraft:honey_block";
            control = 26;
            break;
        default:
            blocks = "minecraft:slime_block";
            control = 27;
            break;
        }
        fout << "spreadplayers 8 8 1 16 under -51 false @e[type=minecraft:armor_stand]\n";
        fout << "execute at @e[type=minecraft:armor_stand] run setblock ~ ~ ~ " << blocks << endl;
        fout << endl;
        std::cout << "已完成次书写\t" << "此次随机变量为" << control << "\t" << "方块为" << blocks << endl;
    }

    fout.close();
    std::cout << "已完成" << endl;

    return 0;
}