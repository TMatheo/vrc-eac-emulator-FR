#include "id2string_handler.h"

#include <common/api/requests/id2string_request.h>
#include <common/api/response/id2string_response.h>
#include <plog/Log.h>

#include "../eos/eos.h"

#define EOS_PRODUCTUSERID_MAX_LENGTH 32

std::shared_ptr<response> id2string_handler::handle(std::shared_ptr<request> request) {
	auto request_id2string = std::static_pointer_cast<id2string_request>(request);

	char buffer[EOS_PRODUCTUSERID_MAX_LENGTH + 1];
	int32_t buffer_length = sizeof(buffer);
	memset(buffer, 0, sizeof(buffer));
	EOS_EResult result = eos::product_user_id_to_string(request_id2string->user_id, buffer, &buffer_length);
	if (result != EOS_Success) {
		buffer_length = 0;
		PLOGE.printf("Failed to parse userId to str: %d, length=%d", result, buffer_length);
	} else {
		PLOGD.printf("parsed userId to str: %s", buffer);
	}

	auto response = std::make_shared<id2string_response>();
	response->result = result;
	response->buffer = nullable_string(buffer);
	response->buffer_size = buffer_length;
	return response;
}
