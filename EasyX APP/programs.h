#pragma once
#include <bits/stdc++.h>
#include "myGraphics.h"

using namespace std;
using namespace myGraphcis;

//����1�����ƾ���
void pg1()
{
    rectangle(100, 100, 300, 250);
}

//����2��������������
void pg2()
{
    //���껭��
    setcolor(RED);
    line(10, 10, 50, 10);
    line(50, 10, 50, 50);
    line(50, 50, 10, 50);
    line(10, 50, 10, 10);

    //�α껭�ߣ�����λ�ã�
    setcolor(GREEN);
    moveto(70, 10);
    lineto(110, 10);
    lineto(110, 50);
    lineto(70, 50);
    lineto(70, 10);

    //�α껭�ߣ����λ�ã�
    setcolor(BLUE);
    moveto(130, 10);
    linerel(40, 0);
    linerel(0, 40);
    linerel(-40, 0);
    linerel(0, -40);
}

//����3��������
void pg3()
{
    circle(150, 100, 80);//��

    circle(120, 80, 15);//�۾�
    circle(180, 80, 15);

    line(145, 105, 140, 125);//����
    line(155, 105, 160, 125);
    line(140, 125, 160, 125);
    
    setcolor(RED);
    arc(75, 30, 225, 150, -2 * pi / 3 - pi / 20, -pi/3 + pi / 20);
    arc(85, 0, 215, 165, -2 * pi / 3-pi/11, -pi / 3+pi/11);

    // �����ֵ 1024���Ƚ����ָ�ʽ�����Ϊ�ַ��� (VC2008 / VC2010 / VC2012)
    //TCHAR s[5];
    //_stprintf(s, _T("%d"), 1024);
    //outtextxy(10, 60, s);
    setcolor(BLACK);
    outtextxy(200, 200, TEXT("HELLO WORLD!"));
    outtextxy(100, 300, TEXT("��A little bit scary FACE��    .by eChorgi"));

}

//����4����һ����ԲȺ
void pg4()
{
    for (int i = 0; i < 10; i++) {
        setcolor(RGB(100 + i * 15, i * 25 + 10, 250 - i * 20));
        ellipse(20 + i * 80, 220, 20 + i * 80 + (8 + abs(i - 5) * 8), 300);
    }
}

//����5����һ������
void pg5()
{
    rectangle(225, 250, 480, 400);    /*������*/
    rectangle(390, 320, 440, 400);    /*����*/
    rectangle(260, 290, 300, 330);    /*������*/
    line(260, 310, 300, 310);  line(280, 290, 280, 330);
    line(200, 200, 455, 200);    /*���ݶ�*/
    line(455, 200, 480, 250);  line(200, 200, 225, 250);
    line(160, 230, 200, 200);  line(160, 230, 225, 250);    /*�������*/
    line(160, 230, 160, 380);  line(160, 380, 225, 400);

}

//����6����һ����ͷ
void pg6()
{
    int arw[16] = {
        200, 102,//����
        300, 102,
        300, 107,//��
        330, 100,//��ͷ��
        300, 93,//��
        300, 98,
        200, 98,//����
        200, 102//�ص���㣺����
    };

    setcolor(RGB(150,10,10));   /*����ɫ*/
    drawpoly(8, arw);   /*����ͷ*/

}

//����7����ϵͳԤ�����4�����ͻ����Σ������û��Զ������ͻ�һ������
void pg7()
{
    DWORD a[6] = {50,50,30,30,10,10};//��50������ ����50������ ��30������ ����30�����ء���
    for (int style = 0; style < 5; style++) {
        for (int i = 0; i < 10; i++) {
            if (style < 4)
                setlinestyle(style, i + 1);//�߿�Ϊi+1
            else
                setlinestyle(PS_USERSTYLE, i + 1, a, 6);
            setcolor(RGB(100 + i * 15, i * 25 + 10, 250 - i * 20));
            rectangle(20 + i * 80, 50+style*100, 20 + i * 80 + (8 + abs(i - 5) * 8), 120 + style * 100);
        }
    }
    
}

//�û�ɫ������Ӱ�ߣ�б�������һ����Բ
void pg8()
{
    setfillstyle(BS_HATCHED, HS_DIAGCROSS);
    //setfillstyle((BYTE*)"\x3e\x41\x80\x80\x80\x80\x80\x41");
    //setfillstyle((BYTE*)"\x5a\x2d\x96\x4b\xa5\xd2\x69\xb4");
    for (int i = 0; i < 10; i++) {
        COLORREF col = RGB(100 + i * 15, i * 25 + 10, 250 - i * 20);
        setcolor(col);
        setfillcolor(col);
        ellipse(20 + i * 80, 220, 20 + i * 80 + (8 + abs(i - 5) * 8), 300);
        floodfill(20 + i * 80 + (8 + abs(i - 5) * 8) / 2, 260,col);
    }

    
}

//����9��ʹ���û��Զ������ģʽ���һ����Բ���á� TC. ����䣩
void pg9()
{
    setfillstyle((BYTE*)"\x01\x70\x20\x27\x24\x24\x07\x00");
    for (int i = 0; i < 10; i++) {
        COLORREF col = RGB(100 + i * 15, i * 25 + 10, 250 - i * 20);
        setcolor(col);
        setfillcolor(col);
        ellipse(20 + i * 80, 220, 20 + i * 80 + (8 + abs(i - 5) * 8), 300);
        floodfill(20 + i * 80 + (8 + abs(i - 5) * 8) / 2, 260, col);
    }
}

//����10������Ч����ʾ����
void pg10()
{
    rectangle(20, 20, 200, 200);
    setcolor(RED);
    line(20, 20, 200, 200);
    setcolor(GREEN);
    line(20, 200, 200, 20);
    
    outtext(TEXT("press a key"));
    _getch();

    IMAGE buf;
    getimage(&buf, 20, 20, 200, 200);
    putimage(300, 50, &buf, SRCCOPY);
    
    outtext(TEXT("press a key"));

}

//����11��ģ������С��̬��ײ����
void pg11()
{
    outtextxy(200, 500, TEXT("��The Two-Body Problem��  by eChorgi"));
    setcolor(YELLOW);
    setlinestyle(PS_SOLID);
    setfillstyle(BS_SOLID);
    setfillcolor(YELLOW);

    circle(100, 200, 30);
    floodfill(100, 200, YELLOW);
    
    IMAGE img;
    double v = 0;
    getimage(&img, 69, 169, 64, 64);
    
    while (1){
        for (double i = 0; i < 185; i += v,v+=0.00000001) {
            int pos = (int)(i + 0.5);
            putimage(70 + pos, 170, &img, SRCCOPY);  putimage(500 - pos, 170, &img, SRCCOPY);
        }
        for (double i = 0; i < 185; i += v, v -= 0.00000001) {
            int pos = (int)(i + 0.5);
            putimage(255 - pos, 170, &img, SRCCOPY);   putimage(315 + pos, 170, &img, SRCCOPY);
        }
    }
    
}

