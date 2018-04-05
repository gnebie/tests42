if [ $1 ]
then
	echo " " > tmp1;
	echo " " > tmp2;
	echo "\033[91mMakefile : \033[0m;";
	cd .. && make && cd -;
	echo "\033[92mDébut de l'affichage des différences : [";
	for file in $1*
	do
		echo "\033[0m"$file
		../ft_otool $file > tmp1;
		otool -t $file > tmp2;
		echo "\033[31m"
		diff tmp1 tmp2;
	done
	echo "\033[92m] fin des différences\033[0m ";
else
	echo "pas de dossiers";
fi
