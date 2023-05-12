/*DreamTek Company provides training for new employees who have joined after graduating from college. During the training, these employees are designated as â€œAssociateâ€. The training duration is 60 days for each Associate. In these 60 days, Associates learn various technologies. The first 20 days they learn â€œCore skillsâ€, the next 20 days they learn â€œAdvanced skillsâ€, and the final 20 days they go through a â€œProject phaseâ€. DreamTek would like software to help them know which phase a particular Associate is currently in.*/


#include <iostream>
using namespace std;

class Employee {  
    private:
        int associateId;
        string associateName;
        string workStatus;
    public:
    
        string work;
        int days;
        
        void setAssociateId(int id) {
            associateId = id;
        }
        int getAssociateId() {
            return associateId;
        }
        void setAssociateName(string name) {
            associateName = name;
        }
        string getAssociateName() {
            return associateName;
        }
        void setWorkStatus(string work) {
            workStatus = work;
        }
        string getWorkStatus() {
            return workStatus;
        }
        void updateStatusDetails(int days) {
            this -> days = days;
            if (days <= 20) {
                workStatus = "Core skills";
            }
            else if (days > 20 && days <= 40) {
                workStatus = "Advanced skills";
            }
            else if (days > 40) {
                workStatus = "Project phase";
            }
        }
};


int main(){   

    
    int id;
	string name;
	int days;
	cout<<"Enter the associate id:";
	cin>>id;
	cout<<"Enter the associate name:";
	cin>>name;
	cout<<"Enter the number of days:";
	cin>>days;
    
   
    string work;
    
    Employee e1;
    e1.setAssociateId(id);
    e1.setAssociateName(name);
    e1.setWorkStatus(work);
    e1.updateStatusDetails(days);
    
    cout<<"The associate "<<e1.getAssociateName()<<" work status: "<<e1.getWorkStatus()<<endl;
    
    return 0;
}
