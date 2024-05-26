#include<stdio.h>
#include<stdlib.h>

struct graph
{
    // declaring graph data structure
    struct vertex*point[5];
};

struct vertex
{
    // declaring vertices
    int end;
    struct vertex*next;
};

struct edge
{
    int end,start;  // declaring egdes
};

struct graph*createGraph(struct edge edges[],int x)
{
    int i;
    struct graph*graph = (struct graph*)malloc(sizeof(struct graph));
    for(i=0;i<5;i++)
    {
        graph->point[i] = NULL;
    }
    for(i=0;i<x;i++)
    {
        int start = edges[i].start;
        int end = edges[i].end;
        struct vertex*v = (struct vertex*)malloc(sizeof(struct vertex));
        v->end = end;
        v->next = graph->point[start];
        graph->point[start] = v;
    }
    return graph;
}

int main()
{
    struct edge edges[] = {{0,1},{0,2},{0,3},{1,2},{1,4},{2,4},{2,3},{3,1}};
    int n = sizeof(edges)/sizeof(edges[0]);
    struct graph*graph = createGraph(edges,n);
    int i;
    for(i=0;i<5;i++)
    {
        struct vertex*ptr = graph->point[i];
        while(ptr != NULL)
        {
            printf("(%d->%d)\t",i,ptr->end);
            ptr = ptr->next;
        }
        printf("\n");
    }
    return 0;
}