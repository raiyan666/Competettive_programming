# import requests
# import pandas as pd
# from bs4 import BeautifulSoup as bs
# import numpy as np
# def void(this_link):
#
#     response = requests.get(this_link)
#     html_content = response.content
#
#     soup = bs(html_content, "html.parser")
#
#     tables = soup.find_all("table")
#     table_data = []
#     for idx, table in enumerate(tables):
#         table_rows = table.find_all("tr")
#         data = []
#         for row in table_rows:
#             row_data = [cell.get_text(strip=True) for cell in row.find_all(["th", "td"])]
#             data.append(row_data)
#         if data:
#             df = pd.DataFrame(data[1:], columns=data[0])
#             table_data.append(df)
#
#     df["x-coordinate"] = pd.to_numeric(df["x-coordinate"])
#     df["y-coordinate"] = pd.to_numeric(df["y-coordinate"])
#     maximum_x = df["x-coordinate"].max()
#     maximum_y = df["y-coordinate"].max()
#
#     arr = [[" " for _ in range(maximum_x + 1)] for _ in range(maximum_y + 1)]
#
#     for _, row in df.iterrows():
#         x = int(row["x-coordinate"])
#         y = int(row["y-coordinate"])
#         sign = row["Character"]
#         arr[maximum_y-y][x] = sign
#
#
#     arr = np.array(arr)
#     for a in arr:
#         print("".join(a))
# this_link ="https://docs.google.com/document/d/e/2PACX-1vSHesOf9hv2sPOntssYrEdubmMQm8lwjfwv6NPjjmIRYs_FOYXtqrYgjh85jBUebK9swPXh_a5TJ5Kl/pub"
# void(this_link)


import random
import tkinter as tk

# Constants
WINDOW_WIDTH = 300
WINDOW_HEIGHT = 300
CELL_SIZE = 75
NUM_CARDS = 16
MARGIN = 10

CARD_BACKGROUND = "white"
CARD_FOREGROUND = "black"
NORMAL_FONT = ("Helvetica", 24)
FLIPPED_FONT = ("Helvetica", 36)

COLORS = ["red", "yellow", "orange", "green", "blue", "purple"]

# Create the game window
root = tk.Tk()
root.title("Memory Match")
root.geometry(f'{WINDOW_WIDTH}x{WINDOW_HEIGHT}')

frame = tk.Frame(root, bg=CARD_BACKGROUND, padx=MARGIN, pady=MARGIN)
frame.pack(expand=True, fill=tk.BOTH)

cards = []
values = list(range(0, NUM_CARDS // 2)) * 2
random.shuffle(values)

for i in range(0, NUM_CARDS):
    x1 = (MARGIN + MARGIN + i * CELL_SIZE)
    y1 = MARGIN
    x2 = MARGIN + (i + 1) * CELL_SIZE
    y2 = MARGIN + CELL_SIZE
    card = tk.Button(frame, bg=CARD_BACKGROUND, highlightbackground=CARD_BACKGROUND, highlightthickness=0,
                     activebackground=CARD_BACKGROUND, activeforeground=CARD_BACKGROUND,
                     text='🔳', font=NORMAL_FONT, state='disabled')
    card.grid(row=0, column=i, padx=MARGIN, pady=MARGIN)
    cards.append(card)
    card.bind("<Button-1>", lambda event: flip_card(event.widget, values))


def flip_card(card, value):
    card["state"] = "active"
    colors = COLORS
    colors.insert(0, "")
    card["text"] = colors[value]
    card["font"] = FLIPPED_FONT
    global flipped_cards
    flipped_cards.append(card)

    if len(flipped_cards) == 2:
        compare_cards()


flipped_cards = []


def compare_cards():
    if len(flipped_cards) != 2:
        return

    card1 = flipped_cards[0]
    card2 = flipped_cards[1]

    if card1["text"] == card2["text"]:
        card1["bg"] = "lightgreen"
        card2["bg"] = "lightgreen"
        global matches
        matches += 1
    else:
        card1["bg"] = "orange"
        card2["bg"] = "orange"

    TKINTER.after(700, lambda: unflip_cards())


def unflip_cards():
    global flipped_cards
    for card in flipped_cards:
        card["state"] = "disabled"
        card["text"] = '🔳'
        card["bg"] = =CARD_BACKGROUND
    flipped_cards = []


matches = 0

label1 = tk.Label(root, text=" ", font=NORMAL_FONT)
label1["bg"] = "WHITE"
label1.pack()

root.mainloop()
label1.config(text=f'You Matched: {matches}/8')

