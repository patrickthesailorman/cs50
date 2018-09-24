from nltk.tokenize import sent_tokenize;

def lines(a, b):
    """Return lines in both a and b"""
    list = []
    linesA = a.splitlines()
    linesB = b.splitlines()
    for i in range(linesA):
        for j in range(linesB):
            if linesA[i] == linesB[j]:
                list.append(linesA[i])
    # TODO if list includes linesA[i] ignore (no duplicates)
    return list


def sentences(a, b):
    """Return sentences in both a and b"""
    list = []
    sentencesA = a.splitlines()
    sentencesB = b.splitlines()
    for i in range(linesA):
        for j in range(linesB):
            if sentencesA[i] == sentencesB[j]:
                list.append(sentencesA[i])
    # TODO if list includes sentencesA[i] ignore (no duplicates)
    return []


def substrings(a, b, n):
    """Return substrings of length n in both a and b"""

    # TODO
    return []
