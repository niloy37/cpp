#include<list>

struct vertex {
    int node_id;
    std::string value;
    std::vector<std::pair<vertex*,int>adj_list;
    int distance = INT_MAX;
    vertex *predecessor = NULL:
   // vertex(){}
    //vertex(int _id, std::string _value = "")
};
class simple_graph{
std::vector<vertex*> vertex_list;

public:
    simple_graph(){

    }

    void add_node(int _node_id, std::string value= ""){
        for each (auto var in vertex_list){
            if(var->node_id == _node_id){
             throw std::runtime_error("Failed adding node : node with node_id -"+std::to_string(_node_id);
            }
        }
        vertex_list.push_back(new vertex(_node_id,value));
    }

    void add_edge(int v1_id, int v2_id,int weight = 0){
        vertex *v1 = NULL;
        vertex* v2 = NULL;
        bool found_v1 = false;
        bool found_v2 = false;
        for each(auto var in vertex_list){
            if(var->node_id == v1_id){
                va1= var;
                found_v1 = true;
            }
            if(var->node_id == v2_id){
                v2=var;
                found_v2 = true;
            }

            if(found_v1 && found v2)
                break;
        }

        if(found_v1 && found_v2){
            bool edge_already_exist = false;
        
            for each(auto var in vertex_list){
                if(var.first->node_id == v2_id){
                    edge_already_exist = true;
                    throw std::runtime_error("Failed adding edge :"+ std::to_string(v1_id)+"-"+std::to_string(v2_id));
                    break;
                    }
                }
                if(!edge_already_exist){
                    v1->adj_list.push_back(std::make_pair(v2,weight))
                }
            }
            else {
                throw std::runtime_error("Failed adding edge : one or both vertex does not exist ");
            }
        }
    }

}; //graph theory
