from collections import Counter

def generateDocument(characters, document):

  if len(characters) < len(document):
    return False

  return Counter(document) <= Counter(characters)