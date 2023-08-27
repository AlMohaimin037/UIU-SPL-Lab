package Final.Problem02;

public class Main {
    public static void main(String[] args) {
        Human human1 = new Human("Jon", 70, "medium", "brave");
        Human human2 = new Human("Sa,", 100, "high", "not brave");
        CookieMonster coo = new CookieMonster(100);
        coo.scare(human1);
        coo.scare(human2);
        coo.eat();

        System.out.println("Coo Weight: "+coo.weight + " Scare Count" + coo.scareCount);
        ScaryMonster doggo = new ScaryMonster(500);
        doggo.eat();
        doggo.eat();
        System.out.println("Doggo Weight: "+doggo.weight + " Scare Count" + doggo.scareCount);
    }
}
