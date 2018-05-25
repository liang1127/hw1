void bubbleSort( const int const * array ,int size)				 //指向常數資料的常數指標	 
{
	void swap( int *element1Ptr, int *element2Ptr);
	int j,n;
	int count;
	for(count=0;count<size-1;count++)
	{
		for(j=0;j<size-1;j++)
		{
			if (array[j]>array[j+1])
			{
				swap(&array[j],&array[j+1]);
			}
		}
	}
	
}
