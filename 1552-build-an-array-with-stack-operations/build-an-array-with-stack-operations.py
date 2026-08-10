class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        result = []
        target_idx = 0
        
        for curr in range(1, n + 1):
            if target_idx == len(target):
                break
                
            result.append("Push")
            
            if curr == target[target_idx]:
                target_idx += 1
            else:
                result.append("Pop")
                
        return result