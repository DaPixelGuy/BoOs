void dummy_test_entrypoint() {
}

void main(){
	char* video_memory = (char*) 0xb8000;
    *(char*)0xb8000 = 'B';
}
