/*
// ���ܣ��жϵ��Ƿ��ڶ������
    // ���������ͨ���õ��ˮƽ�������θ��ߵĽ���
    // ���ۣ����߽���Ϊ����������!

    // ������
    // POINT p ָ����ĳ����
    // LPPOINT ptPolygon ����εĸ����������꣨��ĩ����Բ�һ�£�
    // int nCount ����ζ���ĸ���

    public static bool PointInPolygon(Vector2 p, Vector2[] ptPolygon, int nCount)
    {
        int nCross = 0;

        for (int i = 0; i < nCount; i++)
        {
            Vector2 p1 = ptPolygon[i];//��ǰ�ڵ�
            Vector2 p2 = ptPolygon[(i + 1) % nCount];//��һ���ڵ�

            // ��� y=p.y �� p1p2 �Ľ���

            if (p1.y == p2.y) // p1p2 �� y=p0.yƽ��
                continue;

            if (p.y < Mathf.Min(p1.y, p2.y)) // ������p1p2�ӳ�����
                continue;
            if (p.y >= Mathf.Max(p1.y, p2.y)) // ������p1p2�ӳ�����
                continue;

            // ��P����һ��ˮƽ���� �󽻵�� X ���� ------ԭ��: ((p2.y-p1.y)/(p2.x-p1.x))=((y-p1.y)/(x-p1.x))
            //ֱ��kֵ��� ����y=p.y
            double x = (double)(p.y - p1.y) * (double)(p2.x - p1.x) / (double)(p2.y - p1.y) + p1.x;

            if (x > p.x)
                nCross++; // ֻͳ�Ƶ��߽���
        }

        // ���߽���Ϊż�������ڶ����֮�� ---
        return (nCross % 2 == 1);
    }

}
*/
