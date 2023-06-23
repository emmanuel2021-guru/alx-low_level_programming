#!/usr/bin/python3

ht_pts = int(input("Home team points: "))
ht_games = int(input("Home team games: "))
at_pts = int(input("Away team points: "))
at_games = int(input("Away team games: "))
h_pts = int(input("Home Points: "))
h_games = int(input("Home games: "))
a_pts = int(input("Away points: "))
a_games = int(input("Away games: "))
h_diff = int(input("Home match difficulty(max: 5): "))
a_diff = int(input("Away match difficulty(max: 5): "))
ht_agg = (ht_pts/(ht_games * 3)) * 3
at_agg = (at_pts/(at_games * 3)) * 3
h_agg = (h_pts/(h_games * 3)) * 2
a_agg = (a_pts/(h_games * 3)) * 2 
h_diff_agg = (1 - (h_diff / 5)) * 5
a_diff_agg = (1 - (a_diff / 5)) * 5
h_prob_agg = ht_agg + h_agg + h_diff_agg
a_prob_agg = at_agg + a_agg + a_diff_agg
h_a_total = (h_prob_agg + a_prob_agg) / 100
h_prob = (h_prob_agg / h_a_total) + 5
a_prob = (a_prob_agg / h_a_total) - 5
print("Home win probability: {}%".format(round(h_prob), 0))
print("Away win probability: {}%".format(round(a_prob), 0))
