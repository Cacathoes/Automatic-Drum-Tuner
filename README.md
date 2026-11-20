# Automatic Drum Tuner

**Automatic Drum Tuner** est un accordeur de batterie automatique, portable et open source (licence GPL), conçu dans le cadre d'un projet de Terminale STI2D (spécialité Systèmes d'Information et Numérique).

L'objectif est de permettre à n'importe qui — débutant, technicien, organisateur de concert ou batteur confirmé — d'accorder rapidement et précisément un fût de batterie en sélectionnant simplement la gamme souhaitée.

---

## Concept et fonctionnement

Plutôt que d'immobiliser un moteur sur chaque tirant, le système prend la forme d'un **boîtier compact et nomade** qui agit sur **un tirant à la fois**. L'utilisateur le positionne sur un tirant, lance l'accordage, puis le déplace de tirant en tirant pour équilibrer l'ensemble de la peau.

1. **Sélection sur interface embarquée :** via un écran et des boutons physiques, l'utilisateur choisit la gamme / l'accordage cible avec des indications claires et accessibles sans expertise musicale ou technique.
2. **Double acquisition (acoustique + mécanique) :**
   - **Microphone :** analyse la fréquence fondamentale émise lors de la frappe sur la peau.
   - **Capteur de tension / résistance mécanique :** mesure la contrainte mécanique exercée sur la peau/le tirant afin d'affiner le réglage et de sécuriser le serrage.
3. **Serrage automatisé :** un microcontrôleur pilote l'actionneur motorisé pour serrer et ajuster automatiquement le tirant jusqu'à la cible définie.

---

## Points clés du projet

- **Portable et autonome :** format compact, alimentation sur batterie rechargeable via **USB-C**.
- **Accessible à tous :** navigation simple par écran et boutons, guidage étape par étape.
- **Économique et reproductible :** conçu pour un budget maximal de **75 € TTC**, avec pièces mécaniques imprimables en 3D (`.STL` / `.STEP`).
- **100 % Open Source :** code source, schémas électroniques et fichiers mécaniques publiés sous licence **GPL**.

---

## Public visé

- **Organisateurs de concerts, régisseurs et techniciens son :** préparation rapide d'une batterie entre plusieurs passages sur scène.
- **Musiciens débutants :** accordage fiable sans avoir à maîtriser le réglage à l'oreille.
- **Batteurs confirmés et professionnels :** outil nomade pour vérifier et homogénéiser un fût en répétition ou en tournée.
