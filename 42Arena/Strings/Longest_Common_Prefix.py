def longestCommonPrefix(words: list) -> str:
    if not words:
      return ""

    prefix = words[0]
    i = 1

    while i < len(words):

      while words[i].find(prefix) != 0:
        prefix = prefix[:-1]

        if not prefix:
          return ""

      i += 1

    return prefix