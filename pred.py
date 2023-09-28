#!/usr/bin/python3
# Import modules
import numpy as np
from scipy.stats import poisson

# Define xG and xGA values
home_xg = float(input("Enter home team xG: "))
home_xga = float(input("Enter home team xGA: "))
away_xg = float(input("Enter away team xG: "))
away_xga = float(input("Enter away team xGA: "))

# Define maximum number of goals to consider
max_goals = 5

# Create arrays of possible goals
home_goals = np.arange(max_goals + 1)
away_goals = np.arange(max_goals + 1)

# Create Poisson distributions for home and away teams
home_score_dist = poisson(home_xg) # distribution of goals scored by home team
home_concede_dist = poisson(home_xga) # distribution of goals conceded by home team
away_score_dist = poisson(away_xg) # distribution of goals scored by away team
away_concede_dist = poisson(away_xga) # distribution of goals conceded by away team

# Calculate Poisson probabilities for each possible scoreline
probs = np.outer(home_score_dist.pmf(home_goals) * away_concede_dist.pmf(home_goals), away_score_dist.pmf(away_goals) * home_concede_dist.pmf(away_goals))

# Find the index of the maximum probability
max_index = np.unravel_index(np.argmax(probs), probs.shape)

# Find the corresponding scoreline
max_score = (home_goals[max_index[0]], away_goals[max_index[1]])

# Print the result
print(f"The most probable scoreline is {max_score[0]}-{max_score[1]}")

