package javap.graphs;

import java.util.*;

public class Graph {
    Map<String, ArrayList<String>> adlist = new HashMap<>();
    Set<String> visited = new HashSet<>();

    public void dfs(String node) {
        if (visited.contains(node)) {
            return;
        }
        System.out.println(node);
        visited.add(node);
        for (String n : adlist.get(node)) {
            if (visited.contains(n)) {
                continue;
            }

            dfs(n);
        }

    }

    public static void main(String[] args) {
        Graph g = new Graph();
        ArrayList<List<String>> vertices = new ArrayList<>();
        vertices.add(Arrays.asList("a", "b"));
        vertices.add(Arrays.asList("a", "c"));
        vertices.add(Arrays.asList("c", "e"));
        vertices.add(Arrays.asList("d", "f"));

        g.adlist = getAdListFromVertices(vertices);
        g.dfs("a");

    }

    public static Map<String, ArrayList<String>> getAdListFromVertices(ArrayList<List<String>> lst) {
        Map<String, ArrayList<String>> mp = new HashMap<>();
        lst.forEach(arrayList -> {
            if (!mp.containsKey(arrayList.get(0))) {

                var l = new ArrayList<String>();
                mp.put(arrayList.get(0), l);

            }
            if (!mp.containsKey(arrayList.get(1))) {

                var l = new ArrayList<String>();
                mp.put(arrayList.get(1), l);

            }
            mp.get(arrayList.get(0)).add(arrayList.get(1));
            mp.get(arrayList.get(1)).add(arrayList.get(0));

        });
        return mp;
    }

}