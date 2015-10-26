class Machine{
  
  public:
    ˜Machine();
    Machine(const Machine& );
    void run(void);
  
  private:
    int convertToNumber(char input);
    char convertToChar(int number);
    void print(void);

}
