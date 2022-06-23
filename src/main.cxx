#include <boost/program_options.hpp>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    namespace options = boost::program_options;

    options::options_description options_description("Adjust Screen");
    options_description.add_options()
        ("help,h", "show this help message");
        //("display,d", boost::program_options::value<std::string>()->default_value("amdgpu_bl0"), "display to be used when more than one exists");

    options::positional_options_description positional_description;
    positional_description.add("percent", -1);

    options::variables_map variables_map;
    options::store(options::parse_command_line(argc, argv).options(positional_description).run(), variables_map);
    options::notify(variables_map);

    if (variables_map.count("help"))
        std::cout << options_description << std::endl;

    if (variables_map.count("percent"))
        std::cout << variables_map["percent"].as<std::string>() << std::endl;

