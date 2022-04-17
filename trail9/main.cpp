glBegin(GL_QUADS);
glColor3f(0.0f, 0.5f, 1.0f); // blue water
glVertex2f(1.0f, 0.3f);
glVertex2f(1.0f, -1.0f);
glVertex2f(-1.0f, -1.0f);
glVertex2f(-1.0f, 0.3f);
glEnd();

   glBegin(GL_QUADS);
glColor3ub(105, 105, 105); // black road
glVertex2f(1.0f, 0.35f);
glVertex2f(1.0f, -0.4f);
glVertex2f(-1.0f, -0.4f);
glVertex2f(-1.0f, 0.35f);
glEnd();

    glBegin(GL_QUADS);
glColor3ub(248, 248, 255); // white road
glVertex2f(1.0f, 0.01f);
glVertex2f(1.0f, -0.01f);
glVertex2f(-1.0f, -0.01f);
glVertex2f(-1.0f, 0.01f);
glEnd();

   glBegin(GL_QUADS);
glColor3ub(0, 100, 0); // green
glVertex2f(1.0f, 0.42f);
glVertex2f(1.0f, 0.35f);
glVertex2f(-1.0f, 0.35f);
glVertex2f(-1.0f, 0.42f);
glEnd();