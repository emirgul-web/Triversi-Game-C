#include <stdio.h>

int main(){
	int n,i,j,a,b,c,z,dogruKoordinat,dizi[100],dizi2[100];
	char matris[24][24];
	char nokta='.';
	char k,oyuncu[10];
    
    int asilsayi=0;
	int p,l;
	printf("kare oyun tahtasinin satir sayisini giriniz :");
	scanf("%d",&n);
	

	
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		matris[i][j]=nokta;    		
		}
	}
	printf("   ");
	for(i=0;i<n;i++){
		printf(" %2d",i);
	}
	printf("\n");
	 for(i=0;i<n;i++){
	 	printf(" %2d ",i);
    	for(j=0;j<n;j++){
    	
    		printf("%2c ",matris[i][j]);
		}
		printf("\n");
	}
	i=0;
	while(asilsayi==0){
		
	for(j=0;j<3;j++){
	if(j==0){
	oyuncu[0] = 'k';
    oyuncu[1] = 'i';
    oyuncu[2] = 'r';
    oyuncu[3] = 'm';
    oyuncu[4] = 'i';
    oyuncu[5] = 'z';
    oyuncu[6] = 'i';
    oyuncu[7] = '\0';
    k='K';	
	}else if(j==1){
	oyuncu[0] = 's';
    oyuncu[1] = 'a';
    oyuncu[2] = 'r';
    oyuncu[3] = 'i';
    oyuncu[4] = '\0';
    k='S';
		}
	else if(j==2){
	oyuncu[0] = 'm';
    oyuncu[1] = 'a';
    oyuncu[2] = 'v';
    oyuncu[3] = 'i';
    oyuncu[4] = '\0';
    k='M';
		}
		
		if(i==0&&j==0){
			
			
	//ilk koyulan taþýn merkeze en yakýn nokta olup olmadýðýný kontrol etme		
	while(dogruKoordinat==0){
	printf("%s oyuncu, satir ve sutun giriniz:\n", oyuncu);
	scanf("%d %d",&a,&b);
	if(i==0&&j==0){
		
		if(n%2==0){
			if ((a == n / 2 || a == (n / 2) - 1) && (b == n / 2 || b == (n / 2) - 1)){
				dogruKoordinat=1;
			}else{
				printf("hatali koordinat!,tekrar giriniz\n");
				
				
			}
			
		}else{
				if(a==n/2&&b==n/2){
					dogruKoordinat=1;
				}else{
				printf("hatali koordinat!,tekrar giriniz\n");
				
			}
		}
			   
	}
	}
	matris[a][b]=k;
	
	
	printf("   ");
	for(c=0;c<n;c++){
		printf(" %2d",c);
	}
	printf("\n");
	 for(c=0;c<n;c++){
	 	printf(" %2d ",c);
    	for(z=0;z<n;z++){
    	
    		printf("%2c ",matris[c][z]);
		}
		printf("\n");
	}
	
}else{
	int dogru2=0;
	int rakam=0;
	//konulan taþýn  diðer taþlara yatay/dikey/çapraz olup olmadýðýný kontrol etme
	while(dogru2==0){
	
	printf("%s oyuncu, satir ve sutun giriniz:\n", oyuncu);
	scanf("%d %d",&a,&b);
	for(c=(a-1);c<a+2;c++){
		for(z=b-1;z<b+2;z++){
			if(matris[c][z]=='K' ||matris[c][z]=='S' || matris[c][z]=='M' ){
				rakam=1;
			}
		}
	}
	
	if(rakam==1){
		dogru2=1;
	}else{
		printf("hatali koordinat!,tekrar giriniz.\n");
	}
	
	//taþ olan yeri girince hata vermesi
	if(matris[a][b]!='.'){
		printf("hatali koordinat!,tekrar giriniz.\n");
		dogru2=0;
	}
		
	}
	
	
	matris[a][b]=k;
	
	
	printf("   ");
	for(c=0;c<n;c++){
		printf(" %2d",c);
	}
	printf("\n");
	 for(c=0;c<n;c++){
	 	printf(" %2d ",c);
    	for(z=0;z<n;z++){
    	
    		printf("%2c ",matris[c][z]);
		}
		printf("\n");
	}
	
		
}
	//yatay sað kontrol
	int count=0;
	p=b+1;
   while(p>=0&&p<n&&count==0){
   	
   	if(matris[a][p]!='.'){
   		if(matris[a][p]==k){
   			for(c=p;c>b;c--){
   				matris[a][c]=k;
			   }
			   count=1;
		   }else{
		   	p++;
		   }
	   }else{
	   count=1;
	   }
   }
   
   	//yatay sol kontrol
count=0;
	p=b-1;
   while(p>=0&&p<n&&count==0){
   	
   	if(matris[a][p]!='.'){
   		if(matris[a][p]==k){
   			for(c=p;c<b;c++){
   				matris[a][c]=k;
			   }
			   count=1;
		   }else{
		   	p--;
		   }
	   }else{
	   count=1;
	   }
   }

   	//dikey üst kontrol
count=0;
	p=a+1;
   while(p>=0&&p<n&&count==0){
   	
   	if(matris[p][b]!='.'){
   		if(matris[p][b]==k){
   			for(c=p;c>a;c--){
   				matris[c][b]=k;
			   }
			   count=1;
		   }else{
		   	p++;
		   }
	   }else{
	   count=1;
	   }
   }
   
   	//dikey alt kontrol
count=0;
	p=a-1;
   while(p>=0&&p<n&&count==0){
   	
   	if(matris[p][b]!='.'){
   		if(matris[p][b]==k){
   			for(c=p;c<a;c++){
   				matris[c][b]=k;
			   }
			   count=1;
		   }else{
		   	p--;
		   }
	   }else{
	   count=1;
	   }
   }
   
    	//sað çapraz üst kontrol
count=0;
	p=a-1;
	l=b+1;
   while(p>=0&&p<n&&count==0){
   	
   	if(matris[p][l]!='.'){
   		if(matris[p][l]==k){
   		
			   c=p;
			   z=l;
			   while(c<a&&z>b){
			   	matris[c][z]=k;
			   	c++;
			   	z--;
			   }
			   count=1;
		   }else{
		   	p--;
		   	l++;
		   }
	   }else{
	   count=1;
	   }
   } 	


    	//sað çapraz alt kontrol
count=0;
	p=a+1;
	l=b-1;
   while(p>=0&&p<n&&count==0){
   	
   	if(matris[p][l]!='.'){
   		if(matris[p][l]==k){
   		
			   c=p;
			   z=l;
			   while(c>a&&z<b){
			   	matris[c][z]=k;
			   	c--;
			   	z++;
			   }
			   count=1;
		   }else{
		   	p++;
		   	l--;
		   }
	   }else{
	   count=1;
	   }
   } 
   
      	//sol çapraz alt kontrol
count=0;
	p=a+1;
	l=b+1;
   while(p>=0&&p<n&&count==0){
   	
   	if(matris[p][l]!='.'){
   		if(matris[p][l]==k){
   		
			   c=p;
			   z=l;
			   while(c>a&&z>b){
			   	matris[c][z]=k;
			   	c--;
			   	z--;
			   }
			   count=1;
		   }else{
		   	p++;
		   	l++;
		   }
	   }else{
	   count=1;
	   }
   } 	
   
         	//sol çapraz üst kontrol
count=0;
	p=a-1;
	l=b-1;
   while(p>=0&&p<n&&count==0){
   	
   	if(matris[p][l]!='.'){
   		if(matris[p][l]==k){
   		
			   c=p;
			   z=l;
			   while(c<a&&z<b){
			   	matris[c][z]=k;
			   	c++;
			   	z++;
			   }
			   count=1;
		   }else{
		   	p--;
		   	l--;
		   }
	   }else{
	   count=1;
	   }
   } 
	
		asilsayi=1;
	  for(c=0;c<n;c++){
    	for(z=0;z<n;z++){
    		if(matris[c][z]==nokta) {
    		
					asilsayi=0;
				}   		
		}
	}
	if(asilsayi==1)
	j=3;
	
	
	}
	i++;
	

	//hangi renkten kaç tane olduðunu bulma
	}	
	int kirmizi=0,sari=0,mavi=0;
	 for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    	if(matris[i][j]=='K') 
			kirmizi++;
		if(matris[i][j]=='M') 
			mavi++;
		if(matris[i][j]=='S') 
			sari++;			
			
		}
	}
	//en çok olan rengi bulma
	int max;
	max=kirmizi;
	if(mavi>max)
	max=mavi;
	
	if(sari>max)
	max=sari;
	
	
	
	char dizi5[8] = "kirmizi";
	char dizi6[5]="mavi";
	char dizi7[5]="sari";
	
	//kazananý ve sonuçlarý yazdýrma
	
	if(max==kirmizi){
	printf("KAZANAN RENK :%s\n\n",dizi5);
		}
		
	if(max==mavi){
	printf("KAZANAN RENK :%s\n\n",dizi6);
		}
		
	if(max==sari)
	printf("KAZANAN RENK :%s\n\n",dizi7);
	
		
	printf("%d  adet sari bulunmaktadýr.\n",sari);
		printf("%d  adet kirmizi bulunmaktadýr.\n",kirmizi);
		printf("%d  adet mavi bulunmaktadýr.",mavi);
	
	return 0;
}
