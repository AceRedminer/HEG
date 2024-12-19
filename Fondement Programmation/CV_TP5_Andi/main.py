"""
Fichier principal de l'application : permet de lancer chaque exercice
"""
import tkinter as tk
from tkinter import messagebox
from tkinter import ttk
import subprocess


# Fonction pour exécuter un fichier
def lancer_fichier(nom_fichier):
    try:
        print(f"\nExécution du fichier {nom_fichier} : ")
        subprocess.run(["python", nom_fichier], check=True)

    except subprocess.CalledProcessError as e:
        messagebox.showerror("Erreur", f"Une erreur s'est produite lors de l'exécution de {nom_fichier}: {e}")
    except FileNotFoundError:
        messagebox.showerror("Erreur", f"Le fichier {nom_fichier} est introuvable.")


# Fonction principale pour l'application
def lancerApplication():
    # Création de la fenêtre principale
    fenetre = tk.Tk()
    fenetre.title("TP 05 - Application")
    fenetre.geometry("600x500")
    fenetre.configure(bg="#e6f7ff")

    # Ajout d'un label d'instruction
    label = tk.Label(fenetre, text="Choisissez un fichier à exécuter:", font=("Arial", 16, "bold"), bg="#e6f7ff",
                     fg="#003366")
    label.pack(pady=20)

    # Cadre pour les boutons
    cadre_boutons = tk.Frame(fenetre, bg="#e6f7ff")
    cadre_boutons.pack(pady=20)

    # Style personnalisé pour les boutons
    style = ttk.Style()
    style.configure("TButton", font=("Arial", 12), padding=10, relief="raised", background="#99ccff")

    # Boutons pour exécuter les différents fichiers
    fichiers = ["Ex1_Matrice.py", "Ex2_FrequenceMots.py", "Ex3_GestionBanque.py", "Ex4_Cryptage.py"]

    for fichier in fichiers:
        bouton = ttk.Button(cadre_boutons, text=fichier, style="TButton", command=lambda f=fichier: lancer_fichier(f))
        bouton.pack(pady=5, fill="x", padx=50)

    # Bouton Quitter
    bouton_quitter = ttk.Button(fenetre, text="Quitter", style="TButton", command=fenetre.quit)
    bouton_quitter.pack(pady=20)

    # Lancer la boucle principale de l'application
    fenetre.mainloop()


# Appel de la fonction principale si ce fichier est exécuté directement
if __name__ == "__main__":
    lancerApplication()