//====================�ڶ���=======================

//����12������DDA�����㷨
void pg12()
{
    for (double i = 0; i < 2 * pi; i += pi / 50)
        DDALine(400, 300, 400 + 400 * cos(i),300 + 300 * sin(i), RGB(155 + 100 * sin(i), 155 + 100 * cos(i), 155 + 100 * tan(i)));

}

//�����е㻭���㷨��MP������
void pg13()
{
    for (double i = 0; i < 2 * pi; i += pi / 50) {
        MPLine(400, 300, 400 + 400 * cos(i), 300 + 300 * sin(i), RGB(155 + 100 * sin(i), 155 + 100 * cos(i), 155 + 100 * tan(i)));   
    }

}

//����Bresenham�㷨���ߺ���
void pg14()
{
    for (double i = 0.00001; i < 2 * pi; i += pi / 50) {
        BHLine(400, 300, 400 + 400 * cos(i), 300 + 300 * sin(i), RGB(155 + 100 * sin(i), 155 + 100 * cos(i), 155 + 100 * tan(i)));
        printf("%.20lf %.20lf\n", 400 + 400 * cos(i), 300 + 300 * sin(i));
        //getch();
    }
}

//�����е㻭Բ
void pg15()
{
    for (int i = 0,v = 0; i < 400; i+= v, v+=5)
        MPCircle(400, 300, i, RGB(i * 255 / 400,(400-i)*255/400,i * 255 / 400));
}

//�����е㻭��Բ����
void pg16()
{
    for (int i = 0, v = 0; i < 400; i += v, v += 5)
        MPEllipse(400, 300, i, i*3/4, RGB(i * 255 / 400, (400 - i) * 255 / 400, i * 255 / 400));

}
//==================2.3 ����㷨====================

//����4��8��������亯��
void pg17()
{
    int size = 1;
    while(size < 20){ 
        
        cleardevice();
        outtextxy(100, 300, TEXT("4-direction fill"));
        MPLine(10*size, 10*size, 20*size, 10*size, BLACK);
        MPLine(20*size, 10*size, 20*size, 20*size, BLACK);
        MPLine(20*size, 20*size, 10*size, 20*size, BLACK);
        MPLine(10*size, 20*size, 10*size, 10*size, BLACK);
        SeedFill_4(15*size, 15*size, BLACK, LIGHTBLUE);

        outtextxy(400, 300, TEXT("8-direction fill"));
        MPLine(10 * size+200, 10 * size, 20 * size+200, 10 * size, BLACK);
        MPLine(20 * size+200, 10 * size, 20 * size+200, 20 * size, BLACK);
        MPLine(20 * size+200, 20 * size, 10 * size+200, 20 * size, BLACK);
        MPLine(10 * size+200, 20 * size, 10 * size+200, 10 * size, BLACK);
        SeedFill_8(15 * size+200, 15 * size, BLACK, LIGHTGREEN);
        size++;

        outtextxy(200, 400, TEXT("press a key"));
        getch();
    }
}

//��������߱���亯��
void pg18()
{
    setbkmode(TRANSPARENT);
    int size = 20;
    double angle = 19.16-pi/30;
    while (size < 60) {
        int poly[12] = {
        300 + 2 * size + 100 * cos(angle/2), 400 - 7 * size - 110 * sin(angle/7),
        300 + 5 * size - 100 * cos(angle/3), 400 - 9 * size + 120 * sin(angle/6),
        300 + 10 * size + 100 * cos(angle/4), 400 - 6 * size + 130 * cos(angle/5),
        300 + 7 * size - 150 * cos(angle/5), 400 - 1 * size - 140 * cos(angle/4),
        300 + 6 * size + 150 * cos(angle/6), 400 - 4 * size + 150 * sin(angle/3),
        300 + 3 * size - 150 * cos(angle/7), 400 - 2 * size + 160 * sin(angle/2)
        };
        /*int poly[8] = {
            100,100,
            500,100,
            500,500,
            100,500
        };*/
        cleardevice();
        OELFill(poly, 6, LIGHTBLUE);
        for (int i = 0; i < 6; i++) {
            MPCircle(poly[i * 2], poly[i * 2 + 1], 2, LIGHTRED);
            SeedFill_4(poly[i * 2], poly[i * 2 + 1], LIGHTRED, LIGHTRED);
            setcolor(LIGHTRED);
            TCHAR s[5];
            _stprintf_s(s, _T("%d"), i);
            outtextxy(poly[i * 2] + 5, poly[i * 2 + 1] - 5, s);
        }
        
        for (int i = 0; i < 6; i++) {
            printf("%d %d\n", poly[i*2],poly[i*2+1]);
        }
        angle += pi / 30;
        
        getch();
    }
    
}

//���Ա�Ե��־��亯��
void pg19()
{
    setbkmode(TRANSPARENT);
    int size = 20;
    double angle = 0;
    while (size < 60) {
        int poly[12] = {
        300 + 2 * size + 100 * cos(angle/11), 400 - 7 * size - 110 * sin(angle/2),
        300 + 5 * size - 100 * cos(angle/13), 400 - 9 * size + 120 * sin(angle/3),
        300 +10 * size + 100 * cos(angle/7), 400 - 6 * size + 130 * cos(angle/5),
        300 + 7 * size - 150 * cos(angle/5), 400 - 1 * size - 140 * cos(angle/7),
        300 + 6 * size + 150 * cos(angle/3), 400 - 4 * size + 150 * sin(angle/11),
        300 + 3 * size - 150 * cos(angle/2), 400 - 2 * size + 160 * sin(angle/13)
        };
        cleardevice();
        EFFill(poly, 6, LIGHTBLUE);
        for (int i = 0; i < 6; i++) {
            MPCircle(poly[i * 2], poly[i * 2 + 1], 2, LIGHTRED);
            SeedFill_4(poly[i * 2], poly[i * 2 + 1], LIGHTRED,LIGHTRED);
            setcolor(LIGHTRED);
            TCHAR s[5];
            _stprintf_s(s, _T("%d"), i);
            outtextxy(poly[i * 2] + 5, poly[i * 2 + 1] - 5, s);
        }
        angle += pi / 30;
        getch();
    }
}

