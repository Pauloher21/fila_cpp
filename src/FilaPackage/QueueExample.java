package FilaPackage;

import java.util.LinkedList;
import java.util.Queue;

public class QueueExample {
	public static void main(String[] args) {
		Queue<String> waitingQueue= new LinkedList<>();
		waitingQueue.add("Matheus");
		waitingQueue.add("Marcos");
		waitingQueue.add("Lucas");
		waitingQueue.add("Joao");
		waitingQueue.add("Paulo");
		
		System.out.println("Fila:"+waitingQueue);
		
		String name=waitingQueue.remove();
		
		System.out.println("Fila:"+waitingQueue);
		
		waitingQueue.add("ana");
		System.out.println("Fila:"+waitingQueue);
		
	}

}
