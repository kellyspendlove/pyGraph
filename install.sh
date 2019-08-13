# installer script

#git submodule update --init --recursive
#pip install . --ignore-installed --no-cache-dir

rm -rf build
rm -rf dist
pip install . --upgrade --no-deps --force-reinstall --no-cache-dir --user

