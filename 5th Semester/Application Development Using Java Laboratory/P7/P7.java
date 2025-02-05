// Write a multi-threaded java program to illustrate producer consumer problem.

class P7{
    int[] buf=new int[5];
    int in=0, out=0, count=0;
    synchronized void put(int n) throws InterruptedException{
        while(buf.length==count) wait();
        buf[in]=n;
        in=(in+1)%buf.length;
        count++;
        System.out.println("\nProduced: "+n);
        notifyAll();
    }
    synchronized int get() throws InterruptedException{
        while(count==0) wait();
        int item=buf[out];
        out=(out+1)%buf.length;
        count--;
        System.out.println("\nConsumed: "+item);
        notifyAll();
        return item;
    }
    public static void main(String[] args){
        P7 pc=new P7();
        new Thread(()->{
            try{
                for(int i=1;i<=10;i++){
                    pc.put(i);
                    Thread.sleep(500);
                }
            } catch (InterruptedException ignored) {}
        }).start();
        new Thread(()->{
            try{
                while(true){
                    pc.get();
                    Thread.sleep(1000);
                }
            } catch (InterruptedException ignored) {}
        }).start();
    }
}