//����դ����Ե��亯��
void pg20()
{
    BeginBatchDraw();
    setbkmode(TRANSPARENT);
    int size = 20;
    double angle = 0;
    while (size < 60) {
        int poly[12] = {
        300 + 2 * size + 100 * cos(angle / 11), 400 - 7 * size - 110 * sin(angle / 2),
        300 + 5 * size - 100 * cos(angle / 13), 400 - 9 * size + 120 * sin(angle / 3),
        300 + 10 * size + 100 * cos(angle / 7), 400 - 6 * size + 130 * cos(angle / 5),
        300 + 7 * size - 150 * cos(angle / 5), 400 - 1 * size - 140 * cos(angle / 7),
        300 + 6 * size + 150 * cos(angle / 3), 400 - 4 * size + 150 * sin(angle / 11),
        300 + 3 * size - 150 * cos(angle / 2), 400 - 2 * size + 160 * sin(angle / 13)
        };
        cleardevice();
        EFFill_Fence(poly, 6, LIGHTBLUE);
        for (int i = 0; i < 6; i++) {
            MPCircle(poly[i * 2], poly[i * 2 + 1], 2, LIGHTRED);
            SeedFill_4(poly[i * 2], poly[i * 2 + 1], LIGHTRED, LIGHTRED);
            setcolor(LIGHTRED);
            TCHAR s[5];
            _stprintf_s(s, _T("%d"), i);
            outtextxy(poly[i * 2] + 5, poly[i * 2 + 1] - 5, s);
        }
        angle += pi / 30;
        FlushBatchDraw();
        getch();
    }
    EndBatchDraw();
}

//����ͼ�����
void pg21()
{
    SetFillPattern((BYTE*)"\x5a\x2d\x96\x4b\xa5\xd2\x69\xb4");
    pg17();
    pg18();
}

//���Դ��ڲü�ֱ��
void pg22()
{
    BeginBatchDraw();
    double angle = 0, size = 1;
    char op = 'a';
    int vx = 0, vy = 0, lineCnt = 0;
    int lines[10000];
    bool drawFlag = 0;
    while (1) {
        cleardevice();
        SetView(vx, vy, 200*size + vx, 100*size + vy);
        setcolor(RGB(200, 200, 200));
        for (int i = 0; i < lineCnt; i++) {
            DDALine(lines[i * 4], lines[i * 4 + 1], lines[i * 4 + 2], lines[i * 4 + 3], RGB(200, 200, 255));
        }
        rectangle(vx, vy, 200 * size + vx, 100*size + vy);
        for (int i = 0; i < lineCnt; i++) {
            ViewClipLine(lines[i * 4], lines[i * 4 + 1], lines[i * 4 + 2], lines[i * 4 + 3], RED);
        }

        ExMessage msg;
        peekmessage(&msg);
        vx = msg.x;
        vy = msg.y;
        int temp[4];
        
        if (drawFlag) {
            MPLine(temp[0], temp[1], vx, vy, RGB(150, 255, 150));
        }
        if (!msg.lbutton && drawFlag) {
            drawFlag = 0;
            if (msg.x >= 0 && msg.x < WINW && msg.y >= 0 && msg.y < WINH) {
                temp[2] = msg.x;
                temp[3] = msg.y;
                for (int i = 0; i < 4; i++) {
                    lines[lineCnt * 4 + i] = temp[i];
                }
                lineCnt++;
            }
        }
        if (msg.lbutton && !drawFlag) {
            drawFlag = 1;
            temp[0] = msg.x;
            temp[1] = msg.y;
        }
        size += msg.wheel * 1e-5;
        FlushBatchDraw();
    }
    EndBatchDraw();
}

//���Զ���βü�
void pg23()
{
    BeginBatchDraw();
    double angle = 0, size = 1;
    char op = 'a';
    int vx = 0, vy = 0, lineCnt = 0;
    int lines[10000] = { 0 };
    int temp[4] = { 0 };
    bool drawFlag = 0;
    bool change = 0;
    while (1) {
        int poly[12] = {
        300 + cos(angle * 7) * 2 * 20, 200 + sin(angle * 1) * 7 * 20,
        300 + cos(angle * 6) * 5 * 20, 200 + sin(angle * 2) * 9 * 20,
        300 + cos(angle * 5) * 10 *20, 200 + sin(angle * 3) * 6 * 20,
        300 + cos(angle * 4) * 7 * 20, 200 + sin(angle * 4) * 1 * 20,
        300 + cos(angle * 3) * 6 * 20, 200 + sin(angle * 5) * 4 * 20,
        300 + cos(angle * 2) * 3 * 20, 200 + sin(angle * 6) * 2 * 20
        };
        cleardevice();
        SetView(vx, vy, 200 * size + vx, 100 * size + vy);
        setcolor(RGB(200, 200, 200));
        for (int i = 0; i < lineCnt; i++) {
            DDALine(lines[i * 4], lines[i * 4 + 1], lines[i * 4 + 2], lines[i * 4 + 3], RGB(200, 200, 255));
        }
        drawpoly(6, poly);
        rectangle(vx, vy, 200 * size + vx, 100 * size + vy);
        for (int i = 0; i < lineCnt; i++) {
            ViewClipLine(lines[i * 4], lines[i * 4 + 1], lines[i * 4 + 2], lines[i * 4 + 3], RED);
        }
        ViewClipPolygon(poly, 6, RED);

        ExMessage msg;
        peekmessage(&msg,EX_MOUSE);
        if(msg.x >= 0 && msg.y >= 0)
        { 
            vx = msg.x;
            vy = msg.y;
            if (msg.ctrl) {
                change = 1;
            }
            else {
                change = 0;
            }
        

            if (drawFlag) {
                DDALine(temp[0], temp[1], vx, vy, RGB(150, 255, 150));
            }
            if (!msg.lbutton && drawFlag) {
                drawFlag = 0;
                if (msg.x >= 0 && msg.x < WINW && msg.y >= 0 && msg.y < WINH) {
                    temp[2] = msg.x;
                    temp[3] = msg.y;
                    for (int i = 0; i < 4; i++) {
                        lines[lineCnt * 4 + i] = temp[i];
                    }
                    lineCnt++;
                }
            }
            if (msg.lbutton && !drawFlag) {
                drawFlag = 1;
                temp[0] = msg.x;
                temp[1] = msg.y;
            }
            printf("%d\n", lineCnt);
            if (change) angle += 0.001;
            size += msg.wheel * 1e-5;
        }
        FlushBatchDraw();
    }
    EndBatchDraw();
}

