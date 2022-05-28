#include "Thuvien.h"

tv taoNode(int vitri){
	
	fflush(stdout);
	sach_t s;
	
	printf("\nNhap ten tac gia: ");
	fflush(stdout);
	gets(s.Tentacgia);

	printf("\nNhap ma sach: ");
	gets(s.Masach);

	printf("\nNhap ten sach: ");
	gets(s.Tensach);

	printf("\nNhap nam xuat ban: ");
	scanf("%d",&s.Namxuatban);
	fflush(stdin);
	
	printf("\nNhap tinh trang sach (co san/dang muon): ");
	gets(s.Tinhtrang);
	
	s.Vitri=vitri;
	tv tmp = (tv)malloc(sizeof(struct Thuvien));
	tmp->data = s;
	tmp->pNext = NULL;
	
	return tmp;	
}

void Indong(int n) {
	
    printf("\n");
    for (int i = 0; i < n; i++) 
	{
        printf("-");
    }
    printf("\n");
}

void themsau(tv *a,int vitri){
	
	tv tmp = taoNode(vitri);
	if(*a == NULL)
	{
		*a=tmp;
	}
	else
	{
		tv p = *a;
		while(p->pNext != NULL)
		{
			p = p->pNext;
		}
		p->pNext = tmp;
	}	
}

void in(sach_t s){
	
		printf("\n");
		printf("%d", s.Vitri);
        printf("\t\t%s", s.Tensach);
     
        if(strlen(s.Tensach) > 7 && strlen(s.Tensach) < 16) 
		{	
			printf("\t\t%s", s.Masach);
        }
        else if (strlen(s.Tensach) > 15) 
		{
			printf("\t%s", s.Masach);
		}
		else 
		{
			printf("\t\t\t%s", s.Masach);
        }
        if(strlen(s.Masach) > 7 ) 
		{
			printf("\t%s", s.Tentacgia);
        }
		else 
		{
			printf("\t\t%s", s.Tentacgia);
		}
		if(strlen(s.Tentacgia) > 7 && strlen(s.Tentacgia) < 16) 
		{
			printf("\t\t%d", s.Namxuatban);
		}
		else if(strlen(s.Tentacgia) > 15) 
		{
			printf("\t%d", s.Namxuatban);
		}
		else 
		{
			printf("\t\t\t%d", s.Namxuatban);
		}
		printf("\t\t\t%s", s.Tinhtrang);
}

void inds(tv a){
	
	printf("Danh sach sach trong thu vien :\n");
	Indong(100); 
	printf("\nVi tri\t\tTen sach\t\tMa sach\t\tTen tac gia\t\tNam xuat ban\t\tTinh trang");
   while(a != NULL){
   	
   		in(a->data);
   	
		a = a->pNext;
   }
}

void in1sachtrongds(tv a){
	
	printf("\t\t\t\tThong tin sach trong thu vien\n");
	inds(a);
	fflush(stdout);
	Indong(100);
	int x;
	printf("1. Tim kiem theo ten tac gia\n");
	printf("2. Tim kiem theo ma sach\n");
	printf("3. Tim kiem theo ten sach\n");
	
	printf("Chon: ");
	scanf("%d",&x);
	
	if (x == 1)
	{
		char s[100];
			getchar();
			printf("Nhap ten tac gia cua sach muon xem: ");
			gets(s);	
		
		int dem = 0;
		while(a != NULL){
		if(strcmp(a->data.Tentacgia, s) == 0)
		   {
				dem = 1;
				printf("\n");
				printf("Vi tri: %d\n", a->data.Vitri);
		    	printf("Ten sach: %s\n", a->data.Tensach);
		    	printf("Ma sach: %s\n", a->data.Masach);
		    	printf("Ten tac gia: %s\n", a->data.Tentacgia);
				printf("Nam xuat ban: %d\n",a->data.Namxuatban);
				printf("Tinh trang sach: %s", a->data.Tinhtrang);
				break;
			}
			a = a->pNext;
		}
		if(dem == 0)
		{
		printf("\nKhong co ten tac gia nay trong danh sach");
		return;
		}
	}
	else if (x == 2)
	{
		char s[100];
			getchar();
			printf("Nhap ma sach cua sach muon xem: ");
			gets(s);	
		
		int dem = 0;
		while(a != NULL){
		if(strcmp(a->data.Masach, s) == 0)
		   {
				dem = 1;
				printf("\n");
				printf("Vi tri: %d\n", a->data.Vitri);
		    	printf("Ten sach: %s\n", a->data.Tensach);
		    	printf("Ma sach: %s\n", a->data.Masach);
		    	printf("Ten tac gia: %s\n", a->data.Tentacgia);
				printf("Nam xuat ban: %d\n",a->data.Namxuatban);
				printf("Tinh trang sach: %s", a->data.Tinhtrang);
				break;
			}
			a = a->pNext;
		}
		if(dem == 0)
		{
		printf("\nKhong co ma sach nay trong danh sach");
		return;
		}
	}
	else if (x == 3)
	{
		char s[100];
			getchar();
			printf("Nhap ten sach cua sach muon xem: ");
			gets(s);	
		
		int dem = 0;
		while(a != NULL){
		if(strcmp(a->data.Tensach, s) == 0)
		   {
				dem = 1;
				printf("\n");
				printf("Vi tri: %d\n", a->data.Vitri);
		    	printf("Ten sach: %s\n", a->data.Tensach);
		    	printf("Ma sach: %s\n", a->data.Masach);
		    	printf("Ten tac gia: %s\n", a->data.Tentacgia);
				printf("Nam xuat ban: %d\n",a->data.Namxuatban);
				printf("Tinh trang sach: %s", a->data.Tinhtrang);
				break;
			}
			a = a->pNext;
		}
		if(dem == 0)
		{
		printf("\nKhong co ten sach nay trong danh sach");
		return;
		}
	}
	else
	{
		printf("\nNhap sai chuc nang\n");
		return;
	}
}

