#ifndef SEARCH_HPP
 #define SEARCH_HPP
 #include <stdexcept>
 #include <string>
 /**
  * @brief Erzeugt ein Array der uebergebenen Groesse und initialisiert die Werte mit -1.
  *
  * @param size Die Groesse des zu erzeugenden Arrays.
  * @return int* Das erzeugte Array
  * @throws std::invalid_argument Wenn die angegebene Größe kleiner oder gleich 0 ist
  *
  *
  * @brief Creates an array of the given size and initializes the values with -1.
  *
  * @param size The size of the array.
  * @return int* The newly created array.
  * @throws std::invalid_argument If the given size is equal or less to 0.
  *
  */
 int *create(int size);
 /**
  * @brief Speichert "value" an der Stelle "index" des Arrays.
  *
  * @param array Das Array, in dem der Wert gesetzt werden soll
  * @param size  Die Größe des Arrays.
  * @param index Index, an dem der Wert gesetzt werden soll.
  * @param value Der Wert, der gesetzt werden soll.
  * @throws std::invalid_argument Wenn "index" außerhalb der Arraygrenzen liegt.
  */
 /**
  * @brief Stores "value" in the "array" at index "index".
  *
  * @param array The array where the value should be stored.
  * @param size  The size of the array.
  * @param index The index where the value should be set.
  * @param value The value to set.
  * @throws std::invalid_argument If "index" is out of the array boundaries.
  */
 void set(int *&array, int size, int index, int value);
 /**
  * @brief Sucht den Wert "value" im "array". Für einen detaillierten Algorithmus
  *   schauen Sie bitte in die textuelle Aufgabenbeschreibung.
  *
  * @param array Das Array, in dem gesucht werden soll.
  * @param size Die Größe des Arrays.
  * @param value Der Wert, der gesucht werden soll.
  * @return int Anzahl an besuchten Elementen.
  * @throws std::logic_error Wenn das Element nicht gefunden werden kann.
  */
 /**
  * @brief Searches "value" in the array "array". Please have a look at the
  *  textual task description for the exact algorithm to implement.
  *
  * @param array The array to search in.
  * @param size The size of the array.
  * @param value The value that should be searched.
  * @return int Number of visited array elements.
  * @throws std::logic_error If the value could not be found.
  */
 int search(int *&array, int size, int value);
 /**
  * @brief Multipliziert alle Werte des eingegebenen Arrays mit zwei.
  *
  * @param array Das zu bearbeitende Array.
  * @param size Größe des Arrays.
  */
 /**
  * @brief Multiplies all values of the given array by two.
  *
  * @param array The array to use.
  * @param size Size of the array
  */
 void multiply(int *&array, int size);
 /**
  * @brief Erzeugt einen String aus dem übergebenen Array. Ein Array der
  *   Größe 0 soll nur mit eckigen Klammern dargestellt werden: "[]" Ein
  * *   Array mit einem Eintrag soll dieses in den Klammern enthalten "[4]".
  *   Bei größeren Arrays werden die Einträge mit einem Komma getrennt: "[3,5]".
  *
  * Hinweise:
*Die Anführungszeichen oben sind nur als Veranschaulichung gedacht und sollen
*   nicht im String enthalten seien.
* std::string std::to_string(int): Diese Funktion konvertiert einen Integer in
*    einen String.
* std::string lassen sich mit dem +-Operator aneinander hängen.
* An einen std::string lässt sich ein einfaches String-Literal, wie zum Beispiel
* "Hallo Welt", durch den +-Operator anhängen.

* @param array Das zu konvertierende Array.
* @param size Die Größe des Arrays.

 * @return std::string Der erzeugte String.
*/ /**
 * @brief Converts the array to a string. An empty array should be represented
 *   by brackets: "[]". An array with a single element should print the element
 *   between the brackets: "[4]". For larger arrays the elements should be separated
 *   by a comma: "[3,5]".
 *
 * Hints:
*The quotation marks in the description are only to show the beginning and end of the example
*   and should not be part of the string.
* std::string std::to_string(int): This function converts an integer to a string.
* You can concatenate std::string by using the +-operator.
* You can concatenate a std::string and a simple string literal, such as "hello world",
* by using the +-operator.
* @param array The array to convert.
* @param size Size of the array.

 * @return std::string The created string.
 */
std::string to_string(int *&array, int size);
/**
 * @brief Gibt das übergebene Array frei und setzt den übergebenen Zeiger auf "nullptr".
 *
 * @param array Das freizugebende Array.
 */
/**
 * @brief Frees the given array and stores "nullptr" in the parameter.
 *
 * @param array The Array to free.
 */
void free(int *&array);
#endif //SEARCH_HPP
