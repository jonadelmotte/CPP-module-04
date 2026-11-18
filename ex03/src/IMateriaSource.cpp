#include "../include/IMateriaSource.hpp"

IMateriaSource::IMateriaSource() {
}

IMateriaSource::IMateriaSource(const IMateriaSource &src) {
    *this = src;
}

IMateriaSource  &IMateriaSource::operator=(const IMateriaSource &src) {
    (void)src;
    return *this;
}

