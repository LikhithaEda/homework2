CXX = g++
CXXFLAGS = -Wall -g
OBJECTS = Account.o account_client.o
OBJECTS2 = Invoice.o invoice_client.o

all: account_client invoice_client 

account_client: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o account_client $(OBJECTS)

invoice_client: $(OBJECTS2)
	$(CXX) $(CXXFLAGS) -o invoice_client $(OBJECTS2)

Account.o: Account.cc
	$(CXX) $(CXXFLAGS) -c Account.cc

account_client.o: account_client.cc
	$(CXX) $(CXXFLAGS) -c account_client.cc

Invoice.o: Invoice.cc
	$(CXX) $(CXXFLAGS) -c Invoice.cc

invoice_client.o: invoice_client.cc
	 $(CXX) $(CXXFLAGS) -c invoice_client.cc

clean: 

	rm  *.o
