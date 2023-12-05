#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
#include "Header1.hpp"
#include <fstream>

int Coef[11];

int main(int argc,char* agrv[]) {
    // Working with file
    if (argc == 1) {
        std::cout << "Error" << std::endl;
        return 1;
    }
    std::ifstream file;
    file.open(agrv[1]);
    if (!file.is_open()) {
        std::cout << "Failed to open file" << std::endl;
        return 1;
    }
    // Reading from file
    for (int i = 0; i < 11; i++) {
        file >> Coef[i];
    }
    srand(time(NULL));
    // Start population creation
    std::vector<Genome> population(POPULATION_SIZE);
    // Main cycle of Genetic Algorythm
    for (int generation = 0; generation < MAX_GENERATIONS; ++generation) {
        // Fitnes Calculation
        for (Genome& genome : population) {
            genome.calculateFitness();
        }
        // Population fitness sorting
        std::sort(population.begin(), population.end(), sortByFitness);

        // Print current generation
        std::cout << "Generation " << generation << ": Best solution - x = " << population[0].value
            << ", Fitness = " << population[0].fitness << std::endl;
        // Target fitness check
        if (population[0].fitness > TARGET_FITNESS) {
            std::cout << "Solution found in generation " << generation << ": x = " << population[0].value << std::endl;
            break;
        
        // New population create
        std::vector<Genome> newPopulation(POPULATION_SIZE);

        // Copying best individuals to New population
        for (int i = 0; i < POPULATION_SIZE / 2; ++i) {
            newPopulation[i] = population[i];
        }

        // Parent generation with Crossingover and Mutation
        for (int i = POPULATION_SIZE / 2; i < POPULATION_SIZE; ++i) {
            // Выбор двух случайных родителей из текущей популяции
            int parent1Index = rand() % (POPULATION_SIZE / 2);
            int parent2Index = rand() % (POPULATION_SIZE / 2);

            // Crossingover
            newPopulation[i].value = (population[parent1Index].value + population[parent2Index].value) / 2;

            // Mutation
            mutate(newPopulation[i]);
        }

        // Population replacing
        population = newPopulation;
    }

    return 0;
}
