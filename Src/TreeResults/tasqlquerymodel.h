///
/// @project       TreeATE
/// @brief         TASqlQueryModel class
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef TASQLQUERYMODEL_H
#define TASQLQUERYMODEL_H

#include <QSqlQueryModel>

class TASqlQueryModel : public QSqlQueryModel
{
    Q_OBJECT
public:
    explicit TASqlQueryModel(QObject *parent = Q_NULLPTR);
    virtual ~TASqlQueryModel();

    QVariant data(const QModelIndex &item, int role) const;
};

#endif // TASQLQUERYMODEL_H
