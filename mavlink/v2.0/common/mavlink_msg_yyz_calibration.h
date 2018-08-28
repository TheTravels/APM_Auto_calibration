// MESSAGE YYZ_CALIBRATION PACKING

#define MAVLINK_MSG_ID_YYZ_CALIBRATION 71

MAVPACKED(
typedef struct __mavlink_yyz_calibration_t {
 uint8_t target_system; /*< System ID*/
 uint8_t target_component; /*< Component ID*/
 uint8_t status; /*< 0==cancel compass calibration,1==start compass calibration*/
}) mavlink_yyz_calibration_t;

#define MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN 3
#define MAVLINK_MSG_ID_YYZ_CALIBRATION_MIN_LEN 3
#define MAVLINK_MSG_ID_71_LEN 3
#define MAVLINK_MSG_ID_71_MIN_LEN 3

#define MAVLINK_MSG_ID_YYZ_CALIBRATION_CRC 81
#define MAVLINK_MSG_ID_71_CRC 81



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_YYZ_CALIBRATION { \
	71, \
	"YYZ_CALIBRATION", \
	3, \
	{  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_yyz_calibration_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_yyz_calibration_t, target_component) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_yyz_calibration_t, status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_YYZ_CALIBRATION { \
	"YYZ_CALIBRATION", \
	3, \
	{  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_yyz_calibration_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_yyz_calibration_t, target_component) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_yyz_calibration_t, status) }, \
         } \
}
#endif

/**
 * @brief Pack a yyz_calibration message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param status 0==cancel compass calibration,1==start compass calibration
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_yyz_calibration_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t target_system, uint8_t target_component, uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN];
	_mav_put_uint8_t(buf, 0, target_system);
	_mav_put_uint8_t(buf, 1, target_component);
	_mav_put_uint8_t(buf, 2, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN);
#else
	mavlink_yyz_calibration_t packet;
	packet.target_system = target_system;
	packet.target_component = target_component;
	packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_YYZ_CALIBRATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_YYZ_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_CRC);
}

/**
 * @brief Pack a yyz_calibration message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System ID
 * @param target_component Component ID
 * @param status 0==cancel compass calibration,1==start compass calibration
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_yyz_calibration_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t target_system,uint8_t target_component,uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN];
	_mav_put_uint8_t(buf, 0, target_system);
	_mav_put_uint8_t(buf, 1, target_component);
	_mav_put_uint8_t(buf, 2, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN);
#else
	mavlink_yyz_calibration_t packet;
	packet.target_system = target_system;
	packet.target_component = target_component;
	packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_YYZ_CALIBRATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_YYZ_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_CRC);
}

/**
 * @brief Encode a yyz_calibration struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param yyz_calibration C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_yyz_calibration_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_yyz_calibration_t* yyz_calibration)
{
	return mavlink_msg_yyz_calibration_pack(system_id, component_id, msg, yyz_calibration->target_system, yyz_calibration->target_component, yyz_calibration->status);
}

/**
 * @brief Encode a yyz_calibration struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param yyz_calibration C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_yyz_calibration_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_yyz_calibration_t* yyz_calibration)
{
	return mavlink_msg_yyz_calibration_pack_chan(system_id, component_id, chan, msg, yyz_calibration->target_system, yyz_calibration->target_component, yyz_calibration->status);
}

/**
 * @brief Send a yyz_calibration message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param status 0==cancel compass calibration,1==start compass calibration
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_yyz_calibration_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN];
	_mav_put_uint8_t(buf, 0, target_system);
	_mav_put_uint8_t(buf, 1, target_component);
	_mav_put_uint8_t(buf, 2, status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YYZ_CALIBRATION, buf, MAVLINK_MSG_ID_YYZ_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_CRC);
#else
	mavlink_yyz_calibration_t packet;
	packet.target_system = target_system;
	packet.target_component = target_component;
	packet.status = status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YYZ_CALIBRATION, (const char *)&packet, MAVLINK_MSG_ID_YYZ_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_CRC);
#endif
}

/**
 * @brief Send a yyz_calibration message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_yyz_calibration_send_struct(mavlink_channel_t chan, const mavlink_yyz_calibration_t* yyz_calibration)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_yyz_calibration_send(chan, yyz_calibration->target_system, yyz_calibration->target_component, yyz_calibration->status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YYZ_CALIBRATION, (const char *)yyz_calibration, MAVLINK_MSG_ID_YYZ_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_yyz_calibration_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, target_system);
	_mav_put_uint8_t(buf, 1, target_component);
	_mav_put_uint8_t(buf, 2, status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YYZ_CALIBRATION, buf, MAVLINK_MSG_ID_YYZ_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_CRC);
#else
	mavlink_yyz_calibration_t *packet = (mavlink_yyz_calibration_t *)msgbuf;
	packet->target_system = target_system;
	packet->target_component = target_component;
	packet->status = status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YYZ_CALIBRATION, (const char *)packet, MAVLINK_MSG_ID_YYZ_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN, MAVLINK_MSG_ID_YYZ_CALIBRATION_CRC);
#endif
}
#endif

#endif

// MESSAGE YYZ_CALIBRATION UNPACKING


/**
 * @brief Get field target_system from yyz_calibration message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_yyz_calibration_get_target_system(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from yyz_calibration message
 *
 * @return Component ID
 */
static inline uint8_t mavlink_msg_yyz_calibration_get_target_component(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field status from yyz_calibration message
 *
 * @return 0==cancel compass calibration,1==start compass calibration
 */
static inline uint8_t mavlink_msg_yyz_calibration_get_status(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a yyz_calibration message into a struct
 *
 * @param msg The message to decode
 * @param yyz_calibration C-struct to decode the message contents into
 */
static inline void mavlink_msg_yyz_calibration_decode(const mavlink_message_t* msg, mavlink_yyz_calibration_t* yyz_calibration)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	yyz_calibration->target_system = mavlink_msg_yyz_calibration_get_target_system(msg);
	yyz_calibration->target_component = mavlink_msg_yyz_calibration_get_target_component(msg);
	yyz_calibration->status = mavlink_msg_yyz_calibration_get_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN? msg->len : MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN;
        memset(yyz_calibration, 0, MAVLINK_MSG_ID_YYZ_CALIBRATION_LEN);
	memcpy(yyz_calibration, _MAV_PAYLOAD(msg), len);
#endif
}