void pressAnyKey() {
	
    printf("\n\nBam phim bat ky de tiep tuc...");
    fflush(stdout);
    getch();
}

//Ham dung de doc file(Nguyet num8)
void docFile() {
    FILE * fp = NULL;
   
    fp = fopen("Thuvien.txt", "r");

    char c;
   
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    
    fclose(fp);
}

//Ham de ghi danh sach vao file (Nguyet num7)
void ghiFile(tv a, char file[]) {
    FILE * fp;
    fp = fopen (file, "w");
	fprintf(fp, "Vi tri\t\tTen sach\t\tMa sach\t\tTen tac gia\t\tNam xuat ban\t\tTinh trang");
	fprintf(fp, "\n");
    while(a != NULL)
	{
		fprintf(fp, "%d", a->data.Vitri);
        fprintf(fp, "\t\t%s", a->data.Tensach);
        
        if(strlen(a->data.Tensach) > 7 && strlen(a->data.Tensach) < 16) 
		{
			fprintf(fp, "\t\t%s", a->data.Masach);
        }
		else if (strlen(a->data.Tensach) > 15) 
		{
			fprintf(fp,"\t%s", a->data.Masach);
		}
		else 
		{
			fprintf(fp,"\t\t\t%s", a->data.Masach);
        }
		if(strlen(a->data.Masach) > 7 )
		{ 
			fprintf(fp, "\t%s", a->data.Tentacgia);
        }
		else 
		{
			fprintf(fp,"\t\t%s", a->data.Tentacgia);
		}
		
		if(strlen(a->data.Tentacgia) > 7 && strlen(a->data.Tentacgia) < 16) 
		{
			fprintf(fp,"\t\t%d", a->data.Namxuatban);
		}
		
		else if(strlen(a->data.Tentacgia) > 15) 
		{
			fprintf(fp,"\t%d", a->data.Namxuatban);
		}
		
		else 
		{
			fprintf(fp,"\t\t\t%d", a->data.Namxuatban);
		}
		fprintf(fp,"\t\t\t%s", a->data.Tinhtrang);
		fprintf(fp,"\n");
		
		a = a->pNext;
	}

	fclose (fp);
}
void Suathongtinsach(tv tv1){
	
	printf("\nNhap ten sach: ");
	fflush(stdin);
	gets(tv1->data.Tensach);
	
	printf("\nNhap ma sach: ");
	fflush(stdin);
	gets(tv1->data.Masach);
	
	printf("Nhap ten tac gia: ");
	fflush(stdin);
	gets(tv1->data.Tentacgia);
	
	printf("Nhap nam xuat ban: ");
	scanf("%d",&tv1->data.Namxuatban);
	fflush(stdin);
	printf("Nhap tinh trang(co san/dang muon): ");
	fflush(stdin);
	gets(tv1->data.Tinhtrang);
}
void Suathongtin(tv a,int vitri){
	
	printf("Danh sach sach trong thu vien :\n");
	Indong(100); 
	printf("Chinh Sua Thong Tin Sach\n");
   int dem = 0;
   while(a != NULL){
   		if(a->data.Vitri == vitri)
		   {
	   			dem = 1;
	   			Indong(40);
	            printf("\n Sua thong tin sach co vi tri %d:\n", vitri);
	   			Suathongtinsach(a);
	   			Indong(40);
	            break;
		   }
		a = a->pNext;  
	}
	if(dem == 0)
	{ 
		printf("\n Sach co vi tri = %d khong ton tai.", vitri);
	}
}

