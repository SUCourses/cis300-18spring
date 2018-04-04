void foo(void){}

int bar(long x){
   return 1;
}


int main(){
	void (* f1)(void) = foo;
	int (* f2)(long) = bar;
  f1(); //foo();
	f2(3); //bar(3);
	return 0;
}

