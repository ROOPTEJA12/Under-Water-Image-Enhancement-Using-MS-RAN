# Underwater Image Enhancement Using MS-RAN

## Project Overview
This project implements an underwater image enhancement system using **Multi-Scale Residual Attention Network (MS-RAN)**. The goal is to improve the visibility, contrast, and color balance of underwater images, which often suffer from poor lighting and color distortion.

---

## Features
- Enhances underwater images for better visibility
- Preserves natural colors and details
- Implements deep learning-based MS-RAN for superior results
- Supports batch processing of images

---

## Folder Structure
UnderwaterEnhancement/
├── models/ # Pre-trained models or checkpoints
├── nets/ # Network architecture scripts
├── utils/ # Utility scripts (data loading, visualization, etc.)
├── data/ # Sample input images
├── results/ # Output enhanced images
├── .gitignore
└── README.md

yaml
Copy
Edit

---

## Installation
1. Clone the repository:
```bash
git clone https://github.com/ROOPTEJA12/Under-Water-Image-Enhancement-Using-MS-RAN.git
cd Under-Water-Image-Enhancement-Using-MS-RAN
Create a virtual environment (optional but recommended):

bash
Copy
Edit
python -m venv venv
source venv/bin/activate  # Linux/Mac
venv\Scripts\activate     # Windows
Install dependencies:

bash
Copy
Edit
pip install -r requirements.txt
Usage
Place your underwater images in the data/ folder.

Run the enhancement script:

bash
Copy
Edit
python nets/funie.py   # Example script, adjust as per your code
View results in the results/ folder.

Contributions
Feel free to fork the repository and submit pull requests.

For bugs or feature requests, please open an issue.

License
This project is licensed under the MIT License. See the LICENSE file for details.

Contact
Roopteja
Email: roopteja12@gmail.com
GitHub: ROOPTEJA12
