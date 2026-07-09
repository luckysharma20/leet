class Solution {
    public List<Integer> majorityElement(int[] arr) {
        HashMap<Integer,Integer> ans=new HashMap<>();
        ArrayList<Integer> ls=new ArrayList<>();
        int n=arr.length;
        for (int i=0;i<n;i++){
            ans.merge(arr[i],1,Integer::sum);
        }
        for (Map.Entry<Integer,Integer> it:ans.entrySet()){
            if (it.getValue()>(n/3)){
                ls.add(it.getKey());
            }
            if (ls.size()==2) break;
        }
        Collections.sort(ls);
        return ls;
    }
}