import pickle
import os.path


def load(path: str) -> list:
    """
    Load a pickled file.
    :param path: str - Path to the pickle file.
    :return: The variable stored in the pickle file, or an empty list if the file does not exist or cannot be loaded.
    """
    try:
        if os.path.isfile(path):  # Vérifie si le fichier existe
            with open(path, "rb") as filin:
                data = pickle.load(filin)
                return data if isinstance(data, list) else []  # Vérifie que les données sont bien une liste
        else:
            print(f"Erreur : Le fichier '{path}' est introuvable.")
            return []
    except (pickle.UnpicklingError, EOFError) as e:
        print(f"Erreur : Impossible de décompresser le fichier pickle '{path}'. {e}")
        return []
    except Exception as e:
        print(f"Erreur : Une erreur inattendue est survenue. {e}")
        return []



def get_client_header() -> list:
    """
    load the header of the client table
    :return: a list with the client table header
    """
    data_file: str = "Ressources/database/header.pkl"
    return load(data_file)


def get_clients() -> list:
    """
    load the client data as a list of dictionaries
    :return: a list of dictionaries with the client's data
    """
    data_file: str = "Ressources/database/clients.pkl"
    return load(data_file)

def get_shares() -> list:
    """
    load the shares data as a list of dictionaries
    :return: a list of dictionaries with the shares data
    """
    data_file: str = "Ressources/database/shares.pkl"
    return load(data_file)