void swap(tv b, tv c){
	
	tv temp = (tv)malloc(sizeof(struct Thuvien));
	
	strcpy(temp->data.Tentacgia, b->data.Tentacgia);
	strcpy(b->data.Tentacgia, c->data.Tentacgia);
	strcpy(c->data.Tentacgia, temp->data.Tentacgia);
	
	strcpy(temp->data.Tensach, b->data.Tensach);
	strcpy(b->data.Tensach, c->data.Tensach);
	strcpy(c->data.Tensach, temp->data.Tensach);
	
	strcpy(temp->data.Masach, b->data.Masach);
	strcpy(b->data.Masach, c->data.Masach);
	strcpy(c->data.Masach, temp->data.Masach);
	
	temp->data.Namxuatban = b->data.Namxuatban;
	b->data.Namxuatban = c->data.Namxuatban;
	c->data.Namxuatban = temp->data.Namxuatban;
	
	strcpy(temp->data.Tinhtrang, b->data.Tinhtrang);
	strcpy(b->data.Tinhtrang, c->data.Tinhtrang);
	strcpy(c->data.Tinhtrang, temp->data.Tinhtrang);
	
} 
void sapxep(tv a,int x){
	if(x == 1)
	{	
		tv b = (tv)malloc(sizeof(struct Thuvien));
			b = a;
		tv c = (tv)malloc(sizeof(struct Thuvien)); 
			c = b->pNext;
	    while(b->pNext != NULL)
		{
	  		c = b->pNext;
		  	while(c != NULL)
			{
		  		if(strcmp(b->data.Tentacgia, c->data.Tentacgia) > 0)
				{
		  			swap(b, c);
				}
				  c = c->pNext;
				  
			}
			  b = b->pNext;
		}
	}
	else if(x == 2)
	{
		tv b = (tv)malloc(sizeof(struct Thuvien));
			b = a;
		tv c = (tv)malloc(sizeof(struct Thuvien)); 
			c = b->pNext;
	    while(b->pNext !=NULL)
	    {
		  	c = b->pNext;
		  	while(c != NULL)
			  {
		  		if(strcmp(b->data.Tensach,c->data.Tensach) > 0)
				  {
		  			swap(b,c);
				  }
				c = c->pNext;  
			  }
			b = b->pNext;
		}
	}
	else if(x == 3)
	{	
		tv b = (tv)malloc(sizeof(struct Thuvien));
			b = a;
		tv c = (tv)malloc(sizeof(struct Thuvien)); 
			c = b->pNext;
	    while(b->pNext !=NULL)
		{
	  		c = b->pNext;
	  		while(c!=NULL)
			{
		  		if(strcmp(b->data.Masach,c->data.Masach) > 0)
				  {
		  			swap(b,c);
				  }
				c = c->pNext;	  
			}
			b = b->pNext;
		}
	}
	else 
	{
		printf("Nhap sai\n");
	}
}

void XoaDau(tv *a){
	
	if(a == NULL)
	{
		return;
	}
	tv tmp = *a;
	tmp->data.Vitri--; 
	*a = tmp;
	*a = tmp->pNext; 
	free(tmp);
}

void thaydoivitrisaukhixoa(tv a){
	while(a != NULL){
		a->data.Vitri--;
		a = a->pNext;
	}
}
void Xoasachbatky(tv *a, int x){
	
	if(a == NULL)
	{
		return;
	}
	tv b = (tv)malloc(sizeof(struct Thuvien));
	tv c = (tv)malloc(sizeof(struct Thuvien));
	b = NULL;
	c = *a;
	for(int i = 1; i < x; i++)
	{
		b = c;
		c = c->pNext;
	}
	if(b == NULL)
	{
		XoaDau(&*a);
		thaydoivitrisaukhixoa(*a);
		return;
	}
	else
	{
		b->pNext = c->pNext;
		while(c != NULL)
		{
			c->data.Vitri--;
			c = c->pNext;
		}
	}
}
