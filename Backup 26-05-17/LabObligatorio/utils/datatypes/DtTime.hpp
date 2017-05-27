#ifndef DT_TIME_HPP
#define DT_TIME_HPP

using namespace std;


class DtTime {
    private:
        int hora;
        int minutos;
    
    public:
        DtTime();
        DtTime(int,int);
        DtTime(DtTime*);

        int getHora();
        int getMinutos();
        void setHora(int);
        void setMinutos(int);

        virtual ~DtTime();
        
        bool operator == (DtTime*);
        
}

#endif //DT_TIME_HPP