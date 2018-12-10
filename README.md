# GetItemsFromFile
Pulls items from a file and stores them as a vector of strings; each string is one line of the file

Sample API usage:

varName = getItemsfromFile(fileName) 
where varName is a vector of strings.

This function will throw a file_not_found (inherits from std::logic_error) exception if file is not found
Can also throw std::bad_alloc from the vector if the file being worked with is absurdly large
