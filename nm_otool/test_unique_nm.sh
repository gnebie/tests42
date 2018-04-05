if [ $1 ]
then
	cd && make && cd -;
	echo "\033[92mDébut de l'affichage des différences : [\033[31m";
	../ft_nm $1 > tmp1;
	nm $1 > tmp2;
	diff tmp1 tmp2;
	echo "\033[92m] fin des différences\033[0m ";
else
	echo "pas de dossiers";
fi
