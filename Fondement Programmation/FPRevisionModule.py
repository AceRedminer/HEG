def afficher_etudiants(_etudiants: list):
    for etudiant in _etudiants:
        print(etudiant, end=", ")

def afficher_sujets(_sujets: list):
    for sujet in _sujets:
        print(sujet, end=", ")

def connaitre_notes(_etudiants: list, _etudiant: str, _notes: list) -> list: 
    idx: int = _etudiants.index(_etudiant)
    notes_etudiant: list = []
    for note in _notes:
        notes_etudiant.append(note[idx])

    return notes_etudiant
