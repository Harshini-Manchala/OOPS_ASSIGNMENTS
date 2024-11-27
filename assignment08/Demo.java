abstract class figure{
	double r;
	double a;
	double v;
	protected static final double pi=3.1428;
	 abstract void calcArea();
	 abstract void calcVolume();
	 abstract void dispArea();
	 abstract void dispVolume();
};
class cone extends figure {
	double h;
	double s;
	cone(int h,int s,int r){
		this.h=h;
		this.s=s;
		this.r=r;
	}
	
    void calcArea(){
		 a =(pi*r*s)+(pi*r*r);
	}
    void calcVolume() {
     v = (pi*r*h)/3;
    }
    void dispArea() {
    	System.out.println(a);
    }
    void dispVolume() {
    	System.out.println(v);
    }
    
};
class sphere extends figure {
	
    void calcArea(){
		 a=(4*pi*r*r);
	}
    void calcVolume() {
        v=(4*pi*r*r*r)/3;
    }
    void dispArea() {
    	System.out.println(a);
    }
    void dispVolume() {
    	System.out.println(v);
    }
    
}
class Cylinder extends figure {
	double h;
	Cylinder(int h){
		this.h=h;
	}
    void calcArea(){
		 a =(2*pi*r*r)+(2*pi*r*h);
	}
    void calcVolume() {
     v =(pi*r*r*h)/3;
    }
    void dispArea() {
    	System.out.println(a);
    }
    void dispVolume() {
    	System.out.println(v);
    }  
};
public class Demo {
public static void main(String args[]) {
	  cone c = new cone(10,20,12);
	  c.calcArea();
	  c.calcVolume();
	  c.dispArea();
	  c.dispVolume();
	  
  }
}