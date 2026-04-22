#!/usr/bin/env python3
import sys
import random

def main():
    if len(sys.argv) > 1:
        search_term = sys.argv[1]
        responses = [
            f"Новости о {search_term}: Важное событие!",
            f"{search_term}: Аналитика и прогнозы.",
            f"Срочно! {search_term} в топе новостей.",
        ]
        print(random.choice(responses))
    else:
        print("Укажите поисковый запрос")

if __name__ == "__main__":
    main()


