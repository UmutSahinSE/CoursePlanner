#ifndef SECTIONITEM_H
#define SECTIONITEM_H

#include <QListWidgetItem>

class SectionItem : public QListWidgetItem
{
public:
    SectionItem();
    int value;
};

#endif // SECTIONITEM_H
