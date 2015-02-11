#!/bin/bash       
for d in examples/*/ ; do
cat <<EOF > $d/package.json
{
  "name": "basic",
  "version": "0.0.0",
  "description": "",
  "main": "index.js",
  "scripts": {
    "test": "echo \"Error: no test specified\" && exit 1"
  },
  "author": "",
  "license": "ISC"
}
EOF
mkdir $d/node_modules
mkdir $d/src
cp $d/*.ino $d/src
ln -s $PWD $d/node_modules/
pushd $d
leo build -b $1
popd
done