//�������λ���
void pg24()
{
    SetLineStyle(1, 0b11101011101011101011101011101011, MD_LS_SQUARE);
    for (int i = 1; i <= 10; i++) {
        SetLineStyle(i);
        DDALine(150, 300, 150 + 100 * cos(2 * pi / 10 * i), 300 + 100*sin(2 * pi / 10 * i), RGB(100+15*i,255-20*i,255-2*i*i));
    }
    SetLineStyle(1, 0b10101010101010101010101010101010, MD_LS_LINE);
    for (int i = 1; i <= 10; i++) {
        SetLineStyle(i);
        MPLine(400, 300, 400 + 100 * cos(2 * pi / 10 * i), 300 + 100 * sin(2 * pi / 10 * i), RGB(100 + 15 * i, 255 - 20 * i, 255 - 2 * i * i));
    }
    SetLineStyle(1, 0b11111111111111111111111111111111, MD_LS_LINE);
    for (int i = 1; i <= 10; i++) {
        SetLineStyle(i);
        BHLine(650, 300, 650 + 100 * cos(2 * pi / 10 * i), 300 + 100 * sin(2 * pi / 10 * i), RGB(100 + 15 * i, 255 - 20 * i, 255 - 2 * i * i));
    }

    SetLineStyle(5, 0b11111111111111111111111111111111, MD_LS_LINE);
    for (int i = 1; i <= 4; i++) {
        SetLineStyle(1 + i);
        MPCircle(150, 500, 25*i, RGB(100 + 25 * i, 255 - 40 * i, 255 - 4 * i * i));
    }
    SetLineStyle(5, 0b10101010101010101010101010101010, MD_LS_SQUARE);
    for (int i = 1; i <= 4; i++) {
        SetLineStyle(1 + i);
        MPCircle(400, 500, 25 * i, RGB(100 + 25 * i, 255 - 40 * i, 255 - 4 * i * i));
    }
    SetLineStyle(5, 0b11111111111111111111111111111111, MD_LS_SQUARE);
    for (int i = 1; i <= 4; i++) {
        SetLineStyle(1 + i);
        MPCircle(650, 500, 25 * i, RGB(100 + 25 * i, 255 - 40 * i, 255 - 4 * i * i));
    }
    SetLineStyle(5, 0b11111111111111111111111111111111, MD_LS_LINE);
    for (int i = 1; i <= 4; i++) {
        SetLineStyle(1 + i);
        MPEllipse(150, 100, 25 * i, 20 * i, RGB(100 + 25 * i, 255 - 40 * i, 255 - 4 * i * i));
    }
    SetLineStyle(5, 0b10101010101010101010101010101010, MD_LS_SQUARE);
    for (int i = 1; i <= 4; i++) {
        SetLineStyle(1 + i);
        MPEllipse(400, 100, 25 * i, 20 * i, RGB(100 + 25 * i, 255 - 40 * i, 255 - 4 * i * i));
    }
    SetLineStyle(5, 0b11111111111111111111111111111111, MD_LS_SQUARE);
    for (int i = 1; i <= 4; i++) {
        SetLineStyle(1 + i);
        MPEllipse(650, 100, 25 * i, 20 * i, RGB(100 + 25 * i, 255 - 40 * i, 255 - 4 * i * i));
    }
    
}

//====================������=======================

//���Ա任���������������
void pg25()
{
    Canvas canvas(WINW, WINH);
    int dx = 400, dy = 300;
    BeginBatchDraw();
    double scale = 0.005;
    while (1) {
        cleardevice();
        canvas.SetAxis(dx, dy, scale);
        canvas.DrawAxis();
        cout << "ƽ�Ʊ任" << endl;
        cout << "����" << Mat3_Translation(1, 1);
        cout << "������" << Vector3({ 2,3,1 }) << endl;
        cout << "�����" << Vector3({ 2,3,1 }) * Mat3_Translation(1, 1) << endl;
        canvas.DrawPoint(Vector3({ 2,3,1 }));
        canvas.DrawPoint(Vector3({ 2,3,1 }) * Mat3_Translation(1, 1));
        cout << endl;

        cout << "�����任" << endl;
        cout << "����" << Mat3_Scaling(2, 2);
        cout << "������" << Vector3({ 2,3,1 }) << endl;
        cout << "�����" << Vector3({ 2,3,1 }) * Mat3_Scaling(2, 2) << endl;
        canvas.DrawPoint(Vector3({ 2,3,1 }));
        canvas.DrawPoint(Vector3({ 2,3,1 }) * Mat3_Scaling(2, 2));
        cout << endl;

        cout << "��ת�任" << endl;
        cout << "����" << Mat3_Rotation(scale);
        cout << "������" << Vector3({ 2,3,1 }) << endl;
        cout << "�����" << Vector3({ 2,3,1 }) * Mat3_Rotation(scale) << endl;
        canvas.DrawPoint(Vector3({ 2,3,1 }));
        canvas.DrawPoint(Vector3({ 2,3,1 }) * Mat3_Rotation(scale));
        cout << endl;

        cout << "�ԳƱ任" << endl;
        cout << "����" << Mat3_Relection("y");
        cout << "������" << Vector3({ 2,3,1 }) << endl;
        cout << "�����" << Vector3({ 2,3,1 }) * Mat3_Relection("y") << endl;
        canvas.DrawPoint(Vector3({ 2,3,1 }));
        canvas.DrawPoint(Vector3({ 2,3,1 }) * Mat3_Relection("y"));
        cout << endl;

        cout << "���б任" << endl;
        cout << "����" << Mat3_Shear(1, 0);
        cout << "������" << Vector3({ 2,3,1 }) << endl;
        cout << "�����" << Vector3({ 2,3,1 }) * Mat3_Shear(1, 0) << endl;
        canvas.DrawPoint(Vector3({ 2,3,1 }));
        canvas.DrawPoint(Vector3({ 2,3,1 }) * Mat3_Shear(1, 0));
        cout << endl;
        
        scale *= 1.01;
        FlushBatchDraw();
        /*dx += 1;
        dy += 1;*/
        if (dx >= WINW) {
            dx -= WINW;
        }
            
        if (dy >= WINH) {
            dy -= WINH;
        }
        getch();
    }
    
}

// ����ƽ�Ʊ任
// ��֪��ABC����������ֱ�ΪA(5,10)��B(10,10)��C(8,15)
// �����������X�᷽��ƽ��5��Y����ƽ��-3��ġ�A'B'C'��
void pg26()
{
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.DrawAxis();
    Matrix3n triangle = { {
        5,  10, 1,
        10, 10, 1,
        8,  15, 1
    } };
    canvas.DrawPolygon(triangle);
    triangle = triangle * Mat3_Translation(5, -3);
    canvas.DrawPolygon(triangle);
    EndBatchDraw();
    
}

