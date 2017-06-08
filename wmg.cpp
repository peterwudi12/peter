void changeToNetData(unsigned short *data, int num)
{
	int i;

    for ( i = 0; i < num; i++)
    {
        data[i] = htons(data[i]);
    }
}

