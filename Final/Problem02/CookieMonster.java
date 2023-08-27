package Final.Problem02;

public class CookieMonster extends Monster {
    public CookieMonster(int weight) {
        super(weight);
    }

    @Override
    void eat() {
        super.eat();
    }

    @Override
    void scare(Human human) {
        if(human.bravery.equalsIgnoreCase("not brave")) {
            System.out.println("AHHHHH!");
            scareCount++;
        }

    }
}
