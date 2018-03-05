char * substring(char *s,int n, int m){
	char *uj = (char *)malloc(sizeof(char *)*((m-n)+2));
	int v=0;
	int i;
	for (i=n;i<=m;i++){
		uj[v]=s[i];
		v++;
	}
	uj[v]='\0';
	return uj;
}
