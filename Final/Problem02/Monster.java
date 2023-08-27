package Final.Problem02;

public abstract  class Monster {
    int weight;

    public Monster(int weight) {
        this.weight = weight;
    }

    int scareCount = 0;
    void eat() {
        weight++;
    }

    abstract void scare(Human human);
}
