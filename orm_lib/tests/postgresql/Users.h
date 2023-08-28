/**
 *
 *  Users.h
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#pragma once
#include <drogon/orm/Result.h>
#include <drogon/orm/Row.h>
#include <drogon/orm/Field.h>
#include <drogon/orm/SqlBinder.h>
#include <drogon/orm/Mapper.h>
#include <drogon/orm/BaseBuilder.h>
#ifdef __cpp_impl_coroutine
#include <drogon/orm/CoroMapper.h>
#endif
#include <trantor/utils/Date.h>
#include <trantor/utils/Logger.h>
#include <json/json.h>
#include <string>
#include <memory>
#include <vector>
#include <tuple>
#include <stdint.h>
#include <iostream>

using namespace drogon::orm;

namespace drogon {
namespace orm {
class DbClient;
using DbClientPtr = std::shared_ptr<DbClient>;
}  // namespace orm
}  // namespace drogon

namespace drogon_model {
namespace postgres {
class Users {
 public:
  struct Cols {
    static const std::string _user_id;
    static const std::string _user_name;
    static const std::string _password;
    static const std::string _org_name;
    static const std::string _signature;
    static const std::string _avatar_id;
    static const std::string _id;
    static const std::string _salt;
    static const std::string _admin;
  };

  static const int primaryKeyNumber;
  static const std::string tableName;
  static const bool hasPrimaryKey;
  static const std::string primaryKeyName;
  using PrimaryKeyType = int32_t;
  const PrimaryKeyType &getPrimaryKey() const;

  /**
   * @brief constructor
   * @param r One row of records in the SQL query result.
   * @param indexOffset Set the offset to -1 to access all columns by column
   * names, otherwise access all columns by offsets.
   * @note If the SQL is not a style of 'select * from table_name ...' (select
   * all columns by an asterisk), please set the offset to -1.
   */
  explicit Users(const Row &r, const ssize_t indexOffset = 0) noexcept;

  /**
   * @brief constructor
   * @param pJson The json object to construct a new instance.
   */
  explicit Users(const Json::Value &pJson) noexcept(false);

  /**
   * @brief constructor
   * @param pJson The json object to construct a new instance.
   * @param pMasqueradingVector The aliases of table columns.
   */
  Users(const Json::Value &pJson,
        const std::vector<std::string> &pMasqueradingVector) noexcept(false);

  Users() = default;

  void updateByJson(const Json::Value &pJson) noexcept(false);
  void updateByMasqueradedJson(
      const Json::Value &pJson,
      const std::vector<std::string> &pMasqueradingVector) noexcept(false);
  static bool validateJsonForCreation(const Json::Value &pJson,
                                      std::string &err);
  static bool validateMasqueradedJsonForCreation(
      const Json::Value &,
      const std::vector<std::string> &pMasqueradingVector,
      std::string &err);
  static bool validateJsonForUpdate(const Json::Value &pJson, std::string &err);
  static bool validateMasqueradedJsonForUpdate(
      const Json::Value &,
      const std::vector<std::string> &pMasqueradingVector,
      std::string &err);
  static bool validJsonOfField(size_t index,
                               const std::string &fieldName,
                               const Json::Value &pJson,
                               std::string &err,
                               bool isForCreation);

  /**  For column user_id  */
  /// Get the value of the column user_id, returns the default value if the
  /// column is null
  const std::string &getValueOfUserId() const noexcept;
  /// Return a shared_ptr object pointing to the column const value, or an
  /// empty shared_ptr object if the column is null
  const std::shared_ptr<std::string> &getUserId() const noexcept;

  /// Set the value of the column user_id
  void setUserId(const std::string &pUserId) noexcept;
  void setUserId(std::string &&pUserId) noexcept;
  void setUserIdToNull() noexcept;

  /**  For column user_name  */
  /// Get the value of the column user_name, returns the default value if the
  /// column is null
  const std::string &getValueOfUserName() const noexcept;
  /// Return a shared_ptr object pointing to the column const value, or an
  /// empty shared_ptr object if the column is null
  const std::shared_ptr<std::string> &getUserName() const noexcept;

  /// Set the value of the column user_name
  void setUserName(const std::string &pUserName) noexcept;
  void setUserName(std::string &&pUserName) noexcept;
  void setUserNameToNull() noexcept;

  /**  For column password  */
  /// Get the value of the column password, returns the default value if the
  /// column is null
  const std::string &getValueOfPassword() const noexcept;
  /// Return a shared_ptr object pointing to the column const value, or an
  /// empty shared_ptr object if the column is null
  const std::shared_ptr<std::string> &getPassword() const noexcept;

  /// Set the value of the column password
  void setPassword(const std::string &pPassword) noexcept;
  void setPassword(std::string &&pPassword) noexcept;
  void setPasswordToNull() noexcept;

  /**  For column org_name  */
  /// Get the value of the column org_name, returns the default value if the
  /// column is null
  const std::string &getValueOfOrgName() const noexcept;
  /// Return a shared_ptr object pointing to the column const value, or an
  /// empty shared_ptr object if the column is null
  const std::shared_ptr<std::string> &getOrgName() const noexcept;

  /// Set the value of the column org_name
  void setOrgName(const std::string &pOrgName) noexcept;
  void setOrgName(std::string &&pOrgName) noexcept;
  void setOrgNameToNull() noexcept;

  /**  For column signature  */
  /// Get the value of the column signature, returns the default value if the
  /// column is null
  const std::string &getValueOfSignature() const noexcept;
  /// Return a shared_ptr object pointing to the column const value, or an
  /// empty shared_ptr object if the column is null
  const std::shared_ptr<std::string> &getSignature() const noexcept;

  /// Set the value of the column signature
  void setSignature(const std::string &pSignature) noexcept;
  void setSignature(std::string &&pSignature) noexcept;
  void setSignatureToNull() noexcept;

  /**  For column avatar_id  */
  /// Get the value of the column avatar_id, returns the default value if the
  /// column is null
  const std::string &getValueOfAvatarId() const noexcept;
  /// Return a shared_ptr object pointing to the column const value, or an
  /// empty shared_ptr object if the column is null
  const std::shared_ptr<std::string> &getAvatarId() const noexcept;

  /// Set the value of the column avatar_id
  void setAvatarId(const std::string &pAvatarId) noexcept;
  void setAvatarId(std::string &&pAvatarId) noexcept;
  void setAvatarIdToNull() noexcept;

  /**  For column id  */
  /// Get the value of the column id, returns the default value if the column
  /// is null
  const int32_t &getValueOfId() const noexcept;
  /// Return a shared_ptr object pointing to the column const value, or an
  /// empty shared_ptr object if the column is null
  const std::shared_ptr<int32_t> &getId() const noexcept;

  /// Set the value of the column id
  void setId(const int32_t &pId) noexcept;

  /**  For column salt  */
  /// Get the value of the column salt, returns the default value if the
  /// column is null
  const std::string &getValueOfSalt() const noexcept;
  /// Return a shared_ptr object pointing to the column const value, or an
  /// empty shared_ptr object if the column is null
  const std::shared_ptr<std::string> &getSalt() const noexcept;

  /// Set the value of the column salt
  void setSalt(const std::string &pSalt) noexcept;
  void setSalt(std::string &&pSalt) noexcept;
  void setSaltToNull() noexcept;

  /**  For column admin  */
  /// Get the value of the column admin, returns the default value if the
  /// column is null
  const bool &getValueOfAdmin() const noexcept;
  /// Return a shared_ptr object pointing to the column const value, or an
  /// empty shared_ptr object if the column is null
  const std::shared_ptr<bool> &getAdmin() const noexcept;

  /// Set the value of the column admin
  void setAdmin(const bool &pAdmin) noexcept;
  void setAdminToNull() noexcept;

  static size_t getColumnNumber() noexcept {
    return 9;
  }

  static const std::string &getColumnName(size_t index) noexcept(false);

  Json::Value toJson() const;
  Json::Value toMasqueradedJson(
      const std::vector<std::string> &pMasqueradingVector) const;
  /// Relationship interfaces
 private:
  friend Mapper<Users>;
  friend BaseBuilder<Users, true, true>;
  friend BaseBuilder<Users, true, false>;
  friend BaseBuilder<Users, false, true>;
  friend BaseBuilder<Users, false, false>;
