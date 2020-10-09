#include <iostream>

int main()
{
    const int SIZE = 20;
    int grades[SIZE];
    int count = 0, total = 0;

    std::cout << "Enter up to 20 grades, then enter -1 when finished.\n\n" ; // << endl;
    // cout << endl;

    const int min_grade = 0 ; // *** added
    const int max_grade = 100 ; // *** added

    while (count < SIZE)
    {
        std::cout << "Enter value #" << count + 1 << ": ";
        std::cin >> grades[count];

        // if (grades[count] != -1)
        if( grades[count] == -1 ) break ;

        if( grades[count] >= min_grade && grades[count] <= max_grade ) // *** added
        {
            total += grades[count];
            count++;
        }
        else std::cout << "invalid grade. please enter a value in [" << min_grade << ',' << max_grade << "]\n" ;
            // break;
    }


    int max = grades[0];
    int min = grades[0];

    for (int i = 0; i < /*SIZE*/ count; ++i)
    {
        if (max < grades[i])
        {
            max = grades[i];
        }
        else if (min > grades[i])
        {
            min = grades[i];
        }
    }

    if( count > 0 ) // *** added
    {
        // int average = total / count;
        const double average = double(total) / count ; // avoid integer division

        // cout << endl;
        std::cout << "\nThe highest grade is: " << max // << endl;
        /*cout*/  << "\nThe lowest grade is: " << min // << endl;
        /*cout*/  << "\nThe average grade is: " << average << '\n' ; // << endl;
    }

}

