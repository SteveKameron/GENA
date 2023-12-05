#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
#include "Header1.hpp"


int main() {
    srand(time(NULL));
    // �������� ��������� ���������
    std::vector<Genome> population(POPULATION_SIZE);
    // �������� ���� ������������� ���������
    for (int generation = 0; generation < MAX_GENERATIONS; ++generation) {
        // ���������� ����������������� ��� ������� ������
        for (Genome& genome : population) {
            genome.calculateFitness();
        }
        // ���������� ��������� �� �������� �����������������
        std::sort(population.begin(), population.end(), sortByFitness);

        // ������ ������� ������� �������� ���������
        std::cout << "Generation " << generation << ": Best solution - x = " << population[0].value
            << ", Fitness = " << population[0].fitness << std::endl;
        // �������� ���������� ������� �����������������
        if (population[0].fitness > TARGET_FITNESS) {
            std::cout << "Solution found in generation " << generation << ": x = " << population[0].value << std::endl;
            break;
        }

        // �������� ����� ���������
        std::vector<Genome> newPopulation(POPULATION_SIZE);

        // ����������� ������ ������ � ����� ���������
        for (int i = 0; i < POPULATION_SIZE / 2; ++i) {
            newPopulation[i] = population[i];
        }

        // ��������� �������� � ������� �����������
        for (int i = POPULATION_SIZE / 2; i < POPULATION_SIZE; ++i) {
            // ����� ���� ��������� ��������� �� ������� ���������
            int parent1Index = rand() % (POPULATION_SIZE / 2);
            int parent2Index = rand() % (POPULATION_SIZE / 2);

            // Crossingover
            newPopulation[i].value = (population[parent1Index].value + population[parent2Index].value) / 2;

            // Mutation
            mutate(newPopulation[i]);
        }

        // ������ ������ ��������� �����
        population = newPopulation;
    }

    return 0;
}