#ifdef __cpp_impl_coroutine
  friend CoroMapper<Users>;
#endif
  static const std::vector<std::string> &insertColumns() noexcept;
  void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
  const std::vector<std::string> updateColumns() const;
  void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
  /// For mysql or sqlite3
  void updateId(const uint64_t id);
  std::shared_ptr<std::string> userId_;
  std::shared_ptr<std::string> userName_;
  std::shared_ptr<std::string> password_;
  std::shared_ptr<std::string> orgName_;
  std::shared_ptr<std::string> signature_;
  std::shared_ptr<std::string> avatarId_;
  std::shared_ptr<int32_t> id_;
  std::shared_ptr<std::string> salt_;
  std::shared_ptr<bool> admin_;

  struct MetaData {
    const std::string colName_;
    const std::string colType_;
    const std::string colDatabaseType_;
    const ssize_t colLength_;
    const bool isAutoVal_;
    const bool isPrimaryKey_;
    const bool notNull_;
  };

  static const std::vector<MetaData> metaData_;
  bool dirtyFlag_[9] = {false};

 public:
  static const std::string &sqlForFindingByPrimaryKey() {
    static const std::string sql =
        "select * from " + tableName + " where id = $1";
    return sql;
  }

  static const std::string &sqlForDeletingByPrimaryKey() {
    static const std::string sql =
        "delete from " + tableName + " where id = $1";
    return sql;
  }

  std::string sqlForInserting(bool &needSelection) const {
    std::string sql = "insert into " + tableName + " (";
    size_t parametersCount = 0;
    needSelection = false;
    if (dirtyFlag_[0]) {
      sql += "user_id,";
      ++parametersCount;
    }
    if (dirtyFlag_[1]) {
      sql += "user_name,";
      ++parametersCount;
    }
    if (dirtyFlag_[2]) {
      sql += "password,";
      ++parametersCount;
    }
    if (dirtyFlag_[3]) {
      sql += "org_name,";
      ++parametersCount;
    }
    if (dirtyFlag_[4]) {
      sql += "signature,";
      ++parametersCount;
    }
    if (dirtyFlag_[5]) {
      sql += "avatar_id,";
      ++parametersCount;
    }
    sql += "id,";
    ++parametersCount;
    if (dirtyFlag_[7]) {
      sql += "salt,";
      ++parametersCount;
    }
    sql += "admin,";
    ++parametersCount;
    if (!dirtyFlag_[8]) {
      needSelection = true;
    }
    needSelection = true;
    if (parametersCount > 0) {
      sql[sql.length() - 1] = ')';
      sql += " values (";
    } else
      sql += ") values (";

    int placeholder = 1;
    char placeholderStr[64];
    size_t n = 0;
    if (dirtyFlag_[0]) {
      n = snprintf(placeholderStr,
                   sizeof(placeholderStr),
                   "$%d,",
                   placeholder++);
      sql.append(placeholderStr, n);
    }
    if (dirtyFlag_[1]) {
      n = snprintf(placeholderStr,
                   sizeof(placeholderStr),
                   "$%d,",
                   placeholder++);
      sql.append(placeholderStr, n);
    }
    if (dirtyFlag_[2]) {
      n = snprintf(placeholderStr,
                   sizeof(placeholderStr),
                   "$%d,",
                   placeholder++);
      sql.append(placeholderStr, n);
    }
    if (dirtyFlag_[3]) {
      n = snprintf(placeholderStr,
                   sizeof(placeholderStr),
                   "$%d,",
                   placeholder++);
      sql.append(placeholderStr, n);
    }
    if (dirtyFlag_[4]) {
      n = snprintf(placeholderStr,
                   sizeof(placeholderStr),
                   "$%d,",
                   placeholder++);
      sql.append(placeholderStr, n);
    }
    if (dirtyFlag_[5]) {
      n = snprintf(placeholderStr,
                   sizeof(placeholderStr),
                   "$%d,",
                   placeholder++);
      sql.append(placeholderStr, n);
    }
    sql += "default,";
    if (dirtyFlag_[7]) {
      n = snprintf(placeholderStr,
                   sizeof(placeholderStr),
                   "$%d,",
                   placeholder++);
      sql.append(placeholderStr, n);
    }
    if (dirtyFlag_[8]) {
      n = snprintf(placeholderStr,
                   sizeof(placeholderStr),
                   "$%d,",
                   placeholder++);
      sql.append(placeholderStr, n);
    } else {
      sql += "default,";
    }
    if (parametersCount > 0) {
      sql.resize(sql.length() - 1);
    }
    if (needSelection) {
      sql.append(") returning *");
    } else {
      sql.append(1, ')');
    }
    LOG_TRACE << sql;
    return sql;
  }
};
}  // namespace postgres
}  // namespace drogon_model
