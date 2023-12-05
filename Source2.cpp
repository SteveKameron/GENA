#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
#include "Header1.hpp"


int main() {
    srand(time(NULL));
    // Создание начальной популяции
    std::vector<Genome> population(POPULATION_SIZE);
    // Основной цикл генетического алгоритма
    for (int generation = 0; generation < MAX_GENERATIONS; ++generation) {
        // Вычисление приспособленности для каждого генома
        for (Genome& genome : population) {
            genome.calculateFitness();
        }
        // Сортировка популяции по убыванию приспособленности
        std::sort(population.begin(), population.end(), sortByFitness);

        // Печать лучшего решения текущего поколения
        std::cout << "Generation " << generation << ": Best solution - x = " << population[0].value
            << ", Fitness = " << population[0].fitness << std::endl;
        // Проверка достижения целевой приспособленности
        if (population[0].fitness > TARGET_FITNESS) {
            std::cout << "Solution found in generation " << generation << ": x = " << population[0].value << std::endl;
            break;
        }

        // Создание новой популяции
        std::vector<Genome> newPopulation(POPULATION_SIZE);

        // Копирование лучших особей в новую популяцию
        for (int i = 0; i < POPULATION_SIZE / 2; ++i) {
            newPopulation[i] = population[i];
        }

        // Генерация потомков с помощью скрещивания
        for (int i = POPULATION_SIZE / 2; i < POPULATION_SIZE; ++i) {
            // Выбор двух случайных родителей из текущей популяции
            int parent1Index = rand() % (POPULATION_SIZE / 2);
            int parent2Index = rand() % (POPULATION_SIZE / 2);

            // Crossingover
            newPopulation[i].value = (population[parent1Index].value + population[parent2Index].value) / 2;

            // Mutation
            mutate(newPopulation[i]);
        }

        // Замена старой популяции новой
        population = newPopulation;
    }

    return 0;
}
