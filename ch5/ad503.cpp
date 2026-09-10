while (!inFile.eof()) {
    inFile >> score;
    
    // Check if the extraction succeeded BEFORE processing data
    if (inFile.fail()) {
        break; 
    }

    sum += score;
    count++;
}