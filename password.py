import base64 
from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives import hashes
from cryptography.hazmat.primitives.kdf.pbkdf2 import PBKDF2HMAC

pass_from_user = input("Please enter your password: ")
password = pass_from_user.encode()

mysalt = b'\xf3\xce\xf2!\xde\x16\xe1K5\xeb\xd4\xdc\xfe\x8c\xd5\xc4'

kdf = PBKDF2HMAC (algorithm = hashes.SHA256, length = 32, salt = mysalt, iterations = 100000, backend = default_backend())


key = base64.urlsafe_b64decode(kdf.derive(password))

print(key.decode())