// ���Ա����任
// ��֪��ABC����������ֱ�ΪA(5, 10)��B(10, 10)��C(8, 15)
// �����������X����Ŵ�2������Y����Ŵ�3����ġ�A'B'C'
void pg27()
{
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.SetAxis(2);
    canvas.DrawAxis();
    Matrix3n triangle = { {
        5,  10, 1,
        10, 10, 1,
        8,  15, 1
    } };
    canvas.DrawPolygon(triangle);
    triangle = triangle * Mat3_Scaling(2, 3);
    canvas.DrawPolygon(triangle);
    EndBatchDraw();

}

// ������ת�任
// ��������������ʱ����ת90��
void pg28()
{
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.DrawAxis();
    Matrix3n triangle = { {
        5,  10, 1,
        10, 10, 1,
        8,  15, 1
    } };
    canvas.DrawPolygon(triangle);
    triangle = triangle * Mat3_Rotation(pi/2);
    canvas.DrawPolygon(triangle);
    EndBatchDraw();
}

// ���ԶԳƱ任
// �����������ηֱ��y�ᣬx�ᣬֱ��y=x��ֱ��y=-x�Գ�
void pg29()
{
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.DrawAxis();
    Matrix3n triangle = { {
            5,  10, 1,
            10, 10, 1,
            8,  15, 1
    } };
    canvas.DrawPolygon(triangle);
    canvas.DrawPolygon(triangle * Mat3_Relection("y"));
    canvas.DrawPolygon(triangle * Mat3_Relection("x"));
    canvas.DrawPolygon(triangle * Mat3_Relection("y=x"));
    canvas.DrawPolygon(triangle * Mat3_Relection("y=-x"));
    
    EndBatchDraw();
}

// ���Դ��б任
// ��֪��ABC����������ֱ�ΪA(10, 26)��B(10, 10)��C(20, 10)
// ��X�᷽�����Y�᷽��Ĵ���ϵ����Ϊ2������б任��ġ�A'B'C'���������ꡣ
void pg30()
{
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.SetAxis(3);
    canvas.DrawAxis();
    Matrix3n triangle = {{
        10,  26, 1,
        10,  10, 1,
        20,  10, 1
    }};
    canvas.DrawPolygon(triangle);
    
    canvas.DrawPolygon(triangle * Mat3_Shear(2, 0));
    canvas.DrawPolygon(triangle * Mat3_Shear(0, 2));
    EndBatchDraw();
}

// ��άͼ�θ��ϱ任1
// 
// ��֪�����θ���������Ϊ(10, 10)��(10, 30)��(30, 15)������������б任����д�����ϱ任����
// (1)��X����ƽ��20����Y����ƽ��15������ԭ����ת90�ȡ�
// (2)��ԭ����ת90�ȣ���X����ƽ��20����Y����ƽ��15��
// (3)��X����Ŵ�2����Y������С3��������ԭ��Գƣ���ԭ����ת180�ȡ�
void pg31()
{
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.SetAxis(3);
    canvas.DrawAxis();
    Matrix3n triangle = {
        3,
        {
            10,  10, 1,
            10,  30, 1,
            30,  15, 1
        }
    };
    canvas.DrawPolygon(triangle);

    Matrix3x3 mat1 = Mat3_Translation(20, 15) * Mat3_Rotation(pi / 2);
    Matrix3x3 mat2 = Mat3_Rotation(pi / 2) * Mat3_Translation(20, 15);
    Matrix3x3 mat3 = Mat3_Scaling(2,1.0/3) * Mat3_Relection("o") * Mat3_Rotation(pi);

    cout << mat1 << mat2 << mat3;

    canvas.DrawPolygon(triangle * mat1);
    Matrix3n TEST = triangle * mat1;
    canvas.DrawPolygon(triangle * mat2);
    TEST = triangle * mat2;
    canvas.DrawPolygon(triangle * mat3);
    TEST = triangle * mat3;
    EndBatchDraw();
}

// ��άͼ�θ��ϱ任
// 1. ���������ת
// 2. ��������������任
// 3. ����������ԳƱ任
// 4. ��������ֱ�߶ԳƱ任
void pg32() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.SetAxis(3);
    canvas.DrawAxis();
    Matrix3n triangle = {
        3,
        {
            10,  10, 1,
            10,  30, 1,
            30,  15, 1
        }
    };
    canvas.DrawPolygon(triangle);
    Matrix3x3 mat1 = Mat3_Rotation({ -15, 15, 1 }, pi / 2);
    Matrix3x3 mat2 = Mat3_Scaling({ 0, 0, 1 }, 2, 2);
    Matrix3x3 mat3 = Mat3_Relection(Vector3({ -5, -5, 1 }));
    Matrix3x3 mat4 = Mat3_Relection(-1,10);
    

    cout << mat1 << mat2 << mat3 << mat4;

    canvas.DrawPolygon(triangle * mat1);
    Matrix3n TEST = triangle * mat1;
    canvas.DrawPolygon(triangle * mat2);
    TEST = triangle * mat2;
    canvas.DrawPolygon(triangle * mat3);
    TEST = triangle * mat3;
    canvas.DrawPolygon(triangle * mat4);
    TEST = triangle * mat4;
    EndBatchDraw();
}

// ���ϱ任����1��
// ��֪��ABC����������ΪA(5, 10)��B(10, 10)��C(10, 5)
// ������������X����ƽ��3��Y����ƽ��2
// �Ƶ�(3, 2)��ʱ����ת90��
// �ٹ���X�����Գ�
// 
// �õ���A��B��C������任����A����B����C�������ꡣ
void pg33() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.DrawAxis();
    Matrix3n triangle = {
        3,
        {
            5,   10, 1,
            10,  10, 1,
            10,  5,  1
        }
    };
    canvas.DrawPolygon(triangle);
    Matrix3x3 mat1 = Mat3_Translation(3,2);
    Matrix3x3 mat2 = Mat3_Rotation({ 3, 2, 1 }, pi/2);
    Matrix3x3 mat3 = Mat3_Relection("x");

    cout << mat1 << mat2 << mat3;

    canvas.DrawPolygon(triangle);
    triangle = triangle * mat1;
    canvas.DrawPolygon(triangle);
    triangle = triangle * mat2;
    canvas.DrawPolygon(triangle);
    triangle = triangle * mat3;
    canvas.DrawPolygon(triangle);
    cout << "�����Σ�" << endl;
    cout << triangle;
    cout << "����" << endl;
    cout << mat1*mat2*mat3;
    EndBatchDraw();
}

