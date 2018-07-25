	struct zStack { 
		int d;  //хранимая переменная
		struct zStack *next; //указатель на следующий элемент
	};

	//для инициализации первого элемента стека
	struct zStack* First(int d) {
		struct zStack *pv = calloc(1, sizeof(struct zStack*));
		pv->d = d;
		pv->next = 0;
		return pv;
	}

	//добавление (проталкивание) новых переменных
	void Push(struct zStack **top, int d) {
        struct zStack *pv = calloc(1, sizeof(struct zStack*));
        pv->d = d;
        pv->next = *top;
        *top = pv;
	}

	//извлечь "голову" (последнее добавленное значение)
	int Pop(struct zStack **top) {
		int temp = (*top)->d;
		struct zStack *pv = *top;
		*top = (*top)->next;
        free(pv);
		return temp;
	}