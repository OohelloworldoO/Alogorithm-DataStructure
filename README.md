# Alogorithm/DataStructure

c/cpp 復健中...

<pre>
gcc/g++ -o 要生成執行檔名 執行檔名
</code></pre>

切換至 cmd compile

## Note

|     科目      |  實體參考書  |                                          OCW                                           |
| :-----------: | :----------: | :------------------------------------------------------------------------------------: |
| DataStructure | 洪逸、王志強 |   [彭文志](https://www.youtube.com/playlist?list=PLj6E8qlqmkFusQlwukXMUDVdYfd7oPyr3)   |
|   Algorithm   |    林立宇    | [江蕙如老師](https://www.youtube.com/playlist?list=PLj6E8qlqmkFtoRpLn6IXnH_eboef-3QvZ) |

# 關於指標

```
struct Student {
    char name[50];
    int score;
    struct Student *next;
};
```

```
struct Student* createStudent(char name[], int score) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    if (newStudent == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    strcpy(newStudent->name, name);
    newStudent->score = score;
    newStudent->next = NULL;
    return newStudent;
}
```

我之前對於 `*next` 跟`struct Student*`有些誤解 最近才搞清楚  
白話一點解釋就是`struct Student*`是指向`struct Student`這個結構的記憶體位置  
`*next`是指向`struct Student`結構中下一個位置的指針
