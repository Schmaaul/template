#ifndef STATISTICS_HPP
 #define STATISTICS_HPP
 #include <stdexcept>
 /**
  * @brief Sucht das größte Element im Array und gibt dieses zurück.
  *
  * @param array Das Array, in dem gesucht werden soll.
  * @param size Die Größe des Arrays.
  * @return float Der größte Wert des Arrays.
  * @throws std::invalid_argument if the given size is less than or equal to 0.
  */
 /**
  * @brief Searches the largest value in the given array.
  *
  * @param array The array to search in.
  * @param size The size of the array.
  * @return float The largest value.
  * @throws std::invalid_argument if the given size is less than or equal to 0.
  */
 float max(float *data, int size);
 /**
  * @brief Sucht das kleinste Element im Array und gibt dieses zurück.
  *
  * @param array Das Array, in dem gesucht werden soll.
  * @param size Die Größe des Arrays.
  * @return float Der kleinsten Wert des Arrays.
  * @throws std::invalid_argument if the given size is less than or equal to 0.
  */
 /**
  * @brief Searches the smallest value in the given array.
  *
  * @param array The array to search in.
  * @param size The size of the array.
  * @return float The smallest value.
  * @throws std::invalid_argument if the given size is less than or equal to 0.
  */
 float min(float *data, int size);
 /**
  * @brief Berechnet den Durchschnitt der übergebenen Daten.
  *
  * @param data Das Datenarray auf dem der Durchschnitt berechnet werden soll.
  * @param size Die Größe des Arrays.
  * @return float Der Durchschnitt der gespeicherten Werte
  * @throws std::invalid_argument Wenn die gegebene Größe kleiner oder gleich 0 ist
  */
 /**
  * @brief Calculates the average of the given data.
  *
  * @param data An array of data values.
  * @param size The size of the array.
  * @return float The average value.
  * @throws std::invalid_argument if the given size is less than or equal to 0.
  */
 float average(float *data, int size);
 /**
  * @brief Berechnet den Median der übergebenen Daten. Für einen detaillierten Algorithmus
  *   schauen Sie bitte in die textuelle Aufgabenbeschreibung.
  *
  * @param data Das Datenarray auf dem der Durchschnitt berechnet werden soll.
  * @param size Die Größe des Arrays.
  * @return float Der Durchschnitt der gespeicherten Werte
  * @throws std::invalid_argument Wenn die gegebene Größe kleiner oder gleich 0 ist
  */
 /**
  * @brief Calculates the median of the given data. Please have a look at the
  *  textual task description for the exact algorithm to implement.
  *
  * @param data An array of data values.
  * @param size The size of the array.
  * @return float The average value.
  * @throws std::invalid_argument if the given size is less than or equal to 0.
  */
 float median(float *data, int size);
 /**
  * @brief Berechnet die Varianz der übergebenen Daten. Die Formel zur Berechnung
  *   finden Sie in der textuellen Aufgabenbeschreibung. Sie können bei der Berechnung die
  *   Funktion <code>average</code> wiederverwenden.
  *
  * @param data Das Datenarray auf dem die Varianz berechnet werden soll.
  * @param size Die Größe des Arrays.
  * @return float Die Standardabweichung der gespeicherten Werte
  * @throws std::invalid_argument Wenn die gegebene Größen kleiner oder gleich 0 ist
  */
 /**
  * @brief Calculates the variancen of the given data. Please have a look at the textual task
  *   description for the formula. You are allowed to use the <code>average</code> function
  * you have implemented.
  *
  * @param data An array of data values.
  * @param size The size of the array.
  * @return float The variance of the given data.
  * @throws std::invalid_argument if the given size is less than or equal to 0.
  */
 float variance(float *data, int size);
 #endif //STATISTICS_HPP