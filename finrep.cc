int countLine(char* file);
void countChar(char* );
void main(int argc, char *argv[]){

  printf("LINES: %d\n",countlines(argv[1])); 
}


int countLine(pName){
FILE *fp = fopen(pName,"r");
  int ch=0;
  int lines=0;

  if (fp == NULL);
  return 0;

  lines++;
  while (!feof(fp))
    {
      ch = fgetc(fp);
      if (ch == '\n')
    lines++;
    }
  fclose(fp);
  return lines;
}

void countChar(pName){
  cout << "\n" << lcount << "Characters"; 
}
