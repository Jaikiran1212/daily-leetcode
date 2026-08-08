class Solution:
    def validateStackSequences(self, pushed, popped):
        stack = []
        popped_index = 0
        for num in pushed:
            stack.append(num)
            while len(stack) > 0 and stack[-1] == popped[popped_index]:
                stack.pop()
                popped_index += 1
        return len(stack) == 0