// ���ϱ任����2��
// 2������1�е������ι���ֱ��y=3^(1/3)*x+2�ԳƵı任����ͱ任��ĸ���������
void pg34() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.SetAxis(0.6);
    canvas.DrawAxis();
    Matrix3n triangle = {
        3,
        {
            5,   10, 1,
            10,  10, 1,
            10,  5,  1
        }
    };
    canvas.DrawPolygon(triangle);
    Matrix3x3 mat = Mat3_Relection(sqrt(3),2);

    canvas.DrawPolygon(triangle);
    triangle = triangle * mat;
    canvas.DrawPolygon(triangle);
    cout << "�����Σ�" << endl;
    cout << triangle;
    cout << "����" << endl;
    cout << mat;
    EndBatchDraw();
}

// ���ϱ任����3��
// ����1�е������α���A��̶���X����Ŵ�3����Y����Ŵ�2���ı任����ͱ任��Ķ������ꡣ 
void pg35() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.SetAxis(0.6);
    canvas.DrawAxis();
    Matrix3n triangle = {
        3,
        {
            5,   10, 1,
            10,  10, 1,
            10,  5,  1
        }
    };
    canvas.DrawPolygon(triangle);
    Matrix3x3 mat = Mat3_Scaling({ 5,10,1 }, 3, 2);

    canvas.DrawPolygon(triangle);
    triangle = triangle * mat;
    canvas.DrawPolygon(triangle);
    cout << "�����Σ�" << endl;
    cout << triangle;
    cout << "����" << endl;
    cout << mat;
    EndBatchDraw();
}

//������άͼ��ƽ�ơ����š��������������ž���
void pg36() {
    Vector4 v = { 2,5,2,1 };
    cout << v << endl;

    cout << "ƽ��(-1,-2,-3)" << endl;
    v = v * Mat4_Translation(-1, -2, -3);
    cout << v << endl << endl;

    cout << "����(2,2,2)" << endl;
    v = v * Mat4_Scaling(2, 2, 2);
    cout << v << endl << endl;
    
    cout << "��(1,1,1)Ϊ��������(2,2,2)" << endl;
    v = v * Mat4_Scaling({1,1,1,1}, 2, 2, 2);
    cout << v << endl << endl;
    
}
//������άͼ����ת��������ֱ����ת����
void pg37() {
    Vector4 v = { 2,5,2,1 };
    cout << v << endl;

    cout << "��x����ת" << endl;
    v = v * Mat4_Rotation(pi/2,"x");
    cout << v << endl << endl;

    cout << "��y����ת" << endl;
    v = v * Mat4_Rotation(pi / 2, "y");
    cout << v << endl << endl;

    cout << "��z����ת" << endl;
    v = v * Mat4_Rotation(pi / 2, "z");
    cout << v << endl << endl;

    cout << "��ֱ����ת" << endl;
    v = v * Mat4_Rotation({ 0,0,0,1 }, { 1,1,1,1 }, pi / 2);
    cout << v << endl << endl;
}
//���ԶԳƾ���
void pg38() {
    Vector4 v = { 2,5,2,1 };
    cout << v << endl;

    cout << "��o�Գ�" << endl;
    v = v * Mat4_Reflection("o");
    cout << v << endl << endl;

    cout << "��x��Գ�" << endl;
    v = v * Mat4_Reflection("x");
    cout << v << endl << endl;

    cout << "��y��Գ�" << endl;
    v = v * Mat4_Reflection("y");
    cout << v << endl << endl;

    cout << "��z��Գ�" << endl;
    v = v * Mat4_Reflection("z");
    cout << v << endl << endl;

    cout << "��xoy��Գ�" << endl;
    v = v * Mat4_Reflection("xoy");
    cout << v << endl << endl;

    cout << "��xoz��Գ�" << endl;
    v = v * Mat4_Reflection("xoz");
    cout << v << endl << endl;

    cout << "��yoz��Գ�" << endl;
    v = v * Mat4_Reflection("yoz");
    cout << v << endl << endl;
}
//���Դ��о���
void pg39() {
    Vector4 v = { 2,5,2,1 };
    cout << v << endl;

    cout << "��x�����(2,2)" << endl;
    v = v * Mat4_Shear(2,2,"x");
    cout << v << endl << endl;

    cout << "��y�����(2,2)" << endl;
    v = v * Mat4_Shear(2, 2, "y");
    cout << v << endl << endl;

    cout << "��z�����(2,2)" << endl;
    v = v * Mat4_Shear(2, 2, "z");
    cout << v << endl << endl;
}

//��ά����任ϰ��1��һ������׶ABCD�ĸ���������ֱ�ΪA(3, 1, 0)��B(3, 5, 0)��C(1, 4, 0)��D(2, 3, 3)
//���侭�����б任������������׶A��B��C��D��������λ�á�
// (a) ��X��Y��Z�����Ϸֱ��ƶ�2��3��5��
// (b) ��X��Y�����Ϸֱ�Ŵ�2������Z�����ϷŴ�3����
void pg40() {
    Matrix4n pyramid = { {
        3, 1, 0, 1,
        3, 5, 0, 1,
        1, 4, 0, 1,
        2, 3, 3, 1
    } };
    cout << pyramid << endl;

    cout << "��X��Y��Z�����Ϸֱ��ƶ�2��3��5" << endl;
    cout << pyramid * Mat4_Translation(2,3,5) << endl << endl;

    cout << "��X��Y�����Ϸֱ�Ŵ�2������Z�����ϷŴ�3����" << endl;
    cout << pyramid * Mat4_Scaling(2, 2, 3) << endl << endl;
}
//��ά����任ϰ��2����֪������ABCDEF������Ϊ
//A(0, 0, 0)��B(20, 0, 0), C(0, 10, 0)��D(0, 0, 10)��E(20, 0, 10)��F(0,10,10)
//�ֱ���������ABCDEF��X��Y��Z����������ת90�Ⱥ������������
void pg41() {
    Matrix4n pyramid = { {
        0,  0,  0,  1,
        20, 0,  0,  1,
        0,  10, 0,  1,
        0,  0,  10, 1,
        20, 0,  10, 1,
        0,  10, 10, 1
    } };
    cout << pyramid << endl;

    cout << "��X����ת" << endl;
    cout << pyramid * Mat4_Rotation(pi / 2, "x") << endl << endl;

    cout << "��Y����ת" << endl;
    cout << pyramid * Mat4_Rotation(pi / 2, "y") << endl << endl;

    cout << "��Z����ת" << endl;
    cout << pyramid * Mat4_Rotation(pi / 2, "z") << endl << endl;
}

