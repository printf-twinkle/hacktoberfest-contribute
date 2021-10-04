import java.util.*;

class stackClass
{
    static void push(Stack<Integer> stack, int item)
    {
        stack.push(item);
    }

    static int pop(Stack<Integer> stack)
    {
        return stack.pop();
    }

    static int peek(Stack<Integer> stack)
    {
        return stack.peek();
    }

    public static void main(String args[])
    {
        Stack<Integer> stack = new Stack<Integer>();

        push(stack, 21);
        push(stack, 25);
        System.out.println(pop(stack));
    }
}
