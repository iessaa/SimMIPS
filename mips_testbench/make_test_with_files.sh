TEST=$1
echo $TEST
mkdir -p ./tests/$TEST
ID=0
until [ ! -d "./tests/$TEST/$ID" ]; do
	let "ID=ID+1"
done
mkdir ./tests/$TEST/$ID
touch ./tests/$TEST/$ID/assembly.s
touch ./tests/$TEST/$ID/about.txt
touch ./tests/$TEST/$ID/expectation.txt
echo 'PLACEHOLDER, NOTHING IMPLEMENTED' >./tests/$TEST/$ID/about.txt
