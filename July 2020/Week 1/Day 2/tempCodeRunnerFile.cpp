REP(i, 0, n)
        {
            if (g[i].second == 0)
            {
                flag = 1;
                x = i + 1;
            }
            if (b[i].second == 0)
            {
                flag = 1;
                y = i + 1;
            }
        }