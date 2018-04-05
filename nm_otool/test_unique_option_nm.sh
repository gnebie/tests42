if [ $2 ]
then
	make;
	echo "\033[92mDébut de l'affichage des différences : [\033[31m";
	./ft_nm $1 $2 > tmp1;
	nm $1 $2 > tmp2;
	diff tmp1 tmp2;
	echo "\033[92m] fin des différences\033[0m ";
else
	echo "pas de dossiers";
fi
