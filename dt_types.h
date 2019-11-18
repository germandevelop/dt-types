/**
 * Automatically generated dt_types.h
 *
 * @brief dt_types enums
 * @author raido
 * @date 2019-11-18 11:00:04
 */
#ifndef DT_TYPES_H_
#define DT_TYPES_H_

enum dt_types {
	dt_none = 0x0,
	dt_packet = 0x1,
	dt_array = 0x3,
	dt_value = 0x4,
	dt_subscription = 0x5,
	dt_subscriptions = 0x6,
	dt_priority = 0x7,
	dt_seq = 0x8,
	dt_subscription_id = 0x9,
	dt_count = 0xA, // arbitrary count of something
	dt_bits = 0xB, // a bunch of bits
	dt_length = 0xC, // The length of something
	dt_type = 0xE,
	dt_data = 0xF,
	dt_confidence_pct = 0x10,
	dt_param = 0x11,
	dt_aggr = 0x12,
	dt_formula = 0x13,
	dt_trigger = 0x14,
	dt_input = 0x15,
	dt_metadata = 0x16,
	dt_operator_and = 0x17,
	dt_operator_or = 0x18,
	dt_operator_not = 0x19,
	dt_read = 0x1A,
	dt_write = 0x1B,
	dt_actions = 0x1C,
	dt_true = 0x1D,
	dt_false = 0x1E,
	dt_active = 0x1F,
	dt_state = 0x20,
	dt_address = 0x21,
	dt_resource = 0x22,
	dt_status = 0x23,
	dt_spontaneous = 0x24, // The data is from a spontaneous event
	dt_event = 0x25, // An event id of some sort
	dt_constraint_spatial = 0x26,
	dt_constraint_temporal = 0x27,
	dt_constraint_semantic = 0x28,
	dt_timer_source = 0x2E,
	dt_data_source = 0x2F,
	dt_temperature_C = 0x30,
	dt_temperature_F = 0x31,
	dt_humidity_pct = 0x32,
	dt_light_pct = 0x33,
	dt_light_lx = 0x34,
	dt_battery_V = 0x36,
	dt_frq = 0x37, // frequency of smt
	dt_power = 0x38,
	dt_voltage_V = 0x39,
	dt_rssi = 0x3A,
	dt_distance = 0x3B,
	dt_movement_count = 0x3C,
	dt_climate = 0x3D,
	dt_picture = 0x3E,
	dt_no_data = 0x3F,
	dt_coordSys = 0x40,
	dt_spiC = 0x41,
	dt_spiA = 0x42,
	dt_location = 0x43,
	dt_locX = 0x44,
	dt_locY = 0x45,
	dt_locZ = 0x46,
	dt_spiV = 0x47, // Spatial interval vector -> rectangle
	dt_spi_label = 0x49,
	dt_spi_building = 0x4A,
	dt_spi_room = 0x4B,
	dt_radius = 0x4C,
	dt_timestamp_ms = 0x50,
	dt_timestamp_delivery_ms = 0x51,
	dt_timestamp_execution_ms = 0x52,
	dt_timestamp_function_done_ms = 0x53,
	dt_timestamp_start_s = 0x55,
	dt_duration_s = 0x56,
	dt_duration_ms = 0x57,
	dt_age_s = 0x58,
	dt_age_ms = 0x59,
	dt_period_s = 0x5A,
	dt_period_ms = 0x5B,
	dt_freeze_s = 0x5C,
	dt_freeze_ms = 0x5D,
	dt_delay_s = 0x5E,
	dt_delay_ms = 0x5F,
	dt_timeout_s = 0x60,
	dt_timeout_ms = 0x61,
	dt_timeout_never = 0x62,
	dt_temporal_window = 0x66,
	dt_temporal_interval = 0x67,
	dt_beginning = 0x68,
	dt_acc = 0x6B,
	dt_div = 0x6C,
	dt_mul = 0x6D,
	dt_exp = 0x6E, // *10^value
	dt_result = 0x6F,
	dt_rule = 0x70,
	dt_greater = 0x71,
	dt_less = 0x72,
	dt_greaterEqual = 0x73,
	dt_lessEqual = 0x74,
	dt_equal = 0x75,
	dt_notEqual = 0x76,
	dt_at_most = 0x77,
	dt_at_least = 0x78,
	dt_hysteresis = 0x79,
	dt_all = 0x7E,
	dt_present = 0x7F,
	dt_middleware_id = 0x80,
	dt_expected = 0x81,
	dt_stream_id = 0x82,
	dt_streams = 0x83,
	dt_requirements = 0x84,
	dt_slot = 0x85,
	dt_frame = 0x86,
	dt_window = 0x87,
	dt_ack = 0x88,
	dt_beacon = 0x89,
	dt_production_duration = 0x8E,
	dt_production_start = 0x8F,
	dt_setup = 0x98,
	dt_debug = 0x99,
	dt_error = 0x9A,
	dt_errors = 0x9B,
	dt_weekdays = 0x9F,
	dt_utc_tm = 0xA0,
	dt_utc_hourminsec = 0xA1,
	dt_utc_hourmin = 0xA2,
	dt_utc_hour = 0xA3,
	dt_utc_min = 0xA4,
	dt_utc_sec = 0xA5,
	dt_utc_wday = 0xA6,
	dt_utc_mday = 0xA7,
	dt_utc_month = 0xA8,
	dt_utc_year = 0xA9,
	dt_utc_yday = 0xAA,
	dt_utc_time_s = 0xAB, // time of day as seconds from 00:00:00
	dt_utc_time_min = 0xAC, // time of day as minutes from 00:00
	dt_utc_tm_offset = 0xAD,
	dt_offset_s = 0xAE,
	dt_time_passed_s = 0xAF,
	dt_time_passed_ms = 0xB1,
	dt_latest = 0xB2,
	dt_current_location = 0xB3,
	dt_timestamp_utc = 0xB9,
	dt_timestamp_local_ms = 0xBA,
	dt_timestamp_local_s = 0xBB,
	dt_uptime_ms = 0xBC,
	dt_uptime_s = 0xBD,
	dt_sunrise = 0xBE,
	dt_sunset = 0xBF,
	dt_distance_to_time_function = 0xC0,
	dt_sum = 0xC1,
	dt_average = 0xC2,
	dt_sensor = 0xC4,
	dt_algorithm = 0xC5,
	dt_object = 0xC6,
	dt_threat = 0xC7,
	dt_magnetic = 0xC8,
	dt_acoustic = 0xC9,
	dt_angle_deg = 0xCA,
	dt_people_count = 0xCB,
	dt_color_temperature = 0xCC,
	dt_output_pct = 0xCF,
	dt_producer = 0xD0,
	dt_consumer = 0xD1,
	dt_provider = 0xD2,
	dt_client = 0xD3,
	dt_evaluator = 0xD4,
	dt_particles_pm1_0_ug_m3 = 0xD8,
	dt_particles_pm2_5_ug_m3 = 0xD9,
	dt_particles_pm10_ug_m3 = 0xDA,
	dt_sound_level_dB = 0xDB,
	dt_relative_humidity_pct = 0xDC,
	dt_atmospheric_pressure_Pa = 0xDD,
	dt_ambient_temperature_C = 0xDE,
	dt_surface_temperature_C = 0xDF,
	dt_power_W = 0xE0,
	dt_energy_Wh = 0xE1,
	dt_external_temperature_C = 0xE2,
	dt_current_A = 0xE3,
	dt_raw = 0xEE,
	dt_adc_raw = 0xEF,
	dt_orientation = 0xF0,
	dt_coordinates_geo = 0xF1,
	dt_coordinates_utm = 0xF2,
	dt_latitude = 0xF3,
	dt_longitude = 0xF4,
	dt_elevation = 0xF5,
	dt_utm_easting = 0xF6,
	dt_utm_northing = 0xF7,
	dt_utm_zone = 0xF8,
	dt_utm_band = 0xF9,
	dt_pitch = 0xFA,
	dt_yaw = 0xFB,
	dt_roll = 0xFC,
	dt_start = 0xFE,
	dt_end = 0xFF,
	dt_beat = 0x100,
	dt_display_control = 0x110,
	dt_lamp_control = 0x111,
	dt_light_control = 0x112,
	dt_count_contents = 0x113,
	dt_count_in = 0x114,
	dt_count_out = 0x115,
	dt_movement = 0x116,
	dt_movement_delta = 0x117,
	dt_speed_kmh = 0x118,
	dt_button = 0x120,
	dt_button_pressed = 0x121,
	dt_button_released = 0x122,
	dt_switch = 0x123,
	dt_switch_closed = 0x124,
	dt_switch_open = 0x125,
	dt_relay = 0x126,
	dt_relay_closed = 0x127,
	dt_relay_open = 0x128,
	dt_co_ppm = 0x130,
	dt_co2_ppm = 0x131,
	dt_no_ppm = 0x132,
	dt_no2_ppm = 0x133,
	dt_nh3_ppm = 0x134,
	dt_timeR = 0xAAA0,
	dt_timeAbs = 0xAAA1,
	dt_intTime = 0xAAA2,
	dt_absTime = 0xAAA3,
	dt_power_on_time_s = 0xAAB0,
	dt_hours = 0xAAC0,
	dt_minutes = 0xAAC1,
	dt_seconds = 0xAAC2,
};

#endif /* DT_TYPES_H_ */
