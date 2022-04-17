GLfloat position3 = 0.0f; //Cloud1
GLfloat speed3 = 0.003f;

GLfloat position4 = 0.0f; //Cloud2
GLfloat speed4 = 0.003f;
 

  if(position3 >1.0){
  position3 = -1.0f;
  position3 += speed3;
}

  if(position4 >1.0){
  position4 = -1.0f;
  position4 += speed4;
}

//moon
 glClear(GL_COLOR_BUFFER_BIT);
 glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

int f;

    GLfloat f1=0.15f;
    GLfloat g1= 0.8f;
    GLfloat h1 = 0.10f;
    int ftringle2=40;

    GLfloat fp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(230,230, 250);
    glVertex2f (f1,g1);
    for(f= 0;f<=ftringle2; f++)
    {
        glVertex2f (
                    f1+(h1*cos(f*fp2/ftringle2)),
                    g1+(h1*sin(f*fp2/ftringle2))
                    );


    }
    glEnd ();

    //cloud1
glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
int i;

    GLfloat p1=0.58f;
     GLfloat q1= 0.85f; 
     GLfloat r1 = 0.08f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    int j;

    GLfloat pp1=0.45f;
    GLfloat qq1= 0.85f;
    GLfloat rr1 = 0.12f;
    int ttringle2=40;

    GLfloat ttp2 =2.0f *PI;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255, 255, 255);
    glVertex2f (pp1,qq1);
    for(j= 0;j<=tringle2; j++)
    {
        glVertex2f (
                    pp1+(rr1*cos(j*ttp2/tringle2)),
                    qq1+(rr1*sin(j*ttp2/tringle2))
                    );


    }
    glEnd ();

    int k;

    GLfloat ppp1=0.33f; 
    GLfloat qqq1= 0.85f; 
    GLfloat rrr1 = 0.08f;
    int tttringle2=40;

    GLfloat tttp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255, 255, 255);
    glVertex2f (ppp1,qqq1);
    for(k= 0;k<=tttringle2; k++)
    {
        glVertex2f (
                    ppp1+(rrr1*cos(k*tttp2/tttringle2)),
                    qqq1+(rrr1*sin(k*tttp2/tttringle2))
                    );


    }
    glEnd ();
    glPopMatrix();





    glPushMatrix();
glTranslatef(-position4,0.0f, 0.0f);
int l;

    GLfloat l1=-0.52f;
    GLfloat m1= 0.7f;
    GLfloat n1 = 0.08f;
    int ltringle2=40;

    GLfloat lp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (l1,m1);
    for(l= 0;l<=ltringle2; l++)
    {
        glVertex2f (
                    l1+(n1*cos(l*lp2/ltringle2)),
                    m1+(n1*sin(l*lp2/ltringle2))
                    );


    }
    glEnd ();

    int m;

    GLfloat ppm1=-0.65f;
     GLfloat qqm1= 0.7f; 
     GLfloat rrm1 = 0.12f;
    int tmtringle2=40;

    GLfloat mp2 =2.0f *PI;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (ppm1,qqm1);
    for(m= 0;m<=tmtringle2; m++)
    {
        glVertex2f (
                    ppm1+(rrm1*cos(m*mp2/tmtringle2)),
                    qqm1+(rrm1*sin(m*mp2/tmtringle2))
                    );


    }
    glEnd ();

int n;

    GLfloat pppn1=-0.76f;
    GLfloat qqqn1= 0.7f;
    GLfloat rrrn1 = 0.08f;
    int ttntringle2=40;

    GLfloat np2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (pppn1,qqqn1);
    for(n= 0;n<=ttntringle2; n++)
    {
        glVertex2f (
                    pppn1+(rrrn1*cos(n*np2/ttntringle2)),
                    qqqn1+(rrr1*sin(n*np2/ttntringle2))
                    );


    }
    glEnd ();
    glPopMatrix();