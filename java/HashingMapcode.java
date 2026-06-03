import java.util.LinkedList;

public class HashingMapcode  {
    static class HashMap<K,V> {
       public class Node{
        K key;
        V value;

        public Node(K key, V value){
            this.key = key;
            this.value = value;
        }
      }
       private int n;
       private int N;
       private LinkedList<Node> buckets[];
        @SuppressWarnings("unchecked")
        public HashMap() {
            this.N = 4;
            this.buckets = new LinkedList[4];
            for(int i=0;i<4;i++){
                this.buckets[i] = new LinkedList<>();
            }
        }
       private int hashFunction(K key){
          int bi = key.hashCode();
          return Math.abs(bi) % N;
       }
       private int searchInLL(K key, int bi){
         LinkedList<Node> ll = buckets[bi];
         for(int i=0;i<ll.size();i++){
            if(ll.get(i).key == key){
                return i;
            }
         }
         return -1;
       }
       private void rehash() {
        
       }
       public void put( K key, V value){
        int bi = hashFunction(key);
        int di = searchInLL(key,bi);

        if(di==-1){
            buckets[bi].add(new Node(key,value));
            n++;
        }
        else{
            Node data = buckets[bi].get(di);
            data.value = value;
        }
        double lamda = (double)n/N;
        if(lamda>2.0){

        }
       }
        
    }
}
