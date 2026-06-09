InsertionSort(A, n)
    langkah = 0

    for i = 1 to n - 1 do
        key = A[i]
        j = i - 1

        while j >= 0 do
            langkah = langkah + 1

            if A[j] > key then
                A[j + 1] = A[j]
                j = j - 1
            else
                break

        A[j + 1] = key

    return langkah
