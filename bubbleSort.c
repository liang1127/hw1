void bubbleSort( const int * array ,int size)				 //���V�`�Ƹ�ƪ��D�`�ƫ���	 
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
