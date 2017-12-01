int randomNumberGenerator()
{
    srand(time(0));
    int randNum = 0;
    randNum = rand()%10;
    return randNum;
}