//��������͸��
void pg42() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.DrawAxis();
    Mesh cube;
    cube.vertexs = Matrix4n({
        0,  0,  0,  1,  //0
        10, 0,  0,  1,  //1
        0,  10, 0,  1,  //2
        10, 10, 0,  1,  //3
        0,  0,  10,  1, //4
        10, 0,  10,  1, //5
        0,  10, 10,  1, //6
        10, 10, 10,  1  //7
    });
    cube.faces = {
        {0, 1, 3, 2}, //��
        {4, 5, 7, 6}, //��
        {0, 1, 5, 4}, //��
        {2, 3, 7, 6}, //��
        {1, 3, 7, 5}, //ǰ
        {0, 2, 6, 4}  //��
    };
    
    cout << (cube * Mat4_Rotation(pi / 4, "z") * Mat4_Rotation(pi / 4, "x")).vertexs;
    cout << (cube * Mat4_Rotation(pi / 4, "z")).vertexs;
    canvas.Mesh_Render(cube * Mat4_Rotation(pi / 4, "z") * Mat4_Rotation(pi / 4, "x") * Mat4_Translation(10,0,0));
    canvas.Mesh_Render(cube * Mat4_Rotation(pi / 4, "z") * Mat4_Translation(-10, 0, 0));
    
    EndBatchDraw();
}

//����1��͸��
void pg43() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    Mesh cube;
    cube.vertexs = { {
        0,  0,  0,  1,  //0
        10, 0,  0,  1,  //1
        0,  10, 0,  1,  //2
        10, 10, 0,  1,  //3
        0,  0,  10,  1, //4
        10, 0,  10,  1, //5
        0,  10, 10,  1, //6
        10, 10, 10,  1  //7
    } };
    cube.faces = {
        {0, 1, 3, 2}, //��
        {4, 5, 7, 6}, //��
        {0, 1, 5, 4}, //��
        {2, 3, 7, 6}, //��
        {1, 3, 7, 5}, //ǰ
        {0, 2, 6, 4}  //��
    };
    ExMessage msg;
    while (1) {
        cleardevice();

        canvas.DrawAxis();
        peekmessage(&msg, EX_MOUSE);
        double x, y;
        x = ((double)msg.x - WINW/2) / 10;
        y = -((double)msg.y - WINH/2) / 10;
        //cout << (cube * Mat4_Translation(0, -10, 0) * Mat4_1PointProjection(10)).vertexs;
        canvas.Mesh_Render(cube * Mat4_Translation(x, -10, y) * Mat4_1PointProjection(20));
        FlushBatchDraw();
    }

    EndBatchDraw();
}

//��������͸��
void pg44() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    Mesh cube;
    cube.vertexs = { {
        0,  0,  0,  1,  //0
        10, 0,  0,  1,  //1
        0,  10, 0,  1,  //2
        10, 10, 0,  1,  //3
        0,  0,  10,  1, //4
        10, 0,  10,  1, //5
        0,  10, 10,  1, //6
        10, 10, 10,  1  //7
    } };
    cube.faces = {
        {0, 1, 3, 2}, //��
        {4, 5, 7, 6}, //��
        {0, 1, 5, 4}, //��
        {2, 3, 7, 6}, //��
        {1, 3, 7, 5}, //ǰ
        {0, 2, 6, 4}  //��
    };
    ExMessage msg;
    while (1) {
        cleardevice();

        canvas.DrawAxis();
        peekmessage(&msg, EX_MOUSE);
        double x, y;
        x = ((double)msg.x - WINW / 2) / 20;
        y = -((double)msg.y - WINH / 2) / 20;

        canvas.Mesh_Render(cube * Mat4_Translation(-12 + x, -30 - x / 2 - y / 2, -12 + y) * Mat4_3PointProjection(10, 10, 10) * Mat4_Scaling(9, 9, 9));
        FlushBatchDraw();
    }

    EndBatchDraw();
}

//====================������=======================
// 
//����y=f(x)��������(�����ߡ�ȡ������)
void pg45() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.DrawAxis();

    Curve cruve1(-100, 100, [](double x)->double { return x * x / 3; });
    Curve cruve2(-100, 100, [](double x)->double { return round(x); });
    canvas.DrawCruve(cruve1);
    canvas.DrawCruve(cruve2);

    EndBatchDraw();
}

//���Լ��������ߣ�Բ�Ρ������ߡ����ߣ�
void pg46() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.DrawAxis();
    Curve cruve1(0, 2*pi, [](double t)->Vector3 {
        return { 10 * cos(t), 10 * sin(t), 1 };
        });
    Curve cruve2(0, 2 * pi, [](double t)->Vector3 {
        return { 10 * pow(cos(t),3), 10 * pow(sin(t),3), 1 };
        });
    Curve cruve3(0, 2 * pi, [](double t)->Vector3 {
        return { t*cos(t), t * sin(t), 1};
        });
    
    
    canvas.DrawCruve(cruve1);
    canvas.DrawCruve(cruve2);
    canvas.DrawCruve(cruve3);

    EndBatchDraw();
}

//���Բ������̻������ߣ��������ߣ�
void pg47() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.SetAxis(WINW / 10, 9 * WINH / 10, 2);
    canvas.DrawAxis();
    Curve cruve1(0, 4, [](double t)->Vector3 {
        return { 30 * t * cos(pi / 4), 30 * t * sin(pi / 4) - 10 * t * t / 2, 1 };
        });
    Curve cruve2(0, 4, [](double t)->Vector3 {
        return { 30 * t * cos(pi / 5), 30 * t * sin(pi / 4) - 10 * t * t / 2, 1 };
        });

    canvas.DrawCruve(cruve1);
    canvas.DrawCruve(cruve2);

    EndBatchDraw();
}

//���Զ��β����������߻����Լ���Ȩ�ϳ�
void pg48() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.SetAxis(2);
    canvas.DrawAxis();
    Matrix3n points = { {
        10, 5,  1,
        20, 20, 1,
        40, 15, 1,
        50, 30, 1,
        60, 60, 1,
        70, 10, 1
    } };

    bool type = false;
    while (1) {
        cleardevice();
        outtextxy(WINW/2+10, WINH/2+10, TEXT("press a key to switch"));
        canvas.DrawAxis();
        for (int i = 0; i < points.size(); i++) {
            canvas.DrawPoint(points[i]);
        }
        if (type) {
            canvas.DrawCruve(Crv_Quadratic2(points).GetWeighted());
        }
        else {
            canvas.DrawCruve(Crv_Quadratic2(points));
        }
        FlushBatchDraw();
        type ^= 1;
        getchar();
    }
    

    EndBatchDraw();
}

