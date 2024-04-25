class Solution {
    public int[] solution(int money) {
        int pricePerCup = 5500; 
        int cups = money / pricePerCup; 
        int remainingMoney = money % pricePerCup; 

        int[] answer = {cups, remainingMoney};
        return answer;
    }
}
