package zoo;

public class Reptile extends Animal{
    private String scaleColor;

    public Reptile(String name, int age, String scaleColor) {
        super(name, age);
        this.scaleColor = scaleColor;
    }

    public String getScaleColor() {
        return scaleColor;
    }

    public void setScaleColor(String scaleColor) {
        this.scaleColor = scaleColor;
    }

    public void crawl(){
        System.out.println("The reptile is crawling");
    }
}
