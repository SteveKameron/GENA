
extern const int POPULATION_SIZE = 10;
extern const int MAX_GENERATIONS = 1000000;
extern const double MUTATION_RATE = 0.1;
extern const double TARGET_FITNESS = 0.999;

// �������, ��� ������� ���� ������
double targetFunction(double x) {
    return 2 * pow(x, 7) - 163 * pow(x, 6) + 3702 * pow(x, 5) - 36056 * pow(x, 4) + 167128 * pow(x, 3) - 344133 * x * x + 174528 * x + 196560;
    //return x - 2000;
}
struct Genome {
    double value; // ����� (������������ ����� �������� x)
    double fitness; // ����������������� (�������� � �������)

    // ����������� ��� �������� ���������� ������
    Genome() : value((rand() % 20000 - 10000) / 100.0), fitness(0.0) {}

    // ���������� �����������������
    void calculateFitness() {
        fitness = 1 / (1 + fabs(targetFunction(value)));
    }
};

// ������� ��� ���������� ������� �� �������� �� �����������������
bool sortByFitness(const Genome& a, const Genome& b) {
    return a.fitness > b.fitness;
}

// ������� ��� ���������� ������� ������ � ������������ ������������
void mutate(Genome& genome) {
    if (rand() % 100 < MUTATION_RATE * 100) {
        genome.value += (rand() % 200 - 100) / 100.0;
    }
}


