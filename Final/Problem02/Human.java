package Final.Problem02;

public class Human implements Animal {
    String name;
    int weight;
    String intelligence;
    String bravery;

    public Human(String name, int weight, String intelligence, String bravery) {
        this.name = name;
        this.weight = weight;
        this.intelligence = intelligence;
        this.bravery = bravery;
    }

    @Override
    public boolean isIntelligent() {
        return intelligence.equalsIgnoreCase("high");
    }

    @Override
    public double expectedHeight() {
        double height = weight / 2.0;
        return height;
    }
}
