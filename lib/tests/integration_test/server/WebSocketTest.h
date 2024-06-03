#pragma once
#include <drogon/WebSocketController.h>
#include <drogon/PubSubService.h>
using namespace drogon;

namespace example
{
class WebSocketTest : public drogon::WebSocketController<WebSocketTest>
{
  public:
    void handleNewMessage(const WebSocketConnectionPtr &,
                          std::string &&,
                          const WebSocketMessageType &) override;
    void handleConnectionClosed(const WebSocketConnectionPtr &) override;
    void handleNewConnection(const HttpRequestPtr &,
                             const WebSocketConnectionPtr &) override;
    WS_PATH_LIST_BEGIN
    // list path definitions here;
    WS_PATH_ADD("/chat", "drogon::LocalHostFilter", Get);
    // path like "/chat/name"
    WS_ADD_PATH_VIA_REGEX("/chat/[^/]+", "drogon::LocalHostFilter", Get);
    WS_PATH_LIST_END
  private:
    PubSubService<std::string> chatRooms_;
};
}  // namespace example
