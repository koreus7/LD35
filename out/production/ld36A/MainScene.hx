import com.haxepunk.Scene;
import com.haxepunk.HXP;

class MainScene extends BaseWorld
{
	public override function begin()
	{
		P5.fill(0xffffff, 1.0);
		P5.noStroke();
		addGraphic( P5.rect(HXP.width/2, HXP.height/2,HXP.width, HXP.height), Layers.back);
		var runner = new Runner();
		runner.layer = Layers.top;
		this.add(runner);
	}
}