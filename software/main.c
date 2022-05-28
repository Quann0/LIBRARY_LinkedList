#include "Thuvien.h"
int main() {
	
    int chon;
    char file[] = "Thuvien.txt";
    tv dau = NULL;
    int soluongSach = 0;
    int vitridem = 0;
    soluongSach = 0;
	fflush(stdout);
    while(1) 
	{
    	fflush(stdout);
        printf("\t\t\tQUAN LY SACH TRONG THU VIEN.\n");
        fflush(stdout);
        printf("1. Them sach vao trong thu vien.\n");
        fflush(stdout);
        printf("2. Xoa sach theo vi tri\n");
        fflush(stdout);
        printf("3. Chinh sua thong tin sach.\n");
        fflush(stdout);
        printf("4. Sap xep theo alphabet\n");
        fflush(stdout);
        printf("5. Hien thi thong tin Thu vien.\n");
        fflush(stdout);
        printf("6. Xem thong tin 1 quyen sach.\n");
        fflush(stdout);
        printf("7. Ghi danh sach sach vao file.\n");
        fflush(stdout);
        printf("8. Doc thu vien tu file.\n");
        fflush(stdout);
		printf("9. Thoat.");
		fflush(stdout);
		printf("\nBan chon: ");
		fflush(stdout);
        scanf("%d",&chon);
        switch(chon)
		{
            case 1:
            	fflush(stdin);
                printf("\n\t\tThem sach vao thu vien\n");
                fflush(stdout);
                vitridem++;
                printf("\nNhap thong tin sach muon them\n");
				fflush(stdout);
                printf("\nNhap thong tin sach thu %d: \n", vitridem);
                themsau(&dau, vitridem);
                Indong(30);
				fflush(stdout);
                printf("\nThem sach thanh cong!");
                fflush(stdout);
                soluongSach++;
                pressAnyKey();
                break;
            case 2:
				if(soluongSach > 0)
				{
					inds(dau);
					int x;
					printf("\n\nNhap vi tri can xoa: ");
					scanf("%d", &x);
					Xoasachbatky(&dau, x);
					printf("\n\t\t\tDanh sach sach sau khi xoa\n");
					inds(dau);
					soluongSach--;
					vitridem--;
				}
				else
				{
                    printf("\nThu vien rong!");
                }
				pressAnyKey();
				break;
            case 3:
                if(soluongSach > 0) {
                    int vitri;
                    printf("\n2. Chinh sua thong tin sach. \n");
                    printf("\t\tThong tin sach trong thu vien\n");
					inds(dau);
                    printf("\n Nhap vi tri: ");
					scanf("%d",&vitri);
                    Suathongtin(dau, vitri);
                }else{
                    printf("\nThu vien rong!");
                }
                pressAnyKey();
                break;
            case 4:
				if(soluongSach > 0)
				{
					int c;
					printf("1. Sap xep theo ten tac gia\n");
					printf("2. Sap xep theo ten sach\n");
					printf("3. Sap xep theo ma sach\n");
					printf("Nhap lua chon: ");
					scanf("%d",&c);
					sapxep(dau,c);
			 		if(c == 1) 
					{
						printf("\n\tSau khi sap xep theo ten tac gia\n");
			 		}	
			 		else if(c == 2) 
					{
						printf("\n\tSau khi sap xep theo ten sach\n");
			 		}
					else if(c == 3) 
					{
						printf("\n\tSau khi sap xep theo ten ma sach\n");
			 		}
					else {
				 		pressAnyKey();
						break;
					}
			 		inds(dau);				
				}
				else
				{
                    printf("\nThu vien rong!");
                }
				pressAnyKey();
				break;
            case 5: 
                if(soluongSach > 0)
				{ 
                   inds(dau);
                }
				else
				{
                    printf("\nThu vien rong!");
                }
                pressAnyKey();
                break;
            case 6:
            	if(soluongSach > 0)
				{
					in1sachtrongds(dau);
				}
				else
				{
                    printf("\nThu vien rong!");
                }
				pressAnyKey();
				break;
            case 7:
                if(soluongSach > 0)
				{
                    printf("\n8. Ghi danh sach sach vao file.");
                    ghiFile(dau, file);
                }
				else
				{
                    printf("\nThu vien rong!");
                }
                printf("\nGhi danh sach sach vao thu vien %s thanh cong!", file);
                pressAnyKey();
                break;
            case 8:
            	printf("Doc thu vien tu file\n");
            	docFile();
            	pressAnyKey();
            	break;
			case 9:
                printf("\nBan da chon thoat chuong trinh!");
                getch();
                exit(0);
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nHay chon chuc nang trong hop menu.");
                pressAnyKey();
                break;
        }
	}
    return 0;
}