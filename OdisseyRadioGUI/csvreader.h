#pragma once
#include <exception>


#using<system.dll>
using namespace System;
using namespace System::IO;


/// <summary>
/// Funciona como lector de archivos CSV
/// </summary>
ref class CSVReader {

private:

    /// <summary>
    /// Abre y lee el archivo CSV seleccionado
    /// </summary>
    /// <param name="fileName">Archivo CSV a leer</param>
    void openCVSFile(String^ fileName)
    {

        try
        {
            Console::WriteLine("trying to open file {0}...", fileName);
            StreamReader^ din = File::OpenText(fileName);

            String^ str;
            int count = 0;

            din->ReadLineAsync();

            while ((str = din->ReadLine()) != nullptr)
            {
                count++;
                Console::WriteLine("line {0}: {1}", count, str);
            }
        }
        catch (Exception^ e)
        {
            if (dynamic_cast<FileNotFoundException^>(e))
                Console::WriteLine("file '{0}' not found", fileName);
            else
                Console::WriteLine("problem reading file '{0}'", fileName);
        }

  
    }




public:

	CSVReader(){
		
	
		
	}

	~CSVReader(){


	}







};
