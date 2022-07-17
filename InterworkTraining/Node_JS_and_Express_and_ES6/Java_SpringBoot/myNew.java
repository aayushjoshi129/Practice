public class myNew {
    public static void name(String[] args) {


@RestController
public class PostController {​​​​​​​​

    @GetMapping(value = "/posts")
    public String getPosts() {​​​​​​​​
        return "hello";

    }​​​​​​​​

    @GetMapping(value = "/")
    public String welcome() {​​​​​​​​
        return "Welcome";
    }​​​​​​​​

    // /posts/12/1001
   // posts/12
    @GetMapping(value = "/posts/{​​​​​​​​postId}​​​​​​​​/{​​​​​​​​userId}​​​​​​​​")
    public String params(@PathVariable() int postId) {​​​​​​​​
        return "post ID " + postId + " UserID ";
    }​​​​​​​​


    // posts/12?userId=1001&commentId=987
    @GetMapping(value = "/posts/{​​​​​​​​postId}​​​​​​​​")
    public String queryParams(@PathVariable() int postId,
                              @RequestParam(name = "userId") String uid,
                              @RequestParam() String commentId) {​​​​​​​​
        return "post ID " + postId + " UserID " + uid + "Comment" + commentId;
    }​​​​​​​​

}​​​​​​​​

    }
}