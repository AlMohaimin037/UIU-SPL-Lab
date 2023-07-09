package zoo;

public class Bird extends Animal{
    private float wingspan;

    public Bird(String name, int age, float wingspan) {
        super(name, age);
        this.wingspan = wingspan;
    }

    public float getWingspan() {
        return wingspan;
    }

    public void setWingspan(float wingspan) {
        this.wingspan = wingspan;
    }

    public void sleep(int hour){
        System.out.println("The bird is sleeping for "+hour+" hour");
    }
}
