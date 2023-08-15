#include <iostream>
#include <fstream>

class IErrorLog
{
public:
    virtual void open_log(std::string file_name) = 0;
    virtual void close_log(std::string file_name) = 0;
    virtual void write_error(std::string error_message) = 0;
    virtual void write_warning(std::string error_message) = 0;
    virtual void write_info(std::string error_message) = 0;
};

class FileErrorLog : public IErrorLog
{
private:
    std::ofstream m_log_file;

public:
    virtual void open_log(std::string file_name);
    virtual void close_log(std::string file_name);
    virtual void write_error(std::string error_message);
    virtual void write_warning(std::string error_message);
    virtual void write_info(std::string error_message);
};

void FileErrorLog::open_log(std::string file_name)
{
    m_log_file.open(file_name);
}

void FileErrorLog::close_log(std::string file_name)
{
    m_log_file.close();
}

void FileErrorLog::write_error(std::string error_message)
{
    m_log_file << "[E]: " << error_message << std::endl;
}

void FileErrorLog::write_warning(std::string warning_message)
{
    m_log_file << "[W]: " << warning_message << std::endl;
}

void FileErrorLog::write_info(std::string info_message)
{
    m_log_file << "[I]: " << info_message << std::endl;
}

double divide(double x, double y, IErrorLog& log)
{
    double result = 0;

    if (!y)
    {
        log.write_error("Division by zero in function divide. 0 is returned");
        return 0;
    }

    result = x / y;

    log.write_info("The result of the function divide is: " + std::to_string(result));

    return result;
}

int main()
{
    FileErrorLog log_file;

    log_file.open_log("Log_file.txt");

    divide(25.0, 5.0, log_file);
    divide(5.0, 0.0, log_file);
    divide(1.0, 3.0, log_file);

    log_file.close_log(" Log_file.txt");

    return 0;
}