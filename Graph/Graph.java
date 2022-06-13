package Graph;

import java.util.*;

public class Graph {
    private int v;

    private HashMap<Integer, LinkedList<Integer>> adlist = new HashMap<>();

    public void addAdge(int v, int u) {
        if (!adlist.containsKey(v)) {
            adlist.put(v, new LinkedList<>());
        }
        if (!adlist.containsKey(u)) {
            adlist.put(u, new LinkedList<>());
        }

        adlist.get(v).add(u);
        adlist.get(u).add(v);
    }

    public void bfs(int source) {

        Set<Integer> vistied = new HashSet<>();
        Queue<Integer> que = new LinkedList<>();
        que.add(source);
        vistied.add(source);
        while (que.size() > 0) {
            int value = que.poll();
            vistied.add(value);
            System.out.println(value);
            for (int x : adlist.get(value)) {
                if (!vistied.contains(x)) {
                    que.add(x);
                }
            }

        }

    }

    public static void main(String[] args) {
        Graph g = new Graph();
        g.addAdge(0, 1);
        g.addAdge(1, 3);
        g.addAdge(2, 3);
        g.addAdge(3, 4);
        g.addAdge(0, 4);
        g.bfs(0);
    }

}