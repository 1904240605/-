/*/// <summary>
       /// �ж�P�Ƿ�����P1,P2Ϊ�ԽǶ���ľ����ڡ�
       /// </summary>
       /// <param name="p1"></param>
       /// <param name="p2"></param>
       /// <param name="p"></param>
       /// <returns></returns>
       public static bool  IsOnRectangle(Point p1, Point p2, Point p)
       {
           double max_x = p1.X > p2.X ? p1.X : p2.X;
           double min_x = p1.X < p2.X ? p1.X : p2.X;
           double max_y = p1.Y > p2.Y ? p1.Y : p2.Y;
           double min_y = p1.Y < p2.Y ? p1.Y : p2.Y;
           if (p.X >= min_x && p.X <= max_x && p.Y >= min_y && p.Y <= max_y)
               return true;
           else
               return false;
       }*/
//ֻҪ�жϸõ�ĺ�������������Ƿ���ھ��ε����ұߺ����±�֮�䡣
