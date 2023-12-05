extern const int POPULATION_SIZE = 3;
extern const int MAX_GENERATIONS = 1000000;
extern const double MUTATION_RATE = 0.1;
extern const double TARGET_FITNESS = 0.9999999;
extern int Coef[11];
// For what function we search root
double targetFunction(double x) {
    //return 2 * pow(x, 7) - 163 * pow(x, 6) + 3702 * pow(x, 5) - 36056 * pow(x, 4) + 167128 * pow(x, 3) - 344133 * x * x + 174528 * x + 196560;
    return x - 2000;
    //return Coef[0] * pow(x, 10) + Coef[1] * pow(x, 9) + Coef[2] * pow(x, 8) + Coef[3] * pow(x, 7) + Coef[4] * pow(x, 6) + Coef[5] * pow(x, 5) + Coef[6] * pow(x, 4) + Coef[7] * pow(x, 3) + Coef[8] * pow(x, 2) + Coef[9] * pow(x, 1) + Coef[10];
    //return (x - 52) * (x - 12) * (x - 7) * (x - 5) * (x - 3) * (x - 3) * (2 * x + 1);
}
struct Genome {
    double value; // √еном (представл€ет собой значение x)
    double fitness; // ѕриспособленность (близость к решению)

    // Constructor to create new Genom
    Genome() : value((rand() % 20000 - 10000) / 100.0), fitness(0.0) {}

    // Fitness Calculating
    void calculateFitness() {
        fitness = 1 / (1 + fabs(targetFunction(value)));
    }
};

// Genom.fitness Sorting function
bool sortByFitness(const Genome& a, const Genome& b) {
    return a.fitness > b.fitness;
}

// Mutation function
void mutate(Genome& genome) {
    if (rand() % 100 < MUTATION_RATE * 100) {
        genome.value += (rand() % 200 - 100) / 100.0;
    }
}