//���Զ��β����������߼Ӷ˵�
void pg49() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.SetAxis(2);
    canvas.DrawAxis();
    Matrix3n points = { {
        10, 5,  1,
        20, 20, 1,
        40, 15, 1,
        50, 30, 1,
        60, 60, 1,
        70, 10, 1
    }};
    for (int i = 0; i < points.size(); i++) {
        canvas.DrawPoint(points[i]);
    }
    int type = 0;
    bool clickFlag = 0;
    while (1) {
        cleardevice();
        canvas.DrawAxis();
        canvas.SetAxis(3);
        outtextxy(canvas.axis.x + 10, canvas.axis.y + 10, TEXT("click to switch mode"));
        ExMessage msg;
        peekmessage(&msg);
        if (msg.lbutton && !clickFlag) {
            type++;
            clickFlag = 1;
            if (type > 2) {
                type = 0;
            }
        }
        if (!msg.lbutton) {
            clickFlag = 0;
        }
        if (type == 0) {
            outtextxy(canvas.axis.x + 10, canvas.axis.y + 30, TEXT("mode 1"));
            double x, y;
            x = msg.x;
            y = msg.y;
            auto pos = canvas.GetPos(points[0]);
            double dx = ((double)msg.x - pos[0]) / 20;
            double dy = -((double)msg.y - pos[1]) / 20;
            Vector3 pMouse = { points[0][0] + dx, points[0][1] + dy, 1 };
            canvas.DrawPoint(pMouse);
            canvas.DrawArrow(points[0], pMouse);
            canvas.DrawCruve(Crv_Quadratic2(points.AddEndPoint((points[0] - pMouse).IgoreZ(), (pMouse - points[0]).IgoreZ())).GetWeighted());
            if (msg.rbutton) {
                Matrix3n points2 = points;
                auto d = pMouse - points[0];
                points2.arrays.insert(points2.arrays.begin(), (points2[1]+d).IgoreZ());
                canvas.DrawCruve(Crv_Quadratic2(points2.AddEndPoint()).GetWeighted());
            }
        }
        else if (type == 1) {
            outtextxy(canvas.axis.x + 10, canvas.axis.y + 30, TEXT("mode 2"));
            canvas.DrawCruve(Crv_Quadratic2(points.AddEndPoint()).GetWeighted());
        }
        else if (type == 2) {
            outtextxy(canvas.axis.x + 10, canvas.axis.y + 30, TEXT("mode 3"));
            canvas.DrawCruve(Crv_Quadratic2(points.MakeRound()).GetWeighted());
        }
        FlushBatchDraw();
    }
    EndBatchDraw();
}
//����Hermite��������
void pg50() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.SetAxis(3);
    canvas.DrawAxis();
    Matrix3n points = { {
        10, 5,  1,
        20, 20, 1,
        40, 15, 1,
        50, 30, 1,
        60, 60, 1,
        70, 10, 1
    } };
    Matrix3n tangents = { {
        10, -30, 0,
        10, -20, 0,
        30, 0, 0,
        40, 20, 0,
        50, 30, 0,
        -60, 60, 0
    } };
    for (int i = 0; i < points.size(); i++) {
        canvas.DrawArrow(points[i], points[i] + 0.3*tangents[i]);
    }
    for (int i = 0; i < points.size(); i++) {
        canvas.DrawPoint(points[i]);
    }
    Curve c = Crv_Hermite(points, tangents);
    canvas.DrawCruve(Crv_Hermite(points, tangents));
   
    EndBatchDraw();
}

//����Cardinal�������߼Ӷ˵�
void pg51() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.SetAxis(3);
    canvas.DrawAxis();
    Matrix3n points = { {
        -70, 70,1,
        -50, 20,1,
        -30, 60,1,
        -10,-40,1,
        0, -20, 1,
        10, 5,  1,
        20, 20, 1,
        50, 30, 1,
        60, 60, 1,
        70, 10, 1
    } };
    ExMessage msg;
    double ts = -1;
    while (1) {
        
        peekmessage(&msg);
        ts = 2.5*((double)msg.x - canvas.w / 2)/canvas.w;
        if (ts > 1) {
            ts = 1;
        }
        if (ts < -1) {
            ts = -1;
        }
        cleardevice();
        canvas.DrawAxis();
        for (int i = 0; i < points.size(); i++) {
            canvas.DrawPoint(points[i]);
        }
        outtextxy(canvas.axis.x + 10, canvas.axis.y + 30, TEXT("Move To Control"));
        TCHAR s[100];
        swprintf_s(s, _T("%.3lf"), ts);
        outtextxy(canvas.axis.x + 10, canvas.axis.y + 50, s);
        canvas.DrawCruve(Crv_Cardinal(points, ts));
        FlushBatchDraw();
    }

    EndBatchDraw();
}

//����Bezier����
void pg52() {
    BeginBatchDraw();

    Canvas canvas(WINW, WINH);
    canvas.SetAxis(3);
    canvas.DrawAxis();
    Matrix3n points = { {
        -70, 70,1,
        -50, 20,1,
        -30, 60,1,
        -10,-40,1,
        0, -20, 1,
        10, 5,  1,
        20, 20, 1,
        50, 30, 1,
        60, 60, 1,
        70, 10, 1,
    } };
    for (int i = 0; i < points.size(); i++) {
        canvas.DrawPoint(points[i]);
    }
    //Curve curve = { 0, 2 * pi, [](double t)->Vector3 {return {10*cos(t), 5*sin(t),1}; }};
    //canvas.DrawCruve(curve);
    
    Curve curve = Crv_BSpline(points,2);
    
    
    canvas.DrawCruve(curve);


    EndBatchDraw();
}
void pg53() {
    BeginBatchDraw();
    Canvas canvas(WINW, WINH);
    canvas.SetAxis(3);
    canvas.DrawAxis();
    Matrix3n points = { {
        -70, 70, 1,
        -50, 20, 1,
        -30, 60, 1,
        -10,-40, 1,
        0, -20,  1,
        10, 5,   1,
        20, 20,  1,
        50, 30,  1,
        60, 60,  1,
        70, 10,  1,
    } };
    for (int i = 0; i < points.size(); i++) {
        canvas.DrawPoint(points[i]);
    }
    canvas.DrawCruve(Crv_BSpline(points,3));

    EndBatchDraw();
}

void mainProgram() 
{
    pg44();
}