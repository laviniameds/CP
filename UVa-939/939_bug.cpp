#include <iostream>
#include<istream>
#include <map>

using namespace std;

struct Person {
    string status;
    string parent1;
    string parent2;
};

typedef std::map<string, Person> Maptype;
string undefined = "undefined", non_existent = "non-existent", dominant = "dominant", recessive = "recessive";

bool exists(string key, Maptype &m){
    return (m.find(key) != m.end());
}

bool isStatus(string v){
    return (v == dominant || v == recessive || v == non_existent);
}

void check_parent(string key, Maptype &m, string parent){
    auto it = m.find(key);
    string p1 = it->second.parent1;
    string p2 = it->second.parent2;

    if(p1 == undefined)
        it->second.parent1 = parent;
    else 
        it->second.parent2 = parent;

    p1 = it->second.parent1;
    p2 = it->second.parent2;

    //calcula resultado se tiver os 2 pais
    if(p1 != undefined && p2 != undefined){
        string p1_status = m.find(p1)->second.status;
        string p2_status = m.find(p2)->second.status;

        if(p1_status == non_existent || p2_status == non_existent){
            if(p1_status == dominant || p2_status == dominant){
                it->second.status = recessive;
            }
            else{
                it->second.status = non_existent;
            }
        }
        else{
            if(p1_status == dominant || p2_status == dominant){
                it->second.status = dominant;
            }
            else{
                it->second.status = recessive;
            }
        }
    }  
}

int main(){

    Maptype map;
    Maptype::iterator m;
    int qtd_tests;
    string name1, name2, status_parent1, status_parent2;
    Person person;
    
    cin >> qtd_tests;
    while(qtd_tests--){
        while(cin >> name1 >> name2){
            //nome 1 existe
            if(exists(name1, map)){
                //nome 2 existe
                if(exists(name2, map)){
                    //pessoa 1 é o pai e pessoa 2 o filho
                    //ambos existem
                    check_parent(name2, map, name1);
                }
                //nome 2 nao existe
                else{
                    //se o nome 2 for um status
                    if(isStatus(name2)){
                        //atualiza o status
                        auto it = map.find(name1);
                        it->second.status = name2;
                    }
                    //se o nome 2 for outra pessoa (o pai existe, mas o filho não)
                    else{
                        //insere pessoa 2
                        person.parent1 = undefined;
                        person.parent2 = undefined;
                        person.status = undefined;
                        map.insert({name2, person});

                        //atualiza o parentesto
                        check_parent(name2, map, name1);
                    }
                }
            }
            //nome 1 nao existe
            else{
                //nome 2 existe (o filho existe mas o pai ainda n)
                if(exists(name2, map)){
                    person.parent1 = undefined;
                    person.parent2 = undefined;
                    person.status = undefined;
                    map.insert({name1, person});

                    //atualiza o parentesto
                    check_parent(name2, map, name1);                                                                                   
                }
                //nome 2 nao existe
                else{
                    //se o nome 2 for um status
                    if(isStatus(name2)){
                        person.parent1 = undefined;
                        person.parent2 = undefined;
                        person.status = name2;
                        map.insert({name1, person});
                    }
                    //se o nome 2 for outra pessoa (ambas as pessoas nao existem)
                    else{
                        //insere pessoa 1 e 2
                        person.parent1 = undefined;
                        person.parent2 = undefined;
                        person.status = undefined;
                        map.insert({name1, person});
                        map.insert({name2, person});

                        //atualiza o parentesco
                        check_parent(name2, map, name1);
                    }
                }
            } 
        }           
    }
    
    for( m = map.begin(); m != map.end(); m++ ){  
        //cout << m->first << " " << m->second.parent1 << " "  << m->second.parent2 << " " << m->second.status << endl;
        cout << m->first << " " << m->second.status << endl;   
    }  

    return 0;
}
