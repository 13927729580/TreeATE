///
/// @project       TreeATE Dev
/// @brief         This is CSV file parser
/// @author        David Yin  2019-01 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef TACSVPARSER_H
#define TACSVPARSER_H

#include <QStringList>
#include <QVariant>

class QFile;

class TACsvParser
{
public:
    TACsvParser(const QString csvFile);
    ~TACsvParser();

    int rowCount();
    int columnCount(int row);
    void appendData(int row, const QVariant& data);
    QString data(int row, int column);
    bool parserFile();
    bool saveFile();
    void clear();
    QString errorString();

private:
    QFile*  m_pFileCsv;
    QStringList m_strData;
    QString     m_strLastErr;
};

#endif // TACSVPARSER_H
