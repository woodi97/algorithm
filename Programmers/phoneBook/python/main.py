phone_book = ["123","456","789"]
# phone_book = ["119", "97674223", "1195524421"]
# phone_book = ["12","123","1235","567","88"]
phone_book.sort()

def dup_literal_checker(data):
    match_counter = 0
    answer = True
    for i in range(len(data)):
        cpr = list(data[i])
        for j in range(1, len(data)):
            # 첫문자가 다르면 스킵
            if cpr[0] != data[j][0]:
                continue;
            # 현재 문자가 비교하는 문자보다 크면 스킵
            if len(cpr) > len(data[j]):
                continue;
            for k in range(len(cpr)):
                if cpr[k] == data[j][k]:
                    match_counter += 1
            if match_counter == len(cpr):
                return False
        return answer

import timeit
s = timeit.default_timer();
print(dup_literal_checker(phone_book))
e = timeit.default_timer();
print("%f spent"%(e-s))