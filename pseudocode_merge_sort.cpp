MergeSort(A, left, right)
    if right - left <= 1 then
        return 0

    mid = left + (right - left) / 2

    langkah = MergeSort(A, left, mid)
    langkah = langkah + MergeSort(A, mid, right)
    langkah = langkah + Merge(A, left, mid, right)

    return langkah


Merge(A, left, mid, right)
    buat array sementara temp
    i = left
    j = mid
    langkah = 0

    while i < mid and j < right do
        langkah = langkah + 1

        if A[i] <= A[j] then
            masukkan A[i] ke temp
            i = i + 1
        else
            masukkan A[j] ke temp
            j = j + 1

    masukkan sisa elemen bagian kiri ke temp
    masukkan sisa elemen bagian kanan ke temp

    salin temp ke A

    return langkah
