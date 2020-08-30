/*
// 功能：判断点是否在多边形内
    // 方法：求解通过该点的水平线与多边形各边的交点
    // 结论：单边交点为奇数，成立!

    // 参数：
    // POINT p 指定的某个点
    // LPPOINT ptPolygon 多边形的各个顶点坐标（首末点可以不一致）
    // int nCount 多边形定点的个数

    public static bool PointInPolygon(Vector2 p, Vector2[] ptPolygon, int nCount)
    {
        int nCross = 0;

        for (int i = 0; i < nCount; i++)
        {
            Vector2 p1 = ptPolygon[i];//当前节点
            Vector2 p2 = ptPolygon[(i + 1) % nCount];//下一个节点

            // 求解 y=p.y 与 p1p2 的交点

            if (p1.y == p2.y) // p1p2 与 y=p0.y平行
                continue;

            if (p.y < Mathf.Min(p1.y, p2.y)) // 交点在p1p2延长线上
                continue;
            if (p.y >= Mathf.Max(p1.y, p2.y)) // 交点在p1p2延长线上
                continue;

            // 从P发射一条水平射线 求交点的 X 坐标 ------原理: ((p2.y-p1.y)/(p2.x-p1.x))=((y-p1.y)/(x-p1.x))
            //直线k值相等 交点y=p.y
            double x = (double)(p.y - p1.y) * (double)(p2.x - p1.x) / (double)(p2.y - p1.y) + p1.x;

            if (x > p.x)
                nCross++; // 只统计单边交点
        }

        // 单边交点为偶数，点在多边形之外 ---
        return (nCross % 2 == 1);
    }

}
*/
