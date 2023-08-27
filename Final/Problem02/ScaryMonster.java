package Final.Problem02;

public class ScaryMonster extends Monster {
    public ScaryMonster(int weight) {
        super(weight);
    }

    @Override
    void eat() {
        super.eat();
    }

    @Override
    void scare(Human human) {
        if(!human.isIntelligent()) {
            System.out.println(human.name+"AHHHH!");
            scareCount++;
        }
    }
}
