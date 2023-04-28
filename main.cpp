#include <iostream>
#include <string>
#include <2geom/path.h>
#include <2geom/svg-path-parser.h>
#include <2geom/svg-path-writer.h>


int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <d_string>" << std::endl;
        return 1;
    }

    std::string d_string = argv[1];

    Geom::PathVector path_vector = Geom::parse_svg_path(d_string.c_str());

    int i = 0;
    for(auto &path : path_vector) {
        std::cout << "Path " << i++ << " has " << path.size() << " segments and is "
                  << (path.closed() ? "closed" : "open") << std::endl;
    }

    std::cout << "Original: " << Geom::write_svg_path(path_vector, -1, false, false) << std::endl;

    Geom::PathVector rev;
    for(auto &path : path_vector) {
        rev.push_back(path.reversed());
    }

    std::cout << "Reversed: " << Geom::write_svg_path(rev, -1, false, false) << std::endl;

    return 0;
}
