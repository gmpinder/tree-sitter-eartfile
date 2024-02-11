#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 416
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 169
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 21

enum {
  anon_sym_LF = 1,
  aux_sym_from_instruction_token1 = 2,
  aux_sym_from_instruction_token2 = 3,
  aux_sym_run_instruction_token1 = 4,
  aux_sym_cmd_instruction_token1 = 5,
  aux_sym_label_instruction_token1 = 6,
  aux_sym_expose_instruction_token1 = 7,
  aux_sym_env_instruction_token1 = 8,
  aux_sym_copy_instruction_token1 = 9,
  aux_sym_entrypoint_instruction_token1 = 10,
  aux_sym_volume_instruction_token1 = 11,
  aux_sym_user_instruction_token1 = 12,
  anon_sym_COLON = 13,
  aux_sym__user_name_or_group_token1 = 14,
  aux_sym__immediate_user_name_or_group_fragment_token1 = 15,
  aux_sym_workdir_instruction_token1 = 16,
  aux_sym_arg_instruction_token1 = 17,
  aux_sym_arg_instruction_token2 = 18,
  anon_sym_EQ = 19,
  aux_sym_healthcheck_instruction_token1 = 20,
  anon_sym_NONE = 21,
  aux_sym_path_token1 = 22,
  aux_sym_path_token2 = 23,
  anon_sym_DOLLAR = 24,
  anon_sym_DOLLAR2 = 25,
  anon_sym_LBRACE = 26,
  aux_sym__expansion_body_token1 = 27,
  anon_sym_RBRACE = 28,
  sym_variable = 29,
  aux_sym__spaced_env_pair_token1 = 30,
  aux_sym__env_key_token1 = 31,
  aux_sym_expose_port_token1 = 32,
  anon_sym_SLASHtcp = 33,
  anon_sym_SLASHudp = 34,
  aux_sym_label_pair_token1 = 35,
  aux_sym_image_name_token1 = 36,
  aux_sym_image_name_token2 = 37,
  aux_sym_image_tag_token1 = 38,
  anon_sym_AT = 39,
  aux_sym_image_digest_token1 = 40,
  anon_sym_DASH_DASH = 41,
  aux_sym_param_token1 = 42,
  aux_sym_param_token2 = 43,
  anon_sym_mount = 44,
  anon_sym_COMMA = 45,
  aux_sym_mount_param_param_token1 = 46,
  aux_sym_image_alias_token1 = 47,
  aux_sym_image_alias_token2 = 48,
  aux_sym_shell_fragment_token1 = 49,
  aux_sym_shell_fragment_token2 = 50,
  aux_sym_shell_fragment_token3 = 51,
  anon_sym_BSLASH_LF = 52,
  anon_sym_POUND = 53,
  aux_sym__anon_comment_token1 = 54,
  anon_sym_LBRACK = 55,
  anon_sym_COMMA2 = 56,
  anon_sym_RBRACK = 57,
  anon_sym_DQUOTE = 58,
  aux_sym_json_string_token1 = 59,
  sym_json_escape_sequence = 60,
  aux_sym_double_quoted_string_token1 = 61,
  anon_sym_BSLASH = 62,
  anon_sym_SQUOTE = 63,
  aux_sym_single_quoted_string_token1 = 64,
  aux_sym_unquoted_string_token1 = 65,
  anon_sym_BSLASH2 = 66,
  sym_double_quoted_escape_sequence = 67,
  sym_single_quoted_escape_sequence = 68,
  sym__non_newline_whitespace = 69,
  sym_comment = 70,
  aux_sym_version_instruction_token1 = 71,
  sym__version_instruction_semver = 72,
  aux_sym_project_instruction_token1 = 73,
  aux_sym_project_instruction_token2 = 74,
  anon_sym_SLASH = 75,
  aux_sym_import_instruction_token1 = 76,
  anon_sym_PLUS = 77,
  aux_sym_target_token1 = 78,
  anon_sym_PLUS2 = 79,
  anon_sym_COLON_LF = 80,
  aux_sym_function_target_token1 = 81,
  anon_sym_DOT_SLASH = 82,
  anon_sym_DOT_DOT_SLASH = 83,
  aux_sym_earthfile_local_path_token1 = 84,
  aux_sym_earthfile_local_path_token2 = 85,
  aux_sym_build_instruction_token1 = 86,
  sym_source_file = 87,
  sym__instruction = 88,
  sym_from_instruction = 89,
  sym_run_instruction = 90,
  sym_cmd_instruction = 91,
  sym_label_instruction = 92,
  sym_expose_instruction = 93,
  sym_env_instruction = 94,
  sym_copy_instruction = 95,
  sym_entrypoint_instruction = 96,
  sym_volume_instruction = 97,
  sym_user_instruction = 98,
  sym__user_name_or_group = 99,
  aux_sym__immediate_user_name_or_group = 100,
  sym__immediate_user_name_or_group_fragment = 101,
  sym_workdir_instruction = 102,
  sym_arg_instruction = 103,
  sym_healthcheck_instruction = 104,
  sym_path = 105,
  sym_expansion = 106,
  sym__immediate_expansion = 107,
  sym__imm_expansion = 108,
  sym__expansion_body = 109,
  sym_env_pair = 110,
  sym__spaced_env_pair = 111,
  sym__env_key = 112,
  sym_expose_port = 113,
  sym_label_pair = 114,
  sym_image_spec = 115,
  sym_image_name = 116,
  sym_image_tag = 117,
  sym_image_digest = 118,
  sym_param = 119,
  sym_mount_param = 120,
  sym_mount_param_param = 121,
  sym_image_alias = 122,
  sym_shell_command = 123,
  sym_shell_fragment = 124,
  sym_line_continuation = 125,
  sym_required_line_continuation = 126,
  sym__comment_line = 127,
  sym__anon_comment = 128,
  sym_json_string_array = 129,
  sym_json_string = 130,
  sym_double_quoted_string = 131,
  sym_single_quoted_string = 132,
  sym_unquoted_string = 133,
  sym_version_instruction = 134,
  sym_project_instruction = 135,
  sym_import_instruction = 136,
  sym_target = 137,
  sym_target_direct = 138,
  sym_target_header = 139,
  sym_function_header = 140,
  sym_earthfile_local_path = 141,
  sym_earthfile_ref = 142,
  sym_build_instruction = 143,
  aux_sym_source_file_repeat1 = 144,
  aux_sym_run_instruction_repeat1 = 145,
  aux_sym_label_instruction_repeat1 = 146,
  aux_sym_expose_instruction_repeat1 = 147,
  aux_sym_env_instruction_repeat1 = 148,
  aux_sym_copy_instruction_repeat1 = 149,
  aux_sym_copy_instruction_repeat2 = 150,
  aux_sym_volume_instruction_repeat1 = 151,
  aux_sym__user_name_or_group_repeat1 = 152,
  aux_sym_path_repeat1 = 153,
  aux_sym_image_name_repeat1 = 154,
  aux_sym_image_tag_repeat1 = 155,
  aux_sym_image_digest_repeat1 = 156,
  aux_sym_mount_param_repeat1 = 157,
  aux_sym_image_alias_repeat1 = 158,
  aux_sym_shell_command_repeat1 = 159,
  aux_sym_shell_command_repeat2 = 160,
  aux_sym_shell_fragment_repeat1 = 161,
  aux_sym_json_string_array_repeat1 = 162,
  aux_sym_json_string_repeat1 = 163,
  aux_sym_double_quoted_string_repeat1 = 164,
  aux_sym_single_quoted_string_repeat1 = 165,
  aux_sym_unquoted_string_repeat1 = 166,
  aux_sym_earthfile_local_path_repeat1 = 167,
  aux_sym_earthfile_local_path_repeat2 = 168,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_from_instruction_token1] = "FROM",
  [aux_sym_from_instruction_token2] = "AS",
  [aux_sym_run_instruction_token1] = "RUN",
  [aux_sym_cmd_instruction_token1] = "CMD",
  [aux_sym_label_instruction_token1] = "LABEL",
  [aux_sym_expose_instruction_token1] = "EXPOSE",
  [aux_sym_env_instruction_token1] = "ENV",
  [aux_sym_copy_instruction_token1] = "COPY",
  [aux_sym_entrypoint_instruction_token1] = "ENTRYPOINT",
  [aux_sym_volume_instruction_token1] = "VOLUME",
  [aux_sym_user_instruction_token1] = "USER",
  [anon_sym_COLON] = ":",
  [aux_sym__user_name_or_group_token1] = "_user_name_or_group_token1",
  [aux_sym__immediate_user_name_or_group_fragment_token1] = "_immediate_user_name_or_group_fragment_token1",
  [aux_sym_workdir_instruction_token1] = "WORKDIR",
  [aux_sym_arg_instruction_token1] = "ARG",
  [aux_sym_arg_instruction_token2] = "unquoted_string",
  [anon_sym_EQ] = "=",
  [aux_sym_healthcheck_instruction_token1] = "HEALTHCHECK",
  [anon_sym_NONE] = "NONE",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym__expansion_body_token1] = "variable",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [aux_sym__spaced_env_pair_token1] = "_spaced_env_pair_token1",
  [aux_sym__env_key_token1] = "unquoted_string",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "unquoted_string",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_name_token2] = "image_name_token2",
  [aux_sym_image_tag_token1] = "image_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_token1] = "image_digest_token1",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_param_token1] = "param_token1",
  [aux_sym_param_token2] = "param_token2",
  [anon_sym_mount] = "mount",
  [anon_sym_COMMA] = ",",
  [aux_sym_mount_param_param_token1] = "mount_param_param_token1",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [aux_sym_image_alias_token2] = "image_alias_token2",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_POUND] = "#",
  [aux_sym__anon_comment_token1] = "_anon_comment_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA2] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_json_string_token1] = "json_string_token1",
  [sym_json_escape_sequence] = "escape_sequence",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH2] = "\\ ",
  [sym_double_quoted_escape_sequence] = "escape_sequence",
  [sym_single_quoted_escape_sequence] = "escape_sequence",
  [sym__non_newline_whitespace] = "_non_newline_whitespace",
  [sym_comment] = "comment",
  [aux_sym_version_instruction_token1] = "VERSION",
  [sym__version_instruction_semver] = "_version_instruction_semver",
  [aux_sym_project_instruction_token1] = "PROJECT",
  [aux_sym_project_instruction_token2] = "project_instruction_token2",
  [anon_sym_SLASH] = "/",
  [aux_sym_import_instruction_token1] = "IMPORT",
  [anon_sym_PLUS] = "+",
  [aux_sym_target_token1] = "target_token1",
  [anon_sym_PLUS2] = "+",
  [anon_sym_COLON_LF] = ":\n",
  [aux_sym_function_target_token1] = "function_target_token1",
  [anon_sym_DOT_SLASH] = "./",
  [anon_sym_DOT_DOT_SLASH] = "../",
  [aux_sym_earthfile_local_path_token1] = "earthfile_local_path_token1",
  [aux_sym_earthfile_local_path_token2] = "earthfile_local_path_token2",
  [aux_sym_build_instruction_token1] = "BUILD",
  [sym_source_file] = "source_file",
  [sym__instruction] = "_instruction",
  [sym_from_instruction] = "from_instruction",
  [sym_run_instruction] = "run_instruction",
  [sym_cmd_instruction] = "cmd_instruction",
  [sym_label_instruction] = "label_instruction",
  [sym_expose_instruction] = "expose_instruction",
  [sym_env_instruction] = "env_instruction",
  [sym_copy_instruction] = "copy_instruction",
  [sym_entrypoint_instruction] = "entrypoint_instruction",
  [sym_volume_instruction] = "volume_instruction",
  [sym_user_instruction] = "user_instruction",
  [sym__user_name_or_group] = "unquoted_string",
  [aux_sym__immediate_user_name_or_group] = "_immediate_user_name_or_group",
  [sym__immediate_user_name_or_group_fragment] = "_immediate_user_name_or_group_fragment",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_path] = "path",
  [sym_expansion] = "expansion",
  [sym__immediate_expansion] = "_immediate_expansion",
  [sym__imm_expansion] = "expansion",
  [sym__expansion_body] = "_expansion_body",
  [sym_env_pair] = "env_pair",
  [sym__spaced_env_pair] = "env_pair",
  [sym__env_key] = "_env_key",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym_param] = "param",
  [sym_mount_param] = "mount_param",
  [sym_mount_param_param] = "mount_param_param",
  [sym_image_alias] = "image_alias",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "line_continuation",
  [sym__comment_line] = "_comment_line",
  [sym__anon_comment] = "comment",
  [sym_json_string_array] = "json_string_array",
  [sym_json_string] = "json_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_version_instruction] = "version_instruction",
  [sym_project_instruction] = "project_instruction",
  [sym_import_instruction] = "import_instruction",
  [sym_target] = "target",
  [sym_target_direct] = "target_direct",
  [sym_target_header] = "target_header",
  [sym_function_header] = "function_header",
  [sym_earthfile_local_path] = "earthfile_local_path",
  [sym_earthfile_ref] = "earthfile_ref",
  [sym_build_instruction] = "build_instruction",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_run_instruction_repeat1] = "run_instruction_repeat1",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_copy_instruction_repeat1] = "copy_instruction_repeat1",
  [aux_sym_copy_instruction_repeat2] = "copy_instruction_repeat2",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym__user_name_or_group_repeat1] = "_user_name_or_group_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_image_digest_repeat1] = "image_digest_repeat1",
  [aux_sym_mount_param_repeat1] = "mount_param_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_json_string_array_repeat1] = "json_string_array_repeat1",
  [aux_sym_json_string_repeat1] = "json_string_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
  [aux_sym_earthfile_local_path_repeat1] = "earthfile_local_path_repeat1",
  [aux_sym_earthfile_local_path_repeat2] = "earthfile_local_path_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_from_instruction_token1] = aux_sym_from_instruction_token1,
  [aux_sym_from_instruction_token2] = aux_sym_from_instruction_token2,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [aux_sym_cmd_instruction_token1] = aux_sym_cmd_instruction_token1,
  [aux_sym_label_instruction_token1] = aux_sym_label_instruction_token1,
  [aux_sym_expose_instruction_token1] = aux_sym_expose_instruction_token1,
  [aux_sym_env_instruction_token1] = aux_sym_env_instruction_token1,
  [aux_sym_copy_instruction_token1] = aux_sym_copy_instruction_token1,
  [aux_sym_entrypoint_instruction_token1] = aux_sym_entrypoint_instruction_token1,
  [aux_sym_volume_instruction_token1] = aux_sym_volume_instruction_token1,
  [aux_sym_user_instruction_token1] = aux_sym_user_instruction_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__user_name_or_group_token1] = aux_sym__user_name_or_group_token1,
  [aux_sym__immediate_user_name_or_group_fragment_token1] = aux_sym__immediate_user_name_or_group_fragment_token1,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = sym_unquoted_string,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__expansion_body_token1] = sym_variable,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [aux_sym__spaced_env_pair_token1] = aux_sym__spaced_env_pair_token1,
  [aux_sym__env_key_token1] = sym_unquoted_string,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = sym_unquoted_string,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_name_token2] = aux_sym_image_name_token2,
  [aux_sym_image_tag_token1] = aux_sym_image_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_token1] = aux_sym_image_digest_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [aux_sym_param_token2] = aux_sym_param_token2,
  [anon_sym_mount] = anon_sym_mount,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_mount_param_param_token1] = aux_sym_mount_param_param_token1,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [aux_sym_image_alias_token2] = aux_sym_image_alias_token2,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__anon_comment_token1] = aux_sym__anon_comment_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_json_string_token1] = aux_sym_json_string_token1,
  [sym_json_escape_sequence] = sym_json_escape_sequence,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH2] = anon_sym_BSLASH2,
  [sym_double_quoted_escape_sequence] = sym_json_escape_sequence,
  [sym_single_quoted_escape_sequence] = sym_json_escape_sequence,
  [sym__non_newline_whitespace] = sym__non_newline_whitespace,
  [sym_comment] = sym_comment,
  [aux_sym_version_instruction_token1] = aux_sym_version_instruction_token1,
  [sym__version_instruction_semver] = sym__version_instruction_semver,
  [aux_sym_project_instruction_token1] = aux_sym_project_instruction_token1,
  [aux_sym_project_instruction_token2] = aux_sym_project_instruction_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_import_instruction_token1] = aux_sym_import_instruction_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_target_token1] = aux_sym_target_token1,
  [anon_sym_PLUS2] = anon_sym_PLUS,
  [anon_sym_COLON_LF] = anon_sym_COLON_LF,
  [aux_sym_function_target_token1] = aux_sym_function_target_token1,
  [anon_sym_DOT_SLASH] = anon_sym_DOT_SLASH,
  [anon_sym_DOT_DOT_SLASH] = anon_sym_DOT_DOT_SLASH,
  [aux_sym_earthfile_local_path_token1] = aux_sym_earthfile_local_path_token1,
  [aux_sym_earthfile_local_path_token2] = aux_sym_earthfile_local_path_token2,
  [aux_sym_build_instruction_token1] = aux_sym_build_instruction_token1,
  [sym_source_file] = sym_source_file,
  [sym__instruction] = sym__instruction,
  [sym_from_instruction] = sym_from_instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym_cmd_instruction] = sym_cmd_instruction,
  [sym_label_instruction] = sym_label_instruction,
  [sym_expose_instruction] = sym_expose_instruction,
  [sym_env_instruction] = sym_env_instruction,
  [sym_copy_instruction] = sym_copy_instruction,
  [sym_entrypoint_instruction] = sym_entrypoint_instruction,
  [sym_volume_instruction] = sym_volume_instruction,
  [sym_user_instruction] = sym_user_instruction,
  [sym__user_name_or_group] = sym_unquoted_string,
  [aux_sym__immediate_user_name_or_group] = aux_sym__immediate_user_name_or_group,
  [sym__immediate_user_name_or_group_fragment] = sym__immediate_user_name_or_group_fragment,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_path] = sym_path,
  [sym_expansion] = sym_expansion,
  [sym__immediate_expansion] = sym__immediate_expansion,
  [sym__imm_expansion] = sym_expansion,
  [sym__expansion_body] = sym__expansion_body,
  [sym_env_pair] = sym_env_pair,
  [sym__spaced_env_pair] = sym_env_pair,
  [sym__env_key] = sym__env_key,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym_param] = sym_param,
  [sym_mount_param] = sym_mount_param,
  [sym_mount_param_param] = sym_mount_param_param,
  [sym_image_alias] = sym_image_alias,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_line_continuation,
  [sym__comment_line] = sym__comment_line,
  [sym__anon_comment] = sym_comment,
  [sym_json_string_array] = sym_json_string_array,
  [sym_json_string] = sym_json_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_version_instruction] = sym_version_instruction,
  [sym_project_instruction] = sym_project_instruction,
  [sym_import_instruction] = sym_import_instruction,
  [sym_target] = sym_target,
  [sym_target_direct] = sym_target_direct,
  [sym_target_header] = sym_target_header,
  [sym_function_header] = sym_function_header,
  [sym_earthfile_local_path] = sym_earthfile_local_path,
  [sym_earthfile_ref] = sym_earthfile_ref,
  [sym_build_instruction] = sym_build_instruction,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_run_instruction_repeat1] = aux_sym_run_instruction_repeat1,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_copy_instruction_repeat1] = aux_sym_copy_instruction_repeat1,
  [aux_sym_copy_instruction_repeat2] = aux_sym_copy_instruction_repeat2,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym__user_name_or_group_repeat1] = aux_sym__user_name_or_group_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_image_digest_repeat1] = aux_sym_image_digest_repeat1,
  [aux_sym_mount_param_repeat1] = aux_sym_mount_param_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_command_repeat2] = aux_sym_shell_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_json_string_array_repeat1] = aux_sym_json_string_array_repeat1,
  [aux_sym_json_string_repeat1] = aux_sym_json_string_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
  [aux_sym_earthfile_local_path_repeat1] = aux_sym_earthfile_local_path_repeat1,
  [aux_sym_earthfile_local_path_repeat2] = aux_sym_earthfile_local_path_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_instruction_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cmd_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expose_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_copy_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_entrypoint_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_volume_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__user_name_or_group_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_user_name_or_group_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_instruction_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expansion_body_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__spaced_env_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__env_key_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expose_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_pair_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_digest_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_mount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mount_param_param_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__anon_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_json_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_json_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__non_newline_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_version_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__version_instruction_semver] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_project_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_project_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_target_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_target_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_earthfile_local_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_earthfile_local_path_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_build_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_from_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_env_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_volume_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__immediate_user_name_or_group] = {
    .visible = false,
    .named = false,
  },
  [sym__immediate_user_name_or_group_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym_workdir_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym__immediate_expansion] = {
    .visible = false,
    .named = true,
  },
  [sym__imm_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym__expansion_body] = {
    .visible = false,
    .named = true,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__spaced_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__env_key] = {
    .visible = false,
    .named = true,
  },
  [sym_expose_port] = {
    .visible = true,
    .named = true,
  },
  [sym_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_param] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_param_param] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_required_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_line] = {
    .visible = false,
    .named = true,
  },
  [sym__anon_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_version_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_project_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_import_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_target_direct] = {
    .visible = true,
    .named = true,
  },
  [sym_target_header] = {
    .visible = true,
    .named = true,
  },
  [sym_function_header] = {
    .visible = true,
    .named = true,
  },
  [sym_earthfile_local_path] = {
    .visible = true,
    .named = true,
  },
  [sym_earthfile_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_build_instruction] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__user_name_or_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_digest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mount_param_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_earthfile_local_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_earthfile_local_path_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_as = 1,
  field_default = 2,
  field_digest = 3,
  field_function = 4,
  field_group = 5,
  field_key = 6,
  field_name = 7,
  field_org = 8,
  field_project = 9,
  field_tag = 10,
  field_target = 11,
  field_user = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_digest] = "digest",
  [field_function] = "function",
  [field_group] = "group",
  [field_key] = "key",
  [field_name] = "name",
  [field_org] = "org",
  [field_project] = "project",
  [field_tag] = "tag",
  [field_target] = "target",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 3},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 2},
  [17] = {.index = 26, .length = 2},
  [18] = {.index = 28, .length = 1},
  [19] = {.index = 29, .length = 2},
  [20] = {.index = 31, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [3] =
    {field_user, 1},
  [4] =
    {field_name, 1},
  [5] =
    {field_target, 0},
  [6] =
    {field_function, 0},
  [7] =
    {field_name, 0},
    {field_tag, 1},
  [9] =
    {field_digest, 1},
    {field_name, 0},
  [11] =
    {field_name, 2},
  [12] =
    {field_as, 3},
  [13] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [16] =
    {field_key, 0},
    {field_value, 2},
  [18] =
    {field_name, 0},
    {field_value, 2},
  [20] =
    {field_group, 3},
    {field_user, 1},
  [22] =
    {field_default, 3},
    {field_name, 1},
  [24] =
    {field_org, 1},
    {field_project, 3},
  [26] =
    {field_name, 1},
    {field_value, 3},
  [28] =
    {field_as, 4},
  [29] =
    {field_default, 4},
    {field_name, 2},
  [31] =
    {field_name, 1},
    {field_value, 3},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [14] = {
    [3] = sym_unquoted_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__immediate_user_name_or_group, 2,
    aux_sym__immediate_user_name_or_group,
    sym_unquoted_string,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 17,
  [24] = 24,
  [25] = 24,
  [26] = 21,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 22,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 33,
  [44] = 19,
  [45] = 35,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 42,
  [50] = 46,
  [51] = 35,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 40,
  [62] = 41,
  [63] = 39,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 66,
  [76] = 76,
  [77] = 71,
  [78] = 78,
  [79] = 79,
  [80] = 72,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 78,
  [86] = 78,
  [87] = 83,
  [88] = 71,
  [89] = 66,
  [90] = 70,
  [91] = 72,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 65,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 84,
  [101] = 101,
  [102] = 82,
  [103] = 103,
  [104] = 84,
  [105] = 81,
  [106] = 81,
  [107] = 107,
  [108] = 82,
  [109] = 70,
  [110] = 78,
  [111] = 111,
  [112] = 78,
  [113] = 72,
  [114] = 71,
  [115] = 99,
  [116] = 66,
  [117] = 78,
  [118] = 72,
  [119] = 71,
  [120] = 78,
  [121] = 121,
  [122] = 72,
  [123] = 123,
  [124] = 66,
  [125] = 125,
  [126] = 71,
  [127] = 72,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 71,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 66,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 79,
  [141] = 141,
  [142] = 71,
  [143] = 143,
  [144] = 78,
  [145] = 66,
  [146] = 135,
  [147] = 147,
  [148] = 71,
  [149] = 149,
  [150] = 72,
  [151] = 151,
  [152] = 152,
  [153] = 72,
  [154] = 154,
  [155] = 147,
  [156] = 78,
  [157] = 154,
  [158] = 66,
  [159] = 128,
  [160] = 66,
  [161] = 149,
  [162] = 128,
  [163] = 163,
  [164] = 164,
  [165] = 143,
  [166] = 154,
  [167] = 167,
  [168] = 66,
  [169] = 70,
  [170] = 78,
  [171] = 71,
  [172] = 72,
  [173] = 65,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 138,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 71,
  [193] = 72,
  [194] = 194,
  [195] = 195,
  [196] = 66,
  [197] = 70,
  [198] = 78,
  [199] = 199,
  [200] = 72,
  [201] = 201,
  [202] = 202,
  [203] = 71,
  [204] = 204,
  [205] = 66,
  [206] = 70,
  [207] = 78,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 71,
  [214] = 209,
  [215] = 66,
  [216] = 216,
  [217] = 217,
  [218] = 78,
  [219] = 219,
  [220] = 72,
  [221] = 221,
  [222] = 70,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 209,
  [231] = 223,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 66,
  [237] = 70,
  [238] = 209,
  [239] = 209,
  [240] = 209,
  [241] = 223,
  [242] = 223,
  [243] = 71,
  [244] = 209,
  [245] = 245,
  [246] = 223,
  [247] = 65,
  [248] = 223,
  [249] = 209,
  [250] = 72,
  [251] = 223,
  [252] = 209,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 78,
  [257] = 223,
  [258] = 209,
  [259] = 259,
  [260] = 71,
  [261] = 70,
  [262] = 262,
  [263] = 223,
  [264] = 180,
  [265] = 66,
  [266] = 66,
  [267] = 70,
  [268] = 78,
  [269] = 209,
  [270] = 270,
  [271] = 271,
  [272] = 180,
  [273] = 72,
  [274] = 224,
  [275] = 71,
  [276] = 99,
  [277] = 223,
  [278] = 209,
  [279] = 279,
  [280] = 65,
  [281] = 209,
  [282] = 282,
  [283] = 283,
  [284] = 209,
  [285] = 209,
  [286] = 286,
  [287] = 287,
  [288] = 190,
  [289] = 189,
  [290] = 99,
  [291] = 291,
  [292] = 179,
  [293] = 99,
  [294] = 178,
  [295] = 295,
  [296] = 296,
  [297] = 65,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 221,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 309,
  [343] = 189,
  [344] = 344,
  [345] = 345,
  [346] = 190,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 318,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 344,
  [357] = 344,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 318,
  [362] = 353,
  [363] = 323,
  [364] = 353,
  [365] = 344,
  [366] = 366,
  [367] = 353,
  [368] = 368,
  [369] = 318,
  [370] = 344,
  [371] = 318,
  [372] = 353,
  [373] = 373,
  [374] = 99,
  [375] = 318,
  [376] = 353,
  [377] = 377,
  [378] = 378,
  [379] = 318,
  [380] = 380,
  [381] = 381,
  [382] = 318,
  [383] = 383,
  [384] = 384,
  [385] = 318,
  [386] = 386,
  [387] = 387,
  [388] = 318,
  [389] = 179,
  [390] = 318,
  [391] = 178,
  [392] = 318,
  [393] = 393,
  [394] = 318,
  [395] = 395,
  [396] = 318,
  [397] = 397,
  [398] = 318,
  [399] = 318,
  [400] = 400,
  [401] = 323,
  [402] = 323,
  [403] = 323,
  [404] = 323,
  [405] = 323,
  [406] = 323,
  [407] = 323,
  [408] = 323,
  [409] = 323,
  [410] = 323,
  [411] = 323,
  [412] = 323,
  [413] = 323,
  [414] = 323,
  [415] = 415,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '@') ADVANCE(235);
      if (lookahead == '[') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(274);
      if (lookahead == ']') ADVANCE(267);
      if (lookahead == '_') ADVANCE(217);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(259);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(271);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(258);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(377);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '@') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '@') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == '-') ADVANCE(457);
      if (lookahead == '\\') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '@') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == '\\') ADVANCE(456);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '@') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '+') ADVANCE(234);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '@') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '+') ADVANCE(234);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '@') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(257);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '[') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '[') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '[') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '[') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(73)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 45:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 47:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 48:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 49:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 50:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 51:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 52:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(453);
      END_STATE();
    case 53:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '[') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(206);
      END_STATE();
    case 54:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(453);
      END_STATE();
    case 55:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 56:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 57:
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(238);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(452);
      END_STATE();
    case 63:
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 64:
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(205);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(252);
      END_STATE();
    case 69:
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(215);
      END_STATE();
    case 70:
      if (lookahead == '\\') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 71:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 72:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 73:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(73)
      END_STATE();
    case 74:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      END_STATE();
    case 75:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 76:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 77:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 78:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 98:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 99:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 105:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(92);
      END_STATE();
    case 106:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(202);
      END_STATE();
    case 107:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 112:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 113:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 114:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 142:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 143:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(175);
      END_STATE();
    case 144:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 150:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == ',') ADVANCE(266);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '[') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(274);
      if (lookahead == ']') ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 151:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == ',') ADVANCE(266);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == 'A') ADVANCE(428);
      if (lookahead == 'B') ADVANCE(445);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(413);
      if (lookahead == 'F') ADVANCE(433);
      if (lookahead == 'H') ADVANCE(390);
      if (lookahead == 'I') ADVANCE(411);
      if (lookahead == 'L') ADVANCE(378);
      if (lookahead == 'P') ADVANCE(436);
      if (lookahead == 'R') ADVANCE(446);
      if (lookahead == 'U') ADVANCE(437);
      if (lookahead == 'V') ADVANCE(392);
      if (lookahead == 'W') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'b') ADVANCE(369);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'h') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(361);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 'w') ADVANCE(344);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 152:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == ',') ADVANCE(266);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(428);
      if (lookahead == 'B') ADVANCE(445);
      if (lookahead == 'C') ADVANCE(409);
      if (lookahead == 'E') ADVANCE(413);
      if (lookahead == 'F') ADVANCE(433);
      if (lookahead == 'H') ADVANCE(390);
      if (lookahead == 'I') ADVANCE(411);
      if (lookahead == 'L') ADVANCE(378);
      if (lookahead == 'P') ADVANCE(436);
      if (lookahead == 'R') ADVANCE(446);
      if (lookahead == 'U') ADVANCE(437);
      if (lookahead == 'V') ADVANCE(392);
      if (lookahead == 'W') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'b') ADVANCE(369);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'h') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'p') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(361);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 'w') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (lookahead == '.') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(259);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(259);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(451);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+') ADVANCE(459);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(238);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(215);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(259);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(284);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(285);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_version_instruction_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_version_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_version_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__version_instruction_semver);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_project_instruction_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_project_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_project_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_project_instruction_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_import_instruction_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_import_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_import_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'A') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'B') ADVANCE(97);
      if (lookahead == 'b') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'C') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'D') ADVANCE(163);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'D') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'D') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'G') ADVANCE(196);
      if (lookahead == 'g') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'H') ADVANCE(87);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'H') ADVANCE(95);
      if (lookahead == 'h') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'I') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'I') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'J') ADVANCE(92);
      if (lookahead == 'j') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'K') ADVANCE(202);
      if (lookahead == 'k') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'K') ADVANCE(91);
      if (lookahead == 'k') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'L') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'L') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'L') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'M') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'M') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'M') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'M') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'X') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead == 'x') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'N') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'N') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'N') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'P') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'P') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'P') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'P') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'S') ADVANCE(96);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'S') ADVANCE(103);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == 's') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'T') ADVANCE(99);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'T') ADVANCE(298);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'T') ADVANCE(293);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'T') ADVANCE(178);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'T') ADVANCE(132);
      if (lookahead == 'V') ADVANCE(172);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == 'v') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'U') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'U') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'Y') ADVANCE(175);
      if (lookahead == 'y') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'Y') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_COLON_LF);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'a') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'B') ADVANCE(393);
      if (lookahead == 'b') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'C') ADVANCE(403);
      if (lookahead == 'c') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'C') ADVANCE(397);
      if (lookahead == 'c') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'C') ADVANCE(442);
      if (lookahead == 'c') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'D') ADVANCE(450);
      if (lookahead == 'd') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'D') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'D') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(379);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(432);
      if (lookahead == 'O') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(406);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(430);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'G') ADVANCE(198);
      if (lookahead == 'g') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'H') ADVANCE(382);
      if (lookahead == 'h') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'H') ADVANCE(391);
      if (lookahead == 'h') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'I') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'I') ADVANCE(419);
      if (lookahead == 'i') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'I') ADVANCE(431);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'J') ADVANCE(387);
      if (lookahead == 'j') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'K') ADVANCE(204);
      if (lookahead == 'k') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'K') ADVANCE(386);
      if (lookahead == 'k') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'L') ADVANCE(440);
      if (lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'L') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'L') ADVANCE(384);
      if (lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'L') ADVANCE(447);
      if (lookahead == 'l') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'M') ADVANCE(385);
      if (lookahead == 'O') ADVANCE(424);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'M') ADVANCE(158);
      if (lookahead == 'm') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'M') ADVANCE(389);
      if (lookahead == 'm') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'N') ADVANCE(444);
      if (lookahead == 'X') ADVANCE(425);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'x') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'N') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'N') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'N') ADVANCE(443);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(402);
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(429);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(439);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'P') ADVANCE(448);
      if (lookahead == 'p') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'P') ADVANCE(423);
      if (lookahead == 'p') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'P') ADVANCE(420);
      if (lookahead == 'p') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'P') ADVANCE(422);
      if (lookahead == 'p') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(438);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(441);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(417);
      if (lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'S') ADVANCE(394);
      if (lookahead == 's') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'S') ADVANCE(400);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'S') ADVANCE(388);
      if (lookahead == 's') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'T') ADVANCE(396);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'T') ADVANCE(300);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'T') ADVANCE(295);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'T') ADVANCE(434);
      if (lookahead == 'V') ADVANCE(174);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == 'v') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'U') ADVANCE(398);
      if (lookahead == 'u') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'U') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'U') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'Y') ADVANCE(177);
      if (lookahead == 'y') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'Y') ADVANCE(426);
      if (lookahead == 'y') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_SLASH);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token1);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token1);
      if (lookahead == '\n') ADVANCE(259);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token1);
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token2);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+') ADVANCE(459);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token2);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+') ADVANCE(459);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+') ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+') ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_build_instruction_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 151},
  [2] = {.lex_state = 151},
  [3] = {.lex_state = 151},
  [4] = {.lex_state = 151},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 45},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 45},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 51},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 51},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 45},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 38},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 34},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 48},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 46},
  [96] = {.lex_state = 39},
  [97] = {.lex_state = 20},
  [98] = {.lex_state = 43},
  [99] = {.lex_state = 39},
  [100] = {.lex_state = 42},
  [101] = {.lex_state = 53},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 42},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 42},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 28},
  [111] = {.lex_state = 48},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 45},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 51},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 24},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 28},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 15},
  [128] = {.lex_state = 31},
  [129] = {.lex_state = 48},
  [130] = {.lex_state = 44},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 20},
  [133] = {.lex_state = 20},
  [134] = {.lex_state = 27},
  [135] = {.lex_state = 52},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 31},
  [138] = {.lex_state = 51},
  [139] = {.lex_state = 51},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 51},
  [142] = {.lex_state = 16},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 52},
  [147] = {.lex_state = 41},
  [148] = {.lex_state = 28},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 28},
  [151] = {.lex_state = 27},
  [152] = {.lex_state = 24},
  [153] = {.lex_state = 17},
  [154] = {.lex_state = 31},
  [155] = {.lex_state = 41},
  [156] = {.lex_state = 17},
  [157] = {.lex_state = 31},
  [158] = {.lex_state = 17},
  [159] = {.lex_state = 31},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 31},
  [163] = {.lex_state = 20},
  [164] = {.lex_state = 59},
  [165] = {.lex_state = 17},
  [166] = {.lex_state = 31},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 28},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 49},
  [174] = {.lex_state = 56},
  [175] = {.lex_state = 36},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 51},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 29},
  [181] = {.lex_state = 55},
  [182] = {.lex_state = 48},
  [183] = {.lex_state = 55},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 40},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 51},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 40},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 31},
  [195] = {.lex_state = 36},
  [196] = {.lex_state = 29},
  [197] = {.lex_state = 29},
  [198] = {.lex_state = 29},
  [199] = {.lex_state = 40},
  [200] = {.lex_state = 29},
  [201] = {.lex_state = 55},
  [202] = {.lex_state = 55},
  [203] = {.lex_state = 29},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 52},
  [209] = {.lex_state = 72},
  [210] = {.lex_state = 29},
  [211] = {.lex_state = 19},
  [212] = {.lex_state = 59},
  [213] = {.lex_state = 19},
  [214] = {.lex_state = 72},
  [215] = {.lex_state = 19},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 29},
  [218] = {.lex_state = 19},
  [219] = {.lex_state = 151},
  [220] = {.lex_state = 19},
  [221] = {.lex_state = 51},
  [222] = {.lex_state = 19},
  [223] = {.lex_state = 72},
  [224] = {.lex_state = 54},
  [225] = {.lex_state = 60},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 151},
  [229] = {.lex_state = 36},
  [230] = {.lex_state = 72},
  [231] = {.lex_state = 72},
  [232] = {.lex_state = 20},
  [233] = {.lex_state = 20},
  [234] = {.lex_state = 20},
  [235] = {.lex_state = 15},
  [236] = {.lex_state = 20},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 72},
  [239] = {.lex_state = 72},
  [240] = {.lex_state = 72},
  [241] = {.lex_state = 72},
  [242] = {.lex_state = 72},
  [243] = {.lex_state = 18},
  [244] = {.lex_state = 72},
  [245] = {.lex_state = 15},
  [246] = {.lex_state = 72},
  [247] = {.lex_state = 48},
  [248] = {.lex_state = 72},
  [249] = {.lex_state = 72},
  [250] = {.lex_state = 18},
  [251] = {.lex_state = 72},
  [252] = {.lex_state = 72},
  [253] = {.lex_state = 52},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 29},
  [256] = {.lex_state = 18},
  [257] = {.lex_state = 72},
  [258] = {.lex_state = 72},
  [259] = {.lex_state = 151},
  [260] = {.lex_state = 20},
  [261] = {.lex_state = 18},
  [262] = {.lex_state = 20},
  [263] = {.lex_state = 72},
  [264] = {.lex_state = 42},
  [265] = {.lex_state = 18},
  [266] = {.lex_state = 42},
  [267] = {.lex_state = 42},
  [268] = {.lex_state = 42},
  [269] = {.lex_state = 72},
  [270] = {.lex_state = 20},
  [271] = {.lex_state = 20},
  [272] = {.lex_state = 18},
  [273] = {.lex_state = 42},
  [274] = {.lex_state = 54},
  [275] = {.lex_state = 42},
  [276] = {.lex_state = 51},
  [277] = {.lex_state = 72},
  [278] = {.lex_state = 72},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 63},
  [281] = {.lex_state = 72},
  [282] = {.lex_state = 6},
  [283] = {.lex_state = 151},
  [284] = {.lex_state = 72},
  [285] = {.lex_state = 72},
  [286] = {.lex_state = 71},
  [287] = {.lex_state = 151},
  [288] = {.lex_state = 27},
  [289] = {.lex_state = 27},
  [290] = {.lex_state = 63},
  [291] = {.lex_state = 51},
  [292] = {.lex_state = 27},
  [293] = {.lex_state = 48},
  [294] = {.lex_state = 27},
  [295] = {.lex_state = 20},
  [296] = {.lex_state = 29},
  [297] = {.lex_state = 15},
  [298] = {.lex_state = 15},
  [299] = {.lex_state = 20},
  [300] = {.lex_state = 20},
  [301] = {.lex_state = 68},
  [302] = {.lex_state = 151},
  [303] = {.lex_state = 151},
  [304] = {.lex_state = 20},
  [305] = {.lex_state = 27},
  [306] = {.lex_state = 20},
  [307] = {.lex_state = 48},
  [308] = {.lex_state = 29},
  [309] = {.lex_state = 64},
  [310] = {.lex_state = 27},
  [311] = {.lex_state = 29},
  [312] = {.lex_state = 13},
  [313] = {.lex_state = 64},
  [314] = {.lex_state = 68},
  [315] = {.lex_state = 15},
  [316] = {.lex_state = 151},
  [317] = {.lex_state = 6},
  [318] = {.lex_state = 151},
  [319] = {.lex_state = 68},
  [320] = {.lex_state = 6},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 42},
  [323] = {.lex_state = 69},
  [324] = {.lex_state = 6},
  [325] = {.lex_state = 151},
  [326] = {.lex_state = 77},
  [327] = {.lex_state = 151},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 6},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 6},
  [337] = {.lex_state = 60},
  [338] = {.lex_state = 6},
  [339] = {.lex_state = 151},
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 6},
  [342] = {.lex_state = 151},
  [343] = {.lex_state = 151},
  [344] = {.lex_state = 75},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 151},
  [347] = {.lex_state = 59},
  [348] = {.lex_state = 151},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 6},
  [351] = {.lex_state = 6},
  [352] = {.lex_state = 151},
  [353] = {.lex_state = 70},
  [354] = {.lex_state = 6},
  [355] = {.lex_state = 6},
  [356] = {.lex_state = 75},
  [357] = {.lex_state = 75},
  [358] = {.lex_state = 6},
  [359] = {.lex_state = 6},
  [360] = {.lex_state = 6},
  [361] = {.lex_state = 151},
  [362] = {.lex_state = 70},
  [363] = {.lex_state = 69},
  [364] = {.lex_state = 70},
  [365] = {.lex_state = 75},
  [366] = {.lex_state = 151},
  [367] = {.lex_state = 70},
  [368] = {.lex_state = 78},
  [369] = {.lex_state = 151},
  [370] = {.lex_state = 75},
  [371] = {.lex_state = 151},
  [372] = {.lex_state = 70},
  [373] = {.lex_state = 6},
  [374] = {.lex_state = 6},
  [375] = {.lex_state = 151},
  [376] = {.lex_state = 70},
  [377] = {.lex_state = 77},
  [378] = {.lex_state = 6},
  [379] = {.lex_state = 151},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 6},
  [382] = {.lex_state = 151},
  [383] = {.lex_state = 6},
  [384] = {.lex_state = 263},
  [385] = {.lex_state = 151},
  [386] = {.lex_state = 78},
  [387] = {.lex_state = 151},
  [388] = {.lex_state = 151},
  [389] = {.lex_state = 151},
  [390] = {.lex_state = 151},
  [391] = {.lex_state = 151},
  [392] = {.lex_state = 151},
  [393] = {.lex_state = 6},
  [394] = {.lex_state = 151},
  [395] = {.lex_state = 6},
  [396] = {.lex_state = 151},
  [397] = {.lex_state = 6},
  [398] = {.lex_state = 151},
  [399] = {.lex_state = 151},
  [400] = {.lex_state = 151},
  [401] = {.lex_state = 69},
  [402] = {.lex_state = 69},
  [403] = {.lex_state = 69},
  [404] = {.lex_state = 69},
  [405] = {.lex_state = 69},
  [406] = {.lex_state = 69},
  [407] = {.lex_state = 69},
  [408] = {.lex_state = 69},
  [409] = {.lex_state = 69},
  [410] = {.lex_state = 69},
  [411] = {.lex_state = 69},
  [412] = {.lex_state = 69},
  [413] = {.lex_state = 69},
  [414] = {.lex_state = 69},
  [415] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__immediate_user_name_or_group_fragment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PLUS2] = ACTIONS(1),
    [aux_sym_earthfile_local_path_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(349),
    [sym__instruction] = STATE(336),
    [sym_from_instruction] = STATE(354),
    [sym_run_instruction] = STATE(354),
    [sym_cmd_instruction] = STATE(354),
    [sym_label_instruction] = STATE(354),
    [sym_expose_instruction] = STATE(354),
    [sym_env_instruction] = STATE(354),
    [sym_copy_instruction] = STATE(354),
    [sym_entrypoint_instruction] = STATE(354),
    [sym_volume_instruction] = STATE(354),
    [sym_user_instruction] = STATE(354),
    [sym_workdir_instruction] = STATE(354),
    [sym_arg_instruction] = STATE(354),
    [sym_healthcheck_instruction] = STATE(354),
    [sym_line_continuation] = STATE(1),
    [sym_version_instruction] = STATE(354),
    [sym_project_instruction] = STATE(354),
    [sym_import_instruction] = STATE(354),
    [sym_target_header] = STATE(354),
    [sym_function_header] = STATE(354),
    [sym_build_instruction] = STATE(354),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_from_instruction_token1] = ACTIONS(7),
    [aux_sym_run_instruction_token1] = ACTIONS(9),
    [aux_sym_cmd_instruction_token1] = ACTIONS(11),
    [aux_sym_label_instruction_token1] = ACTIONS(13),
    [aux_sym_expose_instruction_token1] = ACTIONS(15),
    [aux_sym_env_instruction_token1] = ACTIONS(17),
    [aux_sym_copy_instruction_token1] = ACTIONS(19),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(21),
    [aux_sym_volume_instruction_token1] = ACTIONS(23),
    [aux_sym_user_instruction_token1] = ACTIONS(25),
    [aux_sym_workdir_instruction_token1] = ACTIONS(27),
    [aux_sym_arg_instruction_token1] = ACTIONS(29),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(31),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [sym_comment] = ACTIONS(33),
    [aux_sym_version_instruction_token1] = ACTIONS(35),
    [aux_sym_project_instruction_token1] = ACTIONS(37),
    [aux_sym_import_instruction_token1] = ACTIONS(39),
    [aux_sym_target_token1] = ACTIONS(41),
    [aux_sym_function_target_token1] = ACTIONS(43),
    [aux_sym_build_instruction_token1] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(52), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(55), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(58), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(61), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(64), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(67), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(70), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(73), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(76), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(79), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(82), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(85), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_version_instruction_token1,
    ACTIONS(94), 1,
      aux_sym_project_instruction_token1,
    ACTIONS(97), 1,
      aux_sym_import_instruction_token1,
    ACTIONS(100), 1,
      aux_sym_target_token1,
    ACTIONS(103), 1,
      aux_sym_function_target_token1,
    ACTIONS(106), 1,
      aux_sym_build_instruction_token1,
    STATE(336), 1,
      sym__instruction,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(354), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_healthcheck_instruction,
      sym_version_instruction,
      sym_project_instruction,
      sym_import_instruction,
      sym_target_header,
      sym_function_header,
      sym_build_instruction,
  [95] = 26,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(7), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_version_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_project_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_import_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_target_token1,
    ACTIONS(43), 1,
      aux_sym_function_target_token1,
    ACTIONS(45), 1,
      aux_sym_build_instruction_token1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_line_continuation,
    STATE(336), 1,
      sym__instruction,
    STATE(354), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_healthcheck_instruction,
      sym_version_instruction,
      sym_project_instruction,
      sym_import_instruction,
      sym_target_header,
      sym_function_header,
      sym_build_instruction,
  [192] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(4), 1,
      sym_line_continuation,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(111), 19,
      aux_sym_from_instruction_token1,
      aux_sym_run_instruction_token1,
      aux_sym_cmd_instruction_token1,
      aux_sym_label_instruction_token1,
      aux_sym_expose_instruction_token1,
      aux_sym_env_instruction_token1,
      aux_sym_copy_instruction_token1,
      aux_sym_entrypoint_instruction_token1,
      aux_sym_volume_instruction_token1,
      aux_sym_user_instruction_token1,
      aux_sym_workdir_instruction_token1,
      aux_sym_arg_instruction_token1,
      aux_sym_healthcheck_instruction_token1,
      aux_sym_version_instruction_token1,
      aux_sym_project_instruction_token1,
      aux_sym_import_instruction_token1,
      aux_sym_target_token1,
      aux_sym_function_target_token1,
      aux_sym_build_instruction_token1,
  [224] = 15,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(113), 1,
      anon_sym_DASH_DASH,
    ACTIONS(115), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      sym_line_continuation,
    STATE(29), 1,
      aux_sym_run_instruction_repeat1,
    STATE(30), 1,
      aux_sym_shell_command_repeat1,
    STATE(152), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(254), 1,
      sym_shell_fragment,
    STATE(381), 1,
      sym__anon_comment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(96), 2,
      sym_param,
      sym_mount_param,
    STATE(393), 2,
      sym_shell_command,
      sym_json_string_array,
  [273] = 15,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(113), 1,
      anon_sym_DASH_DASH,
    ACTIONS(115), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      aux_sym_run_instruction_repeat1,
    STATE(6), 1,
      sym_line_continuation,
    STATE(30), 1,
      aux_sym_shell_command_repeat1,
    STATE(152), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(254), 1,
      sym_shell_fragment,
    STATE(381), 1,
      sym__anon_comment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(96), 2,
      sym_param,
      sym_mount_param,
    STATE(383), 2,
      sym_shell_command,
      sym_json_string_array,
  [322] = 14,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      aux_sym_image_name_token1,
    ACTIONS(127), 1,
      anon_sym_DASH_DASH,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DOT_SLASH,
    ACTIONS(133), 1,
      anon_sym_DOT_DOT_SLASH,
    STATE(7), 1,
      sym_line_continuation,
    STATE(10), 1,
      sym_param,
    STATE(25), 1,
      sym_expansion,
    STATE(39), 1,
      sym_image_name,
    STATE(133), 1,
      sym_earthfile_local_path,
    STATE(135), 1,
      aux_sym_earthfile_local_path_repeat1,
    STATE(295), 3,
      sym_image_spec,
      sym_target,
      sym_earthfile_ref,
  [367] = 12,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      anon_sym_DOLLAR2,
    ACTIONS(139), 1,
      aux_sym__env_key_token1,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_line_continuation,
    STATE(44), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(112), 1,
      sym__imm_expansion,
    STATE(140), 1,
      sym__immediate_expansion,
    ACTIONS(147), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(305), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [407] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_line_continuation,
    STATE(30), 1,
      aux_sym_shell_command_repeat1,
    STATE(152), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(254), 1,
      sym_shell_fragment,
    STATE(381), 1,
      sym__anon_comment,
    STATE(355), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [444] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      aux_sym_image_name_token1,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DOT_SLASH,
    ACTIONS(133), 1,
      anon_sym_DOT_DOT_SLASH,
    STATE(10), 1,
      sym_line_continuation,
    STATE(25), 1,
      sym_expansion,
    STATE(39), 1,
      sym_image_name,
    STATE(133), 1,
      sym_earthfile_local_path,
    STATE(135), 1,
      aux_sym_earthfile_local_path_repeat1,
    STATE(306), 3,
      sym_image_spec,
      sym_target,
      sym_earthfile_ref,
  [483] = 13,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_DASH_DASH,
    ACTIONS(133), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(151), 1,
      aux_sym_image_name_token1,
    ACTIONS(153), 1,
      anon_sym_DOT_SLASH,
    STATE(11), 1,
      sym_line_continuation,
    STATE(18), 1,
      sym_param,
    STATE(24), 1,
      sym_expansion,
    STATE(63), 1,
      sym_image_name,
    STATE(133), 1,
      sym_earthfile_local_path,
    STATE(146), 1,
      aux_sym_earthfile_local_path_repeat1,
    STATE(235), 2,
      sym_image_spec,
      sym_earthfile_ref,
  [524] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_line_continuation,
    STATE(30), 1,
      aux_sym_shell_command_repeat1,
    STATE(152), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(254), 1,
      sym_shell_fragment,
    STATE(381), 1,
      sym__anon_comment,
    STATE(329), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [561] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(78), 1,
      sym__imm_expansion,
    STATE(79), 1,
      sym__immediate_expansion,
    ACTIONS(161), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(184), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [595] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(78), 1,
      sym__imm_expansion,
    STATE(79), 1,
      sym__immediate_expansion,
    ACTIONS(161), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(321), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [629] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(78), 1,
      sym__imm_expansion,
    STATE(79), 1,
      sym__immediate_expansion,
    ACTIONS(161), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(335), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [663] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    STATE(16), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(78), 1,
      sym__imm_expansion,
    STATE(79), 1,
      sym__immediate_expansion,
    ACTIONS(161), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(341), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [697] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(167), 1,
      anon_sym_DOLLAR2,
    ACTIONS(170), 1,
      aux_sym_image_name_token2,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(87), 1,
      sym__immediate_expansion,
    STATE(17), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(163), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_PLUS2,
  [726] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(133), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(151), 1,
      aux_sym_image_name_token1,
    ACTIONS(153), 1,
      anon_sym_DOT_SLASH,
    STATE(18), 1,
      sym_line_continuation,
    STATE(24), 1,
      sym_expansion,
    STATE(63), 1,
      sym_image_name,
    STATE(133), 1,
      sym_earthfile_local_path,
    STATE(146), 1,
      aux_sym_earthfile_local_path_repeat1,
    STATE(245), 2,
      sym_image_spec,
      sym_earthfile_ref,
  [761] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(173), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym_line_continuation,
    STATE(22), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(78), 1,
      sym__imm_expansion,
    STATE(79), 1,
      sym__immediate_expansion,
    ACTIONS(161), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    ACTIONS(175), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [792] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      aux_sym_image_name_token1,
    ACTIONS(127), 1,
      anon_sym_DASH_DASH,
    ACTIONS(131), 1,
      anon_sym_DOT_SLASH,
    ACTIONS(133), 1,
      anon_sym_DOT_DOT_SLASH,
    STATE(20), 1,
      sym_line_continuation,
    STATE(25), 1,
      sym_expansion,
    STATE(52), 1,
      sym_param,
    STATE(135), 1,
      aux_sym_earthfile_local_path_repeat1,
    STATE(304), 2,
      sym_image_name,
      sym_earthfile_local_path,
  [827] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(179), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(181), 1,
      anon_sym_DOLLAR2,
    ACTIONS(183), 1,
      aux_sym_image_name_token2,
    STATE(17), 1,
      aux_sym_image_name_repeat1,
    STATE(21), 1,
      sym_line_continuation,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(87), 1,
      sym__immediate_expansion,
    ACTIONS(177), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_PLUS2,
  [858] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(187), 1,
      anon_sym_DOLLAR2,
    STATE(78), 1,
      sym__imm_expansion,
    STATE(79), 1,
      sym__immediate_expansion,
    ACTIONS(192), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(22), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(190), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [887] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_DASH_DASH,
    ACTIONS(195), 1,
      anon_sym_DOLLAR2,
    ACTIONS(198), 1,
      aux_sym_image_name_token2,
    STATE(83), 1,
      sym__immediate_expansion,
    STATE(85), 1,
      sym__imm_expansion,
    STATE(23), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(163), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_PLUS2,
  [916] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR2,
    ACTIONS(205), 1,
      aux_sym_image_name_token2,
    ACTIONS(207), 1,
      anon_sym_DASH_DASH,
    STATE(24), 1,
      sym_line_continuation,
    STATE(26), 1,
      aux_sym_image_name_repeat1,
    STATE(83), 1,
      sym__immediate_expansion,
    STATE(85), 1,
      sym__imm_expansion,
    ACTIONS(201), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_PLUS2,
  [947] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(181), 1,
      anon_sym_DOLLAR2,
    ACTIONS(183), 1,
      aux_sym_image_name_token2,
    ACTIONS(207), 1,
      aux_sym_from_instruction_token2,
    STATE(21), 1,
      aux_sym_image_name_repeat1,
    STATE(25), 1,
      sym_line_continuation,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(87), 1,
      sym__immediate_expansion,
    ACTIONS(201), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_PLUS2,
  [978] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH,
    ACTIONS(203), 1,
      anon_sym_DOLLAR2,
    ACTIONS(205), 1,
      aux_sym_image_name_token2,
    STATE(23), 1,
      aux_sym_image_name_repeat1,
    STATE(26), 1,
      sym_line_continuation,
    STATE(83), 1,
      sym__immediate_expansion,
    STATE(85), 1,
      sym__imm_expansion,
    ACTIONS(177), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_PLUS2,
  [1009] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_line_continuation,
    STATE(68), 1,
      aux_sym_shell_command_repeat1,
    STATE(152), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(317), 1,
      sym_shell_fragment,
    STATE(381), 1,
      sym__anon_comment,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1039] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_shell_command_repeat1,
    STATE(28), 1,
      sym_line_continuation,
    STATE(152), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(350), 1,
      sym_shell_fragment,
    STATE(381), 1,
      sym__anon_comment,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1069] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(209), 1,
      anon_sym_DASH_DASH,
    ACTIONS(212), 1,
      aux_sym_shell_fragment_token1,
    STATE(29), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(96), 2,
      sym_param,
      sym_mount_param,
    ACTIONS(214), 4,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1093] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_line_continuation,
    STATE(68), 1,
      aux_sym_shell_command_repeat1,
    STATE(152), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(279), 1,
      sym_shell_fragment,
    STATE(381), 1,
      sym__anon_comment,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1123] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(220), 1,
      anon_sym_DOLLAR2,
    ACTIONS(222), 1,
      aux_sym_image_digest_token1,
    STATE(31), 1,
      sym_line_continuation,
    STATE(60), 1,
      aux_sym_image_digest_repeat1,
    STATE(144), 1,
      sym__imm_expansion,
    STATE(167), 1,
      sym__immediate_expansion,
    ACTIONS(218), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [1152] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(224), 1,
      aux_sym_path_token1,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
      anon_sym_DASH_DASH,
    STATE(32), 1,
      sym_line_continuation,
    STATE(108), 1,
      sym_expansion,
    STATE(138), 1,
      aux_sym_copy_instruction_repeat1,
    STATE(139), 1,
      aux_sym_copy_instruction_repeat2,
    STATE(221), 1,
      sym_param,
    STATE(322), 1,
      sym_path,
  [1183] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      anon_sym_DOLLAR2,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_BSLASH,
    STATE(33), 1,
      sym_line_continuation,
    STATE(56), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    ACTIONS(234), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1212] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      anon_sym_DOLLAR2,
    ACTIONS(236), 1,
      anon_sym_BSLASH,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_line_continuation,
    STATE(56), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    ACTIONS(234), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1241] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      anon_sym_DOLLAR2,
    ACTIONS(236), 1,
      anon_sym_BSLASH,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(35), 1,
      sym_line_continuation,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    ACTIONS(234), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1270] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(224), 1,
      aux_sym_path_token1,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
      anon_sym_DASH_DASH,
    STATE(32), 1,
      aux_sym_copy_instruction_repeat1,
    STATE(36), 1,
      sym_line_continuation,
    STATE(108), 1,
      sym_expansion,
    STATE(121), 1,
      aux_sym_copy_instruction_repeat2,
    STATE(221), 1,
      sym_param,
    STATE(322), 1,
      sym_path,
  [1301] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(244), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    STATE(37), 1,
      sym_line_continuation,
    STATE(57), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(186), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(187), 1,
      sym__immediate_expansion,
    STATE(207), 1,
      sym__imm_expansion,
    ACTIONS(242), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1330] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      aux_sym__env_key_token1,
    ACTIONS(248), 1,
      anon_sym_DOLLAR2,
    STATE(112), 1,
      sym__imm_expansion,
    STATE(140), 1,
      sym__immediate_expansion,
    ACTIONS(251), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(38), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1357] = 10,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(260), 1,
      anon_sym_AT,
    ACTIONS(262), 1,
      anon_sym_PLUS2,
    STATE(39), 1,
      sym_line_continuation,
    STATE(132), 1,
      sym_image_tag,
    STATE(262), 1,
      sym_target_direct,
    STATE(270), 1,
      sym_image_digest,
  [1388] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(266), 1,
      anon_sym_DOLLAR2,
    ACTIONS(269), 1,
      aux_sym_image_tag_token1,
    ACTIONS(272), 1,
      anon_sym_DASH_DASH,
    STATE(120), 1,
      sym__imm_expansion,
    STATE(143), 1,
      sym__immediate_expansion,
    ACTIONS(264), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(40), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1415] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(276), 1,
      anon_sym_DOLLAR2,
    ACTIONS(279), 1,
      anon_sym_DASH_DASH,
    ACTIONS(281), 1,
      aux_sym_earthfile_local_path_token2,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(149), 1,
      sym__immediate_expansion,
    ACTIONS(274), 2,
      anon_sym_LF,
      anon_sym_PLUS2,
    STATE(41), 2,
      sym_line_continuation,
      aux_sym_earthfile_local_path_repeat2,
  [1442] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(286), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(288), 1,
      anon_sym_DOLLAR2,
    ACTIONS(290), 1,
      aux_sym_earthfile_local_path_token2,
    STATE(42), 1,
      sym_line_continuation,
    STATE(48), 1,
      aux_sym_earthfile_local_path_repeat2,
    STATE(161), 1,
      sym__immediate_expansion,
    STATE(170), 1,
      sym__imm_expansion,
    ACTIONS(284), 2,
      anon_sym_LF,
      anon_sym_PLUS2,
  [1471] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      anon_sym_DOLLAR2,
    ACTIONS(236), 1,
      anon_sym_BSLASH,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_line_continuation,
    STATE(56), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    ACTIONS(234), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1500] = 9,
    ACTIONS(137), 1,
      anon_sym_DOLLAR2,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(175), 1,
      aux_sym__env_key_token1,
    STATE(38), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(44), 1,
      sym_line_continuation,
    STATE(112), 1,
      sym__imm_expansion,
    STATE(140), 1,
      sym__immediate_expansion,
    ACTIONS(147), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1529] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      anon_sym_DOLLAR2,
    ACTIONS(236), 1,
      anon_sym_BSLASH,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(45), 1,
      sym_line_continuation,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    ACTIONS(234), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1558] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_DOLLAR2,
    ACTIONS(300), 1,
      aux_sym_image_tag_token1,
    ACTIONS(302), 1,
      anon_sym_DASH_DASH,
    STATE(40), 1,
      aux_sym_image_tag_repeat1,
    STATE(46), 1,
      sym_line_continuation,
    STATE(120), 1,
      sym__imm_expansion,
    STATE(143), 1,
      sym__immediate_expansion,
    ACTIONS(296), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1587] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(306), 1,
      anon_sym_DOLLAR2,
    ACTIONS(308), 1,
      anon_sym_DASH_DASH,
    ACTIONS(310), 1,
      aux_sym_earthfile_local_path_token2,
    STATE(41), 1,
      aux_sym_earthfile_local_path_repeat2,
    STATE(47), 1,
      sym_line_continuation,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(149), 1,
      sym__immediate_expansion,
    ACTIONS(304), 2,
      anon_sym_LF,
      anon_sym_PLUS2,
  [1616] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(288), 1,
      anon_sym_DOLLAR2,
    ACTIONS(290), 1,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(308), 1,
      aux_sym_from_instruction_token2,
    STATE(48), 1,
      sym_line_continuation,
    STATE(62), 1,
      aux_sym_earthfile_local_path_repeat2,
    STATE(161), 1,
      sym__immediate_expansion,
    STATE(170), 1,
      sym__imm_expansion,
    ACTIONS(304), 2,
      anon_sym_LF,
      anon_sym_PLUS2,
  [1645] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(286), 1,
      anon_sym_DASH_DASH,
    ACTIONS(306), 1,
      anon_sym_DOLLAR2,
    ACTIONS(310), 1,
      aux_sym_earthfile_local_path_token2,
    STATE(47), 1,
      aux_sym_earthfile_local_path_repeat2,
    STATE(49), 1,
      sym_line_continuation,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(149), 1,
      sym__immediate_expansion,
    ACTIONS(284), 2,
      anon_sym_LF,
      anon_sym_PLUS2,
  [1674] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(302), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(312), 1,
      anon_sym_DOLLAR2,
    ACTIONS(314), 1,
      aux_sym_image_tag_token1,
    STATE(50), 1,
      sym_line_continuation,
    STATE(61), 1,
      aux_sym_image_tag_repeat1,
    STATE(156), 1,
      sym__imm_expansion,
    STATE(165), 1,
      sym__immediate_expansion,
    ACTIONS(296), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1703] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      anon_sym_DOLLAR2,
    ACTIONS(236), 1,
      anon_sym_BSLASH,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(51), 1,
      sym_line_continuation,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    ACTIONS(234), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1732] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      aux_sym_image_name_token1,
    ACTIONS(131), 1,
      anon_sym_DOT_SLASH,
    ACTIONS(133), 1,
      anon_sym_DOT_DOT_SLASH,
    STATE(25), 1,
      sym_expansion,
    STATE(52), 1,
      sym_line_continuation,
    STATE(135), 1,
      aux_sym_earthfile_local_path_repeat1,
    STATE(299), 2,
      sym_image_name,
      sym_earthfile_local_path,
  [1761] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(320), 1,
      aux_sym_label_pair_token1,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      anon_sym_SQUOTE,
    STATE(176), 1,
      sym_label_pair,
    STATE(53), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
    STATE(339), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1788] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(329), 1,
      anon_sym_LF,
    ACTIONS(331), 1,
      aux_sym_label_pair_token1,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      aux_sym_label_instruction_repeat1,
    STATE(54), 1,
      sym_line_continuation,
    STATE(176), 1,
      sym_label_pair,
    STATE(339), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1817] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      aux_sym_shell_fragment_token1,
    STATE(55), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(337), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1838] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(344), 1,
      anon_sym_DOLLAR2,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_BSLASH,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    ACTIONS(349), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(56), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1865] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(357), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(360), 1,
      anon_sym_DOLLAR2,
    STATE(186), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(187), 1,
      sym__immediate_expansion,
    STATE(207), 1,
      sym__imm_expansion,
    ACTIONS(355), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(57), 2,
      sym_line_continuation,
      aux_sym__user_name_or_group_repeat1,
  [1892] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(244), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    STATE(37), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(58), 1,
      sym_line_continuation,
    STATE(186), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(187), 1,
      sym__immediate_expansion,
    STATE(207), 1,
      sym__imm_expansion,
    ACTIONS(363), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1921] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      aux_sym_shell_fragment_token1,
    STATE(55), 1,
      aux_sym_mount_param_repeat1,
    STATE(59), 1,
      sym_line_continuation,
    ACTIONS(365), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1944] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(371), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      anon_sym_DOLLAR2,
    ACTIONS(378), 1,
      aux_sym_image_digest_token1,
    STATE(144), 1,
      sym__imm_expansion,
    STATE(167), 1,
      sym__immediate_expansion,
    ACTIONS(373), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    STATE(60), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1971] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(272), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(381), 1,
      anon_sym_DOLLAR2,
    ACTIONS(384), 1,
      aux_sym_image_tag_token1,
    STATE(156), 1,
      sym__imm_expansion,
    STATE(165), 1,
      sym__immediate_expansion,
    ACTIONS(264), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(61), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1998] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(279), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(387), 1,
      anon_sym_DOLLAR2,
    ACTIONS(390), 1,
      aux_sym_earthfile_local_path_token2,
    STATE(161), 1,
      sym__immediate_expansion,
    STATE(170), 1,
      sym__imm_expansion,
    ACTIONS(274), 2,
      anon_sym_LF,
      anon_sym_PLUS2,
    STATE(62), 2,
      sym_line_continuation,
      aux_sym_earthfile_local_path_repeat2,
  [2025] = 10,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 1,
      anon_sym_DASH_DASH,
    ACTIONS(260), 1,
      anon_sym_AT,
    ACTIONS(262), 1,
      anon_sym_PLUS2,
    ACTIONS(393), 1,
      anon_sym_COLON,
    STATE(63), 1,
      sym_line_continuation,
    STATE(132), 1,
      sym_image_tag,
    STATE(262), 1,
      sym_target_direct,
    STATE(270), 1,
      sym_image_digest,
  [2056] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      aux_sym_shell_fragment_token1,
    STATE(59), 1,
      aux_sym_mount_param_repeat1,
    STATE(64), 1,
      sym_line_continuation,
    ACTIONS(395), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2079] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(399), 1,
      anon_sym_EQ,
    ACTIONS(403), 1,
      aux_sym_shell_fragment_token1,
    STATE(65), 1,
      sym_line_continuation,
    ACTIONS(401), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2099] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(66), 1,
      sym_line_continuation,
    ACTIONS(407), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(405), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2117] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(411), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(414), 1,
      anon_sym_DOLLAR2,
    STATE(187), 1,
      sym__immediate_expansion,
    STATE(207), 1,
      sym__imm_expansion,
    STATE(216), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(67), 2,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
  [2143] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(419), 1,
      anon_sym_POUND,
    STATE(185), 1,
      sym__comment_line,
    STATE(381), 1,
      sym__anon_comment,
    STATE(68), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
    ACTIONS(417), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2165] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(422), 1,
      aux_sym_label_pair_token1,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      aux_sym_label_instruction_repeat1,
    STATE(69), 1,
      sym_line_continuation,
    STATE(176), 1,
      sym_label_pair,
    STATE(339), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2191] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(70), 1,
      sym_line_continuation,
    ACTIONS(430), 2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(428), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [2209] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(71), 1,
      sym_line_continuation,
    ACTIONS(434), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(432), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [2227] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(72), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(436), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [2245] = 9,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(244), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    ACTIONS(440), 1,
      anon_sym_LF,
    STATE(67), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(73), 1,
      sym_line_continuation,
    STATE(187), 1,
      sym__immediate_expansion,
    STATE(207), 1,
      sym__imm_expansion,
    STATE(216), 1,
      sym__immediate_user_name_or_group_fragment,
  [2273] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(444), 1,
      aux_sym_shell_fragment_token1,
    STATE(74), 1,
      sym_line_continuation,
    ACTIONS(442), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2291] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(405), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [2309] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 1,
      aux_sym_shell_fragment_token1,
    STATE(76), 1,
      sym_line_continuation,
    ACTIONS(337), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2327] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(77), 1,
      sym_line_continuation,
    ACTIONS(434), 2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(432), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [2345] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(78), 1,
      sym_line_continuation,
    ACTIONS(448), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(446), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2363] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(79), 1,
      sym_line_continuation,
    ACTIONS(452), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(450), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2381] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(80), 1,
      sym_line_continuation,
    ACTIONS(438), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(436), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2399] = 7,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(456), 1,
      aux_sym_path_token2,
    ACTIONS(459), 1,
      anon_sym_DOLLAR2,
    STATE(180), 1,
      sym__immediate_expansion,
    STATE(198), 1,
      sym__imm_expansion,
    ACTIONS(454), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(81), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2423] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(464), 1,
      aux_sym_path_token2,
    ACTIONS(466), 1,
      anon_sym_DOLLAR2,
    STATE(82), 1,
      sym_line_continuation,
    STATE(84), 1,
      aux_sym_path_repeat1,
    STATE(180), 1,
      sym__immediate_expansion,
    STATE(198), 1,
      sym__imm_expansion,
    ACTIONS(462), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [2449] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(83), 1,
      sym_line_continuation,
    ACTIONS(470), 2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(468), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [2467] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(464), 1,
      aux_sym_path_token2,
    ACTIONS(466), 1,
      anon_sym_DOLLAR2,
    STATE(81), 1,
      aux_sym_path_repeat1,
    STATE(84), 1,
      sym_line_continuation,
    STATE(180), 1,
      sym__immediate_expansion,
    STATE(198), 1,
      sym__imm_expansion,
    ACTIONS(472), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [2493] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(448), 2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(446), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [2511] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(86), 1,
      sym_line_continuation,
    ACTIONS(448), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(446), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [2529] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(470), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(468), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [2547] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(88), 1,
      sym_line_continuation,
    ACTIONS(434), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(432), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2565] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(89), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(405), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [2583] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(90), 1,
      sym_line_continuation,
    ACTIONS(430), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(428), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [2601] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(91), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(436), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [2619] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(474), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(476), 1,
      anon_sym_NONE,
    ACTIONS(478), 1,
      anon_sym_DASH_DASH,
    STATE(92), 1,
      sym_line_continuation,
    STATE(129), 1,
      aux_sym_copy_instruction_repeat1,
    STATE(307), 1,
      sym_param,
    STATE(338), 1,
      sym_cmd_instruction,
  [2644] = 7,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(480), 1,
      anon_sym_LF,
    ACTIONS(482), 1,
      anon_sym_DOLLAR2,
    ACTIONS(485), 1,
      aux_sym_image_alias_token2,
    STATE(211), 1,
      sym__immediate_expansion,
    STATE(218), 1,
      sym__imm_expansion,
    STATE(93), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2667] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(488), 1,
      anon_sym_LF,
    ACTIONS(490), 1,
      anon_sym_DOLLAR2,
    ACTIONS(492), 1,
      aux_sym_image_alias_token2,
    STATE(94), 1,
      sym_line_continuation,
    STATE(107), 1,
      aux_sym_image_alias_repeat1,
    STATE(211), 1,
      sym__immediate_expansion,
    STATE(218), 1,
      sym__imm_expansion,
  [2692] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(403), 1,
      aux_sym_image_name_token1,
    ACTIONS(494), 1,
      anon_sym_EQ,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(401), 4,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2711] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(498), 1,
      aux_sym_shell_fragment_token1,
    STATE(96), 1,
      sym_line_continuation,
    ACTIONS(496), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2728] = 7,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(500), 1,
      anon_sym_LF,
    ACTIONS(502), 1,
      anon_sym_DOLLAR,
    ACTIONS(504), 1,
      aux_sym_expose_port_token1,
    STATE(97), 1,
      sym_line_continuation,
    STATE(103), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(232), 2,
      sym_expansion,
      sym_expose_port,
  [2751] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(244), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    STATE(73), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(98), 1,
      sym_line_continuation,
    STATE(187), 1,
      sym__immediate_expansion,
    STATE(207), 1,
      sym__imm_expansion,
    STATE(216), 1,
      sym__immediate_user_name_or_group_fragment,
  [2776] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(508), 1,
      aux_sym_shell_fragment_token1,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(506), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2793] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(510), 1,
      aux_sym_path_token2,
    ACTIONS(512), 1,
      anon_sym_DOLLAR2,
    ACTIONS(514), 1,
      sym__non_newline_whitespace,
    STATE(100), 1,
      sym_line_continuation,
    STATE(106), 1,
      aux_sym_path_repeat1,
    STATE(264), 1,
      sym__immediate_expansion,
    STATE(268), 1,
      sym__imm_expansion,
  [2818] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      aux_sym_path_token1,
    ACTIONS(518), 1,
      anon_sym_DOLLAR,
    STATE(82), 1,
      sym_expansion,
    STATE(101), 1,
      sym_line_continuation,
    STATE(210), 1,
      sym_path,
    STATE(330), 1,
      sym_json_string_array,
  [2843] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_LF,
    ACTIONS(522), 1,
      aux_sym_path_token2,
    ACTIONS(524), 1,
      anon_sym_DOLLAR2,
    STATE(102), 1,
      sym_line_continuation,
    STATE(104), 1,
      aux_sym_path_repeat1,
    STATE(256), 1,
      sym__imm_expansion,
    STATE(272), 1,
      sym__immediate_expansion,
  [2868] = 6,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(528), 1,
      anon_sym_DOLLAR,
    ACTIONS(531), 1,
      aux_sym_expose_port_token1,
    STATE(103), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(232), 2,
      sym_expansion,
      sym_expose_port,
  [2889] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(514), 1,
      anon_sym_LF,
    ACTIONS(522), 1,
      aux_sym_path_token2,
    ACTIONS(524), 1,
      anon_sym_DOLLAR2,
    STATE(104), 1,
      sym_line_continuation,
    STATE(105), 1,
      aux_sym_path_repeat1,
    STATE(256), 1,
      sym__imm_expansion,
    STATE(272), 1,
      sym__immediate_expansion,
  [2914] = 7,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(536), 1,
      aux_sym_path_token2,
    ACTIONS(539), 1,
      anon_sym_DOLLAR2,
    STATE(256), 1,
      sym__imm_expansion,
    STATE(272), 1,
      sym__immediate_expansion,
    STATE(105), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2937] = 7,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(534), 1,
      sym__non_newline_whitespace,
    ACTIONS(542), 1,
      aux_sym_path_token2,
    ACTIONS(545), 1,
      anon_sym_DOLLAR2,
    STATE(264), 1,
      sym__immediate_expansion,
    STATE(268), 1,
      sym__imm_expansion,
    STATE(106), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2960] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(490), 1,
      anon_sym_DOLLAR2,
    ACTIONS(492), 1,
      aux_sym_image_alias_token2,
    ACTIONS(548), 1,
      anon_sym_LF,
    STATE(93), 1,
      aux_sym_image_alias_repeat1,
    STATE(107), 1,
      sym_line_continuation,
    STATE(211), 1,
      sym__immediate_expansion,
    STATE(218), 1,
      sym__imm_expansion,
  [2985] = 8,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(510), 1,
      aux_sym_path_token2,
    ACTIONS(512), 1,
      anon_sym_DOLLAR2,
    ACTIONS(520), 1,
      sym__non_newline_whitespace,
    STATE(100), 1,
      aux_sym_path_repeat1,
    STATE(108), 1,
      sym_line_continuation,
    STATE(264), 1,
      sym__immediate_expansion,
    STATE(268), 1,
      sym__imm_expansion,
  [3010] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(430), 2,
      anon_sym_DASH_DASH,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(428), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
  [3026] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(448), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(446), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3042] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(550), 1,
      anon_sym_DOLLAR,
    ACTIONS(552), 1,
      aux_sym_expose_port_token1,
    STATE(97), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(111), 1,
      sym_line_continuation,
    STATE(232), 2,
      sym_expansion,
      sym_expose_port,
  [3062] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      aux_sym__env_key_token1,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(446), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3078] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(438), 1,
      aux_sym__env_key_token1,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(436), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3094] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(434), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(432), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3110] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(508), 1,
      aux_sym_image_name_token1,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(506), 4,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3126] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    ACTIONS(405), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3142] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(117), 1,
      sym_line_continuation,
    ACTIONS(448), 2,
      anon_sym_DASH_DASH,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(446), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
  [3158] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      anon_sym_DASH_DASH,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(436), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
  [3174] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(434), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    ACTIONS(432), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3190] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(448), 2,
      aux_sym_image_tag_token1,
      anon_sym_DASH_DASH,
    ACTIONS(446), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3206] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(516), 1,
      aux_sym_path_token1,
    ACTIONS(518), 1,
      anon_sym_DOLLAR,
    STATE(82), 1,
      sym_expansion,
    STATE(121), 1,
      sym_line_continuation,
    STATE(141), 1,
      aux_sym_copy_instruction_repeat2,
    STATE(296), 1,
      sym_path,
  [3228] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      aux_sym_image_tag_token1,
      anon_sym_DASH_DASH,
    ACTIONS(436), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3244] = 4,
    ACTIONS(554), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      anon_sym_BSLASH_LF,
    STATE(123), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(556), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [3260] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      aux_sym__env_key_token1,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(405), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3276] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(563), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(561), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3292] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(434), 2,
      anon_sym_DASH_DASH,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(432), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
  [3308] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    ACTIONS(436), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3324] = 6,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_BSLASH,
    ACTIONS(567), 1,
      anon_sym_SQUOTE,
    STATE(128), 1,
      sym_line_continuation,
    STATE(137), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(569), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3344] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(474), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(478), 1,
      anon_sym_DASH_DASH,
    STATE(129), 1,
      sym_line_continuation,
    STATE(182), 1,
      aux_sym_copy_instruction_repeat1,
    STATE(307), 1,
      sym_param,
    STATE(380), 1,
      sym_cmd_instruction,
  [3366] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(220), 1,
      anon_sym_DOLLAR2,
    ACTIONS(222), 1,
      aux_sym_image_digest_token1,
    STATE(31), 1,
      aux_sym_image_digest_repeat1,
    STATE(130), 1,
      sym_line_continuation,
    STATE(144), 1,
      sym__imm_expansion,
    STATE(167), 1,
      sym__immediate_expansion,
  [3388] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(434), 1,
      aux_sym__env_key_token1,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(432), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3404] = 6,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(260), 1,
      anon_sym_AT,
    ACTIONS(571), 1,
      anon_sym_LF,
    STATE(132), 1,
      sym_line_continuation,
    STATE(233), 1,
      sym_image_digest,
    ACTIONS(573), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [3424] = 6,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(262), 1,
      anon_sym_PLUS2,
    ACTIONS(575), 1,
      anon_sym_LF,
    STATE(133), 1,
      sym_line_continuation,
    STATE(262), 1,
      sym_target_direct,
    ACTIONS(577), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [3444] = 6,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(579), 1,
      anon_sym_LF,
    ACTIONS(581), 1,
      aux_sym__env_key_token1,
    STATE(310), 1,
      sym_env_pair,
    STATE(387), 1,
      sym__env_key,
    STATE(134), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [3464] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(133), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(584), 1,
      anon_sym_DOLLAR,
    ACTIONS(586), 1,
      aux_sym_earthfile_local_path_token1,
    STATE(42), 1,
      sym_expansion,
    STATE(135), 1,
      sym_line_continuation,
    STATE(208), 1,
      aux_sym_earthfile_local_path_repeat1,
  [3486] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      aux_sym_image_tag_token1,
      anon_sym_DASH_DASH,
    ACTIONS(405), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3502] = 5,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(588), 1,
      anon_sym_BSLASH,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
    ACTIONS(593), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
    STATE(137), 2,
      sym_line_continuation,
      aux_sym_single_quoted_string_repeat1,
  [3520] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(596), 1,
      aux_sym_path_token1,
    ACTIONS(598), 1,
      anon_sym_DOLLAR,
    ACTIONS(600), 1,
      anon_sym_DASH_DASH,
    STATE(221), 1,
      sym_param,
    STATE(138), 2,
      sym_line_continuation,
      aux_sym_copy_instruction_repeat1,
  [3540] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(516), 1,
      aux_sym_path_token1,
    ACTIONS(518), 1,
      anon_sym_DOLLAR,
    STATE(82), 1,
      sym_expansion,
    STATE(139), 1,
      sym_line_continuation,
    STATE(141), 1,
      aux_sym_copy_instruction_repeat2,
    STATE(308), 1,
      sym_path,
  [3562] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(452), 1,
      aux_sym__env_key_token1,
    STATE(140), 1,
      sym_line_continuation,
    ACTIONS(450), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3578] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(603), 1,
      aux_sym_path_token1,
    ACTIONS(606), 1,
      anon_sym_DOLLAR,
    STATE(108), 1,
      sym_expansion,
    STATE(322), 1,
      sym_path,
    STATE(141), 2,
      sym_line_continuation,
      aux_sym_copy_instruction_repeat2,
  [3598] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(142), 1,
      sym_line_continuation,
    ACTIONS(434), 2,
      aux_sym_image_tag_token1,
      anon_sym_DASH_DASH,
    ACTIONS(432), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3614] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(611), 2,
      aux_sym_image_tag_token1,
      anon_sym_DASH_DASH,
    ACTIONS(609), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3630] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(448), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    ACTIONS(446), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3646] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(405), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
  [3662] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(133), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(613), 1,
      anon_sym_DOLLAR,
    ACTIONS(615), 1,
      aux_sym_earthfile_local_path_token1,
    STATE(49), 1,
      sym_expansion,
    STATE(146), 1,
      sym_line_continuation,
    STATE(208), 1,
      aux_sym_earthfile_local_path_repeat1,
  [3684] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(312), 1,
      anon_sym_DOLLAR2,
    ACTIONS(314), 1,
      aux_sym_image_tag_token1,
    STATE(50), 1,
      aux_sym_image_tag_repeat1,
    STATE(147), 1,
      sym_line_continuation,
    STATE(156), 1,
      sym__imm_expansion,
    STATE(165), 1,
      sym__immediate_expansion,
  [3706] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(434), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(432), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3722] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(619), 2,
      anon_sym_DASH_DASH,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(617), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
  [3738] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(150), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(436), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3754] = 7,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(621), 1,
      anon_sym_LF,
    ACTIONS(623), 1,
      aux_sym__env_key_token1,
    STATE(134), 1,
      aux_sym_env_instruction_repeat1,
    STATE(151), 1,
      sym_line_continuation,
    STATE(310), 1,
      sym_env_pair,
    STATE(387), 1,
      sym__env_key,
  [3776] = 5,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(629), 1,
      anon_sym_BSLASH_LF,
    STATE(123), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(627), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [3794] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(436), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3810] = 6,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_BSLASH,
    ACTIONS(631), 1,
      anon_sym_SQUOTE,
    STATE(154), 1,
      sym_line_continuation,
    STATE(159), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(569), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3830] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_DOLLAR2,
    ACTIONS(300), 1,
      aux_sym_image_tag_token1,
    STATE(46), 1,
      aux_sym_image_tag_repeat1,
    STATE(120), 1,
      sym__imm_expansion,
    STATE(143), 1,
      sym__immediate_expansion,
    STATE(155), 1,
      sym_line_continuation,
  [3852] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(448), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(446), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3868] = 6,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_BSLASH,
    ACTIONS(633), 1,
      anon_sym_SQUOTE,
    STATE(128), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(157), 1,
      sym_line_continuation,
    ACTIONS(569), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3888] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(158), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(405), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3904] = 6,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_BSLASH,
    ACTIONS(635), 1,
      anon_sym_SQUOTE,
    STATE(137), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(569), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3924] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(160), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      aux_sym_from_instruction_token2,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(405), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
  [3940] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(161), 1,
      sym_line_continuation,
    ACTIONS(619), 2,
      aux_sym_from_instruction_token2,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(617), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
  [3956] = 6,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_BSLASH,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
    STATE(137), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(569), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3976] = 5,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(639), 1,
      anon_sym_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(641), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(643), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [3994] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(645), 1,
      aux_sym__env_key_token1,
    STATE(151), 1,
      aux_sym_env_instruction_repeat1,
    STATE(164), 1,
      sym_line_continuation,
    STATE(310), 1,
      sym_env_pair,
    STATE(313), 1,
      sym__env_key,
    STATE(340), 1,
      sym__spaced_env_pair,
  [4016] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(165), 1,
      sym_line_continuation,
    ACTIONS(611), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(609), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4032] = 6,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_BSLASH,
    ACTIONS(647), 1,
      anon_sym_SQUOTE,
    STATE(162), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(166), 1,
      sym_line_continuation,
    ACTIONS(569), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [4052] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(167), 1,
      sym_line_continuation,
    ACTIONS(651), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    ACTIONS(649), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4068] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(168), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(405), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [4084] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(169), 1,
      sym_line_continuation,
    ACTIONS(430), 2,
      aux_sym_from_instruction_token2,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(428), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
  [4100] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(170), 1,
      sym_line_continuation,
    ACTIONS(448), 2,
      aux_sym_from_instruction_token2,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(446), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
  [4116] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(171), 1,
      sym_line_continuation,
    ACTIONS(434), 2,
      aux_sym_from_instruction_token2,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(432), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
  [4132] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(172), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      aux_sym_from_instruction_token2,
      aux_sym_earthfile_local_path_token2,
    ACTIONS(436), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
  [4148] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(403), 1,
      aux_sym_path_token1,
    ACTIONS(653), 1,
      anon_sym_EQ,
    STATE(173), 1,
      sym_line_continuation,
    ACTIONS(401), 2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [4165] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(655), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(657), 1,
      anon_sym_DOLLAR,
    STATE(58), 1,
      sym_expansion,
    STATE(174), 1,
      sym_line_continuation,
    STATE(312), 1,
      sym__user_name_or_group,
  [4184] = 5,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_line_continuation,
    STATE(195), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(661), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [4201] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(663), 1,
      anon_sym_LF,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(665), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4216] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(667), 1,
      aux_sym_path_token1,
    ACTIONS(669), 1,
      anon_sym_DOLLAR,
    STATE(102), 1,
      sym_expansion,
    STATE(177), 1,
      sym_line_continuation,
    STATE(331), 1,
      sym_path,
  [4235] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(671), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym_line_continuation,
    ACTIONS(673), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4250] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      anon_sym_LF,
    STATE(179), 1,
      sym_line_continuation,
    ACTIONS(677), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4265] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(681), 1,
      anon_sym_DOLLAR2,
    STATE(180), 1,
      sym_line_continuation,
    ACTIONS(679), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4280] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(683), 1,
      anon_sym_DOLLAR,
    ACTIONS(685), 1,
      aux_sym_image_alias_token1,
    STATE(94), 1,
      sym_expansion,
    STATE(181), 1,
      sym_line_continuation,
    STATE(333), 1,
      sym_image_alias,
  [4299] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(598), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(687), 1,
      anon_sym_DASH_DASH,
    STATE(307), 1,
      sym_param,
    STATE(182), 2,
      sym_line_continuation,
      aux_sym_copy_instruction_repeat1,
  [4316] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(683), 1,
      anon_sym_DOLLAR,
    ACTIONS(685), 1,
      aux_sym_image_alias_token1,
    STATE(94), 1,
      sym_expansion,
    STATE(183), 1,
      sym_line_continuation,
    STATE(360), 1,
      sym_image_alias,
  [4335] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(690), 1,
      anon_sym_LF,
    STATE(184), 1,
      sym_line_continuation,
    ACTIONS(692), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4350] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(185), 1,
      sym_line_continuation,
    ACTIONS(694), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4363] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(696), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4376] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(698), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4389] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(516), 1,
      aux_sym_path_token1,
    ACTIONS(518), 1,
      anon_sym_DOLLAR,
    STATE(82), 1,
      sym_expansion,
    STATE(188), 1,
      sym_line_continuation,
    STATE(311), 1,
      sym_path,
  [4408] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(700), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_line_continuation,
    ACTIONS(702), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4423] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(704), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(706), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4438] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(191), 1,
      sym_line_continuation,
    ACTIONS(708), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4451] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(192), 1,
      sym_line_continuation,
    ACTIONS(432), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4464] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(193), 1,
      sym_line_continuation,
    ACTIONS(436), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4477] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(710), 2,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
    ACTIONS(712), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [4492] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(714), 1,
      anon_sym_DQUOTE,
    ACTIONS(716), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
    STATE(195), 2,
      sym_line_continuation,
      aux_sym_json_string_repeat1,
  [4507] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      anon_sym_DOLLAR2,
    STATE(196), 1,
      sym_line_continuation,
    ACTIONS(407), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4522] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      anon_sym_DOLLAR2,
    STATE(197), 1,
      sym_line_continuation,
    ACTIONS(430), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4537] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(446), 1,
      anon_sym_DOLLAR2,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(448), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4552] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(199), 1,
      sym_line_continuation,
    ACTIONS(719), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4565] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(436), 1,
      anon_sym_DOLLAR2,
    STATE(200), 1,
      sym_line_continuation,
    ACTIONS(438), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4580] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(683), 1,
      anon_sym_DOLLAR,
    ACTIONS(685), 1,
      aux_sym_image_alias_token1,
    STATE(94), 1,
      sym_expansion,
    STATE(201), 1,
      sym_line_continuation,
    STATE(328), 1,
      sym_image_alias,
  [4599] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(683), 1,
      anon_sym_DOLLAR,
    ACTIONS(685), 1,
      aux_sym_image_alias_token1,
    STATE(94), 1,
      sym_expansion,
    STATE(202), 1,
      sym_line_continuation,
    STATE(320), 1,
      sym_image_alias,
  [4618] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(432), 1,
      anon_sym_DOLLAR2,
    STATE(203), 1,
      sym_line_continuation,
    ACTIONS(434), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4633] = 5,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(721), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      aux_sym_json_string_repeat1,
    STATE(204), 1,
      sym_line_continuation,
    ACTIONS(661), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [4650] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(205), 1,
      sym_line_continuation,
    ACTIONS(405), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4663] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(206), 1,
      sym_line_continuation,
    ACTIONS(428), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4676] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(207), 1,
      sym_line_continuation,
    ACTIONS(446), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4689] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(723), 1,
      anon_sym_DOLLAR,
    ACTIONS(725), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(728), 1,
      aux_sym_earthfile_local_path_token1,
    STATE(208), 2,
      sym_line_continuation,
      aux_sym_earthfile_local_path_repeat1,
  [4706] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(730), 1,
      anon_sym_LBRACE,
    ACTIONS(732), 1,
      sym_variable,
    STATE(209), 1,
      sym_line_continuation,
    STATE(250), 1,
      sym__expansion_body,
  [4722] = 5,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(734), 1,
      anon_sym_LF,
    ACTIONS(736), 1,
      sym__non_newline_whitespace,
    STATE(210), 1,
      sym_line_continuation,
    STATE(255), 1,
      aux_sym_volume_instruction_repeat1,
  [4738] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(211), 1,
      sym_line_continuation,
    ACTIONS(738), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4750] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(740), 1,
      anon_sym_DASH_DASH,
    ACTIONS(742), 1,
      sym__version_instruction_semver,
    STATE(212), 1,
      sym_line_continuation,
    STATE(347), 1,
      sym_param,
  [4766] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(213), 1,
      sym_line_continuation,
    ACTIONS(432), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4778] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    ACTIONS(746), 1,
      sym_variable,
    STATE(214), 1,
      sym_line_continuation,
    STATE(220), 1,
      sym__expansion_body,
  [4794] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(215), 1,
      sym_line_continuation,
    ACTIONS(405), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4806] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(216), 1,
      sym_line_continuation,
    ACTIONS(748), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4818] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_LF,
    ACTIONS(752), 1,
      sym__non_newline_whitespace,
    STATE(217), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [4832] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(218), 1,
      sym_line_continuation,
    ACTIONS(446), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4844] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(755), 1,
      anon_sym_COMMA2,
    ACTIONS(758), 1,
      anon_sym_RBRACK,
    STATE(219), 2,
      sym_line_continuation,
      aux_sym_json_string_array_repeat1,
  [4858] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(220), 1,
      sym_line_continuation,
    ACTIONS(436), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4870] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      aux_sym_path_token1,
    STATE(221), 1,
      sym_line_continuation,
    ACTIONS(762), 2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [4884] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(222), 1,
      sym_line_continuation,
    ACTIONS(428), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4896] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(766), 1,
      sym_variable,
    STATE(223), 1,
      sym_line_continuation,
    STATE(237), 1,
      sym__expansion_body,
  [4912] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(613), 1,
      anon_sym_DOLLAR,
    ACTIONS(615), 1,
      aux_sym_earthfile_local_path_token1,
    STATE(49), 1,
      sym_expansion,
    STATE(224), 1,
      sym_line_continuation,
  [4928] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(740), 1,
      anon_sym_DASH_DASH,
    ACTIONS(768), 1,
      aux_sym_arg_instruction_token2,
    STATE(225), 1,
      sym_line_continuation,
    STATE(337), 1,
      sym_param,
  [4944] = 5,
    ACTIONS(770), 1,
      anon_sym_LF,
    ACTIONS(772), 1,
      anon_sym_BSLASH_LF,
    STATE(28), 1,
      sym_required_line_continuation,
    STATE(226), 1,
      sym_line_continuation,
    STATE(227), 1,
      aux_sym_shell_command_repeat2,
  [4960] = 4,
    ACTIONS(774), 1,
      anon_sym_LF,
    ACTIONS(776), 1,
      anon_sym_BSLASH_LF,
    STATE(28), 1,
      sym_required_line_continuation,
    STATE(227), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [4974] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(779), 1,
      anon_sym_COMMA2,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      aux_sym_json_string_array_repeat1,
    STATE(228), 1,
      sym_line_continuation,
  [4990] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(783), 1,
      anon_sym_DQUOTE,
    STATE(229), 1,
      sym_line_continuation,
    ACTIONS(785), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [5004] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(787), 1,
      anon_sym_LBRACE,
    ACTIONS(789), 1,
      sym_variable,
    STATE(230), 1,
      sym_line_continuation,
    STATE(273), 1,
      sym__expansion_body,
  [5020] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(787), 1,
      anon_sym_LBRACE,
    ACTIONS(789), 1,
      sym_variable,
    STATE(231), 1,
      sym_line_continuation,
    STATE(267), 1,
      sym__expansion_body,
  [5036] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(791), 1,
      anon_sym_LF,
    STATE(232), 1,
      sym_line_continuation,
    ACTIONS(793), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [5050] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(795), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
    ACTIONS(797), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [5064] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(799), 1,
      anon_sym_LF,
    STATE(234), 1,
      sym_line_continuation,
    ACTIONS(801), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [5078] = 5,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(803), 1,
      anon_sym_LF,
    ACTIONS(805), 1,
      anon_sym_DASH_DASH,
    STATE(235), 1,
      sym_line_continuation,
    STATE(373), 1,
      sym_param,
  [5094] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      anon_sym_LF,
    STATE(236), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [5108] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      anon_sym_LF,
    STATE(237), 1,
      sym_line_continuation,
    ACTIONS(430), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [5122] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(807), 1,
      anon_sym_LBRACE,
    ACTIONS(809), 1,
      sym_variable,
    STATE(150), 1,
      sym__expansion_body,
    STATE(238), 1,
      sym_line_continuation,
  [5138] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(811), 1,
      anon_sym_LBRACE,
    ACTIONS(813), 1,
      sym_variable,
    STATE(200), 1,
      sym__expansion_body,
    STATE(239), 1,
      sym_line_continuation,
  [5154] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
    ACTIONS(817), 1,
      sym_variable,
    STATE(91), 1,
      sym__expansion_body,
    STATE(240), 1,
      sym_line_continuation,
  [5170] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(811), 1,
      anon_sym_LBRACE,
    ACTIONS(813), 1,
      sym_variable,
    STATE(197), 1,
      sym__expansion_body,
    STATE(241), 1,
      sym_line_continuation,
  [5186] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
    ACTIONS(817), 1,
      sym_variable,
    STATE(90), 1,
      sym__expansion_body,
    STATE(242), 1,
      sym_line_continuation,
  [5202] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(434), 1,
      aux_sym_path_token2,
    STATE(243), 1,
      sym_line_continuation,
    ACTIONS(432), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5216] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
    ACTIONS(821), 1,
      sym_variable,
    STATE(193), 1,
      sym__expansion_body,
    STATE(244), 1,
      sym_line_continuation,
  [5232] = 5,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(805), 1,
      anon_sym_DASH_DASH,
    ACTIONS(823), 1,
      anon_sym_LF,
    STATE(245), 1,
      sym_line_continuation,
    STATE(332), 1,
      sym_param,
  [5248] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
    ACTIONS(821), 1,
      sym_variable,
    STATE(206), 1,
      sym__expansion_body,
    STATE(246), 1,
      sym_line_continuation,
  [5264] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(825), 1,
      anon_sym_EQ,
    STATE(247), 1,
      sym_line_continuation,
    ACTIONS(401), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5278] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(730), 1,
      anon_sym_LBRACE,
    ACTIONS(732), 1,
      sym_variable,
    STATE(248), 1,
      sym_line_continuation,
    STATE(261), 1,
      sym__expansion_body,
  [5294] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      sym_variable,
    STATE(72), 1,
      sym__expansion_body,
    STATE(249), 1,
      sym_line_continuation,
  [5310] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(438), 1,
      aux_sym_path_token2,
    STATE(250), 1,
      sym_line_continuation,
    ACTIONS(436), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5324] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      sym_variable,
    STATE(70), 1,
      sym__expansion_body,
    STATE(251), 1,
      sym_line_continuation,
  [5340] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
    ACTIONS(833), 1,
      sym_variable,
    STATE(172), 1,
      sym__expansion_body,
    STATE(252), 1,
      sym_line_continuation,
  [5356] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(837), 1,
      aux_sym_earthfile_local_path_token1,
    STATE(253), 1,
      sym_line_continuation,
    ACTIONS(835), 2,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_SLASH,
  [5370] = 5,
    ACTIONS(772), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(839), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_required_line_continuation,
    STATE(254), 1,
      sym_line_continuation,
    STATE(282), 1,
      aux_sym_shell_command_repeat2,
  [5386] = 5,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      sym__non_newline_whitespace,
    ACTIONS(841), 1,
      anon_sym_LF,
    STATE(217), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(255), 1,
      sym_line_continuation,
  [5402] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      aux_sym_path_token2,
    STATE(256), 1,
      sym_line_continuation,
    ACTIONS(446), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5416] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
    ACTIONS(833), 1,
      sym_variable,
    STATE(169), 1,
      sym__expansion_body,
    STATE(257), 1,
      sym_line_continuation,
  [5432] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
    ACTIONS(845), 1,
      sym_variable,
    STATE(153), 1,
      sym__expansion_body,
    STATE(258), 1,
      sym_line_continuation,
  [5448] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    ACTIONS(849), 1,
      anon_sym_DQUOTE,
    STATE(259), 1,
      sym_line_continuation,
    STATE(283), 1,
      sym_json_string,
  [5464] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(432), 1,
      anon_sym_LF,
    STATE(260), 1,
      sym_line_continuation,
    ACTIONS(434), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [5478] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(430), 1,
      aux_sym_path_token2,
    STATE(261), 1,
      sym_line_continuation,
    ACTIONS(428), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5492] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(851), 1,
      anon_sym_LF,
    STATE(262), 1,
      sym_line_continuation,
    ACTIONS(853), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [5506] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(855), 1,
      anon_sym_LBRACE,
    ACTIONS(857), 1,
      sym_variable,
    STATE(109), 1,
      sym__expansion_body,
    STATE(263), 1,
      sym_line_continuation,
  [5522] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(679), 1,
      aux_sym_path_token2,
    STATE(264), 1,
      sym_line_continuation,
    ACTIONS(681), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5536] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      aux_sym_path_token2,
    STATE(265), 1,
      sym_line_continuation,
    ACTIONS(405), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5550] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      aux_sym_path_token2,
    STATE(266), 1,
      sym_line_continuation,
    ACTIONS(405), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5564] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(430), 1,
      aux_sym_path_token2,
    STATE(267), 1,
      sym_line_continuation,
    ACTIONS(428), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5578] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      aux_sym_path_token2,
    STATE(268), 1,
      sym_line_continuation,
    ACTIONS(446), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5592] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(859), 1,
      anon_sym_LBRACE,
    ACTIONS(861), 1,
      sym_variable,
    STATE(127), 1,
      sym__expansion_body,
    STATE(269), 1,
      sym_line_continuation,
  [5608] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(863), 1,
      anon_sym_LF,
    STATE(270), 1,
      sym_line_continuation,
    ACTIONS(865), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [5622] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(867), 1,
      anon_sym_LF,
    STATE(271), 1,
      sym_line_continuation,
    ACTIONS(869), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [5636] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(679), 1,
      aux_sym_path_token2,
    STATE(272), 1,
      sym_line_continuation,
    ACTIONS(681), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5650] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(438), 1,
      aux_sym_path_token2,
    STATE(273), 1,
      sym_line_continuation,
    ACTIONS(436), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5664] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(584), 1,
      anon_sym_DOLLAR,
    ACTIONS(586), 1,
      aux_sym_earthfile_local_path_token1,
    STATE(42), 1,
      sym_expansion,
    STATE(274), 1,
      sym_line_continuation,
  [5680] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(434), 1,
      aux_sym_path_token2,
    STATE(275), 1,
      sym_line_continuation,
    ACTIONS(432), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5694] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(508), 1,
      aux_sym_path_token1,
    STATE(276), 1,
      sym_line_continuation,
    ACTIONS(506), 2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [5708] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    ACTIONS(746), 1,
      sym_variable,
    STATE(222), 1,
      sym__expansion_body,
    STATE(277), 1,
      sym_line_continuation,
  [5724] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(871), 1,
      anon_sym_LBRACE,
    ACTIONS(873), 1,
      sym_variable,
    STATE(80), 1,
      sym__expansion_body,
    STATE(278), 1,
      sym_line_continuation,
  [5740] = 5,
    ACTIONS(772), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(875), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_required_line_continuation,
    STATE(226), 1,
      aux_sym_shell_command_repeat2,
    STATE(279), 1,
      sym_line_continuation,
  [5756] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(401), 1,
      sym__version_instruction_semver,
    ACTIONS(403), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(877), 1,
      anon_sym_EQ,
    STATE(280), 1,
      sym_line_continuation,
  [5772] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
    ACTIONS(881), 1,
      sym_variable,
    STATE(113), 1,
      sym__expansion_body,
    STATE(281), 1,
      sym_line_continuation,
  [5788] = 5,
    ACTIONS(772), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(875), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_required_line_continuation,
    STATE(227), 1,
      aux_sym_shell_command_repeat2,
    STATE(282), 1,
      sym_line_continuation,
  [5804] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(779), 1,
      anon_sym_COMMA2,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_json_string_array_repeat1,
    STATE(283), 1,
      sym_line_continuation,
  [5820] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(855), 1,
      anon_sym_LBRACE,
    ACTIONS(857), 1,
      sym_variable,
    STATE(118), 1,
      sym__expansion_body,
    STATE(284), 1,
      sym_line_continuation,
  [5836] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    ACTIONS(887), 1,
      sym_variable,
    STATE(122), 1,
      sym__expansion_body,
    STATE(285), 1,
      sym_line_continuation,
  [5852] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(889), 1,
      aux_sym_param_token1,
    ACTIONS(891), 1,
      anon_sym_mount,
    STATE(286), 1,
      sym_line_continuation,
  [5865] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(287), 1,
      sym_line_continuation,
    ACTIONS(758), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5876] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(706), 1,
      aux_sym__env_key_token1,
    STATE(288), 1,
      sym_line_continuation,
  [5889] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(700), 1,
      anon_sym_LF,
    ACTIONS(702), 1,
      aux_sym__env_key_token1,
    STATE(289), 1,
      sym_line_continuation,
  [5902] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(506), 1,
      sym__version_instruction_semver,
    ACTIONS(508), 1,
      aux_sym_arg_instruction_token2,
    STATE(290), 1,
      sym_line_continuation,
  [5915] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(893), 1,
      aux_sym_path_token1,
    ACTIONS(895), 1,
      anon_sym_DOLLAR,
    STATE(291), 1,
      sym_line_continuation,
  [5928] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(677), 1,
      aux_sym__env_key_token1,
    STATE(292), 1,
      sym_line_continuation,
  [5941] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(293), 1,
      sym_line_continuation,
    ACTIONS(506), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5952] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(671), 1,
      anon_sym_LF,
    ACTIONS(673), 1,
      aux_sym__env_key_token1,
    STATE(294), 1,
      sym_line_continuation,
  [5965] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(897), 1,
      anon_sym_LF,
    ACTIONS(899), 1,
      aux_sym_from_instruction_token2,
    STATE(295), 1,
      sym_line_continuation,
  [5978] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(901), 1,
      anon_sym_LF,
    ACTIONS(903), 1,
      sym__non_newline_whitespace,
    STATE(296), 1,
      sym_line_continuation,
  [5991] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(401), 1,
      anon_sym_LF,
    ACTIONS(905), 1,
      anon_sym_EQ,
    STATE(297), 1,
      sym_line_continuation,
  [6004] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(907), 1,
      anon_sym_LF,
    ACTIONS(909), 1,
      anon_sym_EQ,
    STATE(298), 1,
      sym_line_continuation,
  [6017] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(911), 1,
      anon_sym_LF,
    ACTIONS(913), 1,
      aux_sym_from_instruction_token2,
    STATE(299), 1,
      sym_line_continuation,
  [6030] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(915), 1,
      anon_sym_LF,
    ACTIONS(917), 1,
      aux_sym_from_instruction_token2,
    STATE(300), 1,
      sym_line_continuation,
  [6043] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(919), 1,
      aux_sym_mount_param_param_token1,
    STATE(64), 1,
      sym_mount_param_param,
    STATE(301), 1,
      sym_line_continuation,
  [6056] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(302), 1,
      sym_line_continuation,
    ACTIONS(921), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6067] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(849), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_json_string,
    STATE(303), 1,
      sym_line_continuation,
  [6080] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(923), 1,
      anon_sym_LF,
    ACTIONS(925), 1,
      aux_sym_from_instruction_token2,
    STATE(304), 1,
      sym_line_continuation,
  [6093] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(927), 1,
      anon_sym_LF,
    ACTIONS(929), 1,
      aux_sym__env_key_token1,
    STATE(305), 1,
      sym_line_continuation,
  [6106] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(931), 1,
      anon_sym_LF,
    ACTIONS(933), 1,
      aux_sym_from_instruction_token2,
    STATE(306), 1,
      sym_line_continuation,
  [6119] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(307), 1,
      sym_line_continuation,
    ACTIONS(762), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [6130] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(903), 1,
      sym__non_newline_whitespace,
    ACTIONS(935), 1,
      anon_sym_LF,
    STATE(308), 1,
      sym_line_continuation,
  [6143] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(309), 1,
      sym_line_continuation,
    ACTIONS(937), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [6154] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(939), 1,
      anon_sym_LF,
    ACTIONS(941), 1,
      aux_sym__env_key_token1,
    STATE(310), 1,
      sym_line_continuation,
  [6167] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    STATE(311), 1,
      sym_line_continuation,
    ACTIONS(750), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [6178] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(943), 1,
      anon_sym_LF,
    ACTIONS(945), 1,
      anon_sym_COLON,
    STATE(312), 1,
      sym_line_continuation,
  [6191] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(947), 1,
      anon_sym_EQ,
    ACTIONS(949), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(313), 1,
      sym_line_continuation,
  [6204] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(919), 1,
      aux_sym_mount_param_param_token1,
    STATE(76), 1,
      sym_mount_param_param,
    STATE(314), 1,
      sym_line_continuation,
  [6217] = 4,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(951), 1,
      anon_sym_LF,
    ACTIONS(953), 1,
      anon_sym_EQ,
    STATE(315), 1,
      sym_line_continuation,
  [6230] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(316), 1,
      sym_line_continuation,
    ACTIONS(955), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6241] = 3,
    ACTIONS(957), 1,
      anon_sym_LF,
    ACTIONS(959), 1,
      anon_sym_BSLASH_LF,
    STATE(317), 1,
      sym_line_continuation,
  [6251] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      sym_line_continuation,
  [6261] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(963), 1,
      aux_sym_mount_param_param_token1,
    STATE(319), 1,
      sym_line_continuation,
  [6271] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(965), 1,
      anon_sym_LF,
    STATE(320), 1,
      sym_line_continuation,
  [6281] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(967), 1,
      anon_sym_LF,
    STATE(321), 1,
      sym_line_continuation,
  [6291] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(969), 1,
      sym__non_newline_whitespace,
    STATE(322), 1,
      sym_line_continuation,
  [6301] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(971), 1,
      aux_sym__expansion_body_token1,
    STATE(323), 1,
      sym_line_continuation,
  [6311] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(973), 1,
      anon_sym_LF,
    STATE(324), 1,
      sym_line_continuation,
  [6321] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(975), 1,
      anon_sym_COLON_LF,
    STATE(325), 1,
      sym_line_continuation,
  [6331] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(977), 1,
      aux_sym_project_instruction_token2,
    STATE(326), 1,
      sym_line_continuation,
  [6341] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(979), 1,
      anon_sym_EQ,
    STATE(327), 1,
      sym_line_continuation,
  [6351] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(981), 1,
      anon_sym_LF,
    STATE(328), 1,
      sym_line_continuation,
  [6361] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(983), 1,
      anon_sym_LF,
    STATE(329), 1,
      sym_line_continuation,
  [6371] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(985), 1,
      anon_sym_LF,
    STATE(330), 1,
      sym_line_continuation,
  [6381] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(987), 1,
      anon_sym_LF,
    STATE(331), 1,
      sym_line_continuation,
  [6391] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(989), 1,
      anon_sym_LF,
    STATE(332), 1,
      sym_line_continuation,
  [6401] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(991), 1,
      anon_sym_LF,
    STATE(333), 1,
      sym_line_continuation,
  [6411] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(993), 1,
      anon_sym_LF,
    STATE(334), 1,
      sym_line_continuation,
  [6421] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(995), 1,
      anon_sym_LF,
    STATE(335), 1,
      sym_line_continuation,
  [6431] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(997), 1,
      anon_sym_LF,
    STATE(336), 1,
      sym_line_continuation,
  [6441] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(999), 1,
      aux_sym_arg_instruction_token2,
    STATE(337), 1,
      sym_line_continuation,
  [6451] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1001), 1,
      anon_sym_LF,
    STATE(338), 1,
      sym_line_continuation,
  [6461] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1003), 1,
      anon_sym_EQ,
    STATE(339), 1,
      sym_line_continuation,
  [6471] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1005), 1,
      anon_sym_LF,
    STATE(340), 1,
      sym_line_continuation,
  [6481] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1007), 1,
      anon_sym_LF,
    STATE(341), 1,
      sym_line_continuation,
  [6491] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(937), 1,
      anon_sym_EQ,
    STATE(342), 1,
      sym_line_continuation,
  [6501] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(700), 1,
      anon_sym_EQ,
    STATE(343), 1,
      sym_line_continuation,
  [6511] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1009), 1,
      aux_sym_param_token1,
    STATE(344), 1,
      sym_line_continuation,
  [6521] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1011), 1,
      anon_sym_LF,
    STATE(345), 1,
      sym_line_continuation,
  [6531] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(704), 1,
      anon_sym_EQ,
    STATE(346), 1,
      sym_line_continuation,
  [6541] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1013), 1,
      sym__version_instruction_semver,
    STATE(347), 1,
      sym_line_continuation,
  [6551] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1015), 1,
      anon_sym_SLASH,
    STATE(348), 1,
      sym_line_continuation,
  [6561] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1017), 1,
      ts_builtin_sym_end,
    STATE(349), 1,
      sym_line_continuation,
  [6571] = 3,
    ACTIONS(774), 1,
      anon_sym_LF,
    ACTIONS(1019), 1,
      anon_sym_BSLASH_LF,
    STATE(350), 1,
      sym_line_continuation,
  [6581] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1021), 1,
      anon_sym_LF,
    STATE(351), 1,
      sym_line_continuation,
  [6591] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      sym_line_continuation,
  [6601] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1025), 1,
      aux_sym_param_token2,
    STATE(353), 1,
      sym_line_continuation,
  [6611] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1027), 1,
      anon_sym_LF,
    STATE(354), 1,
      sym_line_continuation,
  [6621] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1029), 1,
      anon_sym_LF,
    STATE(355), 1,
      sym_line_continuation,
  [6631] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1031), 1,
      aux_sym_param_token1,
    STATE(356), 1,
      sym_line_continuation,
  [6641] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1033), 1,
      aux_sym_param_token1,
    STATE(357), 1,
      sym_line_continuation,
  [6651] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1035), 1,
      anon_sym_LF,
    STATE(358), 1,
      sym_line_continuation,
  [6661] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1037), 1,
      anon_sym_LF,
    STATE(359), 1,
      sym_line_continuation,
  [6671] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1039), 1,
      anon_sym_LF,
    STATE(360), 1,
      sym_line_continuation,
  [6681] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      sym_line_continuation,
  [6691] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1043), 1,
      aux_sym_param_token2,
    STATE(362), 1,
      sym_line_continuation,
  [6701] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1045), 1,
      aux_sym__expansion_body_token1,
    STATE(363), 1,
      sym_line_continuation,
  [6711] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1047), 1,
      aux_sym_param_token2,
    STATE(364), 1,
      sym_line_continuation,
  [6721] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1049), 1,
      aux_sym_param_token1,
    STATE(365), 1,
      sym_line_continuation,
  [6731] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1051), 1,
      anon_sym_COLON_LF,
    STATE(366), 1,
      sym_line_continuation,
  [6741] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1053), 1,
      aux_sym_param_token2,
    STATE(367), 1,
      sym_line_continuation,
  [6751] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1055), 1,
      aux_sym_target_token1,
    STATE(368), 1,
      sym_line_continuation,
  [6761] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_line_continuation,
  [6771] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1059), 1,
      aux_sym_param_token1,
    STATE(370), 1,
      sym_line_continuation,
  [6781] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
    STATE(371), 1,
      sym_line_continuation,
  [6791] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1063), 1,
      aux_sym_param_token2,
    STATE(372), 1,
      sym_line_continuation,
  [6801] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(823), 1,
      anon_sym_LF,
    STATE(373), 1,
      sym_line_continuation,
  [6811] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(506), 1,
      anon_sym_LF,
    STATE(374), 1,
      sym_line_continuation,
  [6821] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1065), 1,
      anon_sym_RBRACE,
    STATE(375), 1,
      sym_line_continuation,
  [6831] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1067), 1,
      aux_sym_param_token2,
    STATE(376), 1,
      sym_line_continuation,
  [6841] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1069), 1,
      aux_sym_project_instruction_token2,
    STATE(377), 1,
      sym_line_continuation,
  [6851] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1071), 1,
      anon_sym_LF,
    STATE(378), 1,
      sym_line_continuation,
  [6861] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1073), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      sym_line_continuation,
  [6871] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1075), 1,
      anon_sym_LF,
    STATE(380), 1,
      sym_line_continuation,
  [6881] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1077), 1,
      anon_sym_LF,
    STATE(381), 1,
      sym_line_continuation,
  [6891] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1079), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      sym_line_continuation,
  [6901] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1081), 1,
      anon_sym_LF,
    STATE(383), 1,
      sym_line_continuation,
  [6911] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1083), 1,
      aux_sym__anon_comment_token1,
    STATE(384), 1,
      sym_line_continuation,
  [6921] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1085), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      sym_line_continuation,
  [6931] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1087), 1,
      aux_sym_target_token1,
    STATE(386), 1,
      sym_line_continuation,
  [6941] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(947), 1,
      anon_sym_EQ,
    STATE(387), 1,
      sym_line_continuation,
  [6951] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1089), 1,
      anon_sym_RBRACE,
    STATE(388), 1,
      sym_line_continuation,
  [6961] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      anon_sym_EQ,
    STATE(389), 1,
      sym_line_continuation,
  [6971] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    STATE(390), 1,
      sym_line_continuation,
  [6981] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(671), 1,
      anon_sym_EQ,
    STATE(391), 1,
      sym_line_continuation,
  [6991] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1093), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      sym_line_continuation,
  [7001] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1095), 1,
      anon_sym_LF,
    STATE(393), 1,
      sym_line_continuation,
  [7011] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1097), 1,
      anon_sym_RBRACE,
    STATE(394), 1,
      sym_line_continuation,
  [7021] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1099), 1,
      anon_sym_LF,
    STATE(395), 1,
      sym_line_continuation,
  [7031] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1101), 1,
      anon_sym_RBRACE,
    STATE(396), 1,
      sym_line_continuation,
  [7041] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1103), 1,
      anon_sym_LF,
    STATE(397), 1,
      sym_line_continuation,
  [7051] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1105), 1,
      anon_sym_RBRACE,
    STATE(398), 1,
      sym_line_continuation,
  [7061] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1107), 1,
      anon_sym_RBRACE,
    STATE(399), 1,
      sym_line_continuation,
  [7071] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1109), 1,
      anon_sym_EQ,
    STATE(400), 1,
      sym_line_continuation,
  [7081] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1111), 1,
      aux_sym__expansion_body_token1,
    STATE(401), 1,
      sym_line_continuation,
  [7091] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1113), 1,
      aux_sym__expansion_body_token1,
    STATE(402), 1,
      sym_line_continuation,
  [7101] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1115), 1,
      aux_sym__expansion_body_token1,
    STATE(403), 1,
      sym_line_continuation,
  [7111] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1117), 1,
      aux_sym__expansion_body_token1,
    STATE(404), 1,
      sym_line_continuation,
  [7121] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1119), 1,
      aux_sym__expansion_body_token1,
    STATE(405), 1,
      sym_line_continuation,
  [7131] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1121), 1,
      aux_sym__expansion_body_token1,
    STATE(406), 1,
      sym_line_continuation,
  [7141] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1123), 1,
      aux_sym__expansion_body_token1,
    STATE(407), 1,
      sym_line_continuation,
  [7151] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1125), 1,
      aux_sym__expansion_body_token1,
    STATE(408), 1,
      sym_line_continuation,
  [7161] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1127), 1,
      aux_sym__expansion_body_token1,
    STATE(409), 1,
      sym_line_continuation,
  [7171] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1129), 1,
      aux_sym__expansion_body_token1,
    STATE(410), 1,
      sym_line_continuation,
  [7181] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1131), 1,
      aux_sym__expansion_body_token1,
    STATE(411), 1,
      sym_line_continuation,
  [7191] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1133), 1,
      aux_sym__expansion_body_token1,
    STATE(412), 1,
      sym_line_continuation,
  [7201] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1135), 1,
      aux_sym__expansion_body_token1,
    STATE(413), 1,
      sym_line_continuation,
  [7211] = 3,
    ACTIONS(141), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1137), 1,
      aux_sym__expansion_body_token1,
    STATE(414), 1,
      sym_line_continuation,
  [7221] = 1,
    ACTIONS(1139), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 224,
  [SMALL_STATE(6)] = 273,
  [SMALL_STATE(7)] = 322,
  [SMALL_STATE(8)] = 367,
  [SMALL_STATE(9)] = 407,
  [SMALL_STATE(10)] = 444,
  [SMALL_STATE(11)] = 483,
  [SMALL_STATE(12)] = 524,
  [SMALL_STATE(13)] = 561,
  [SMALL_STATE(14)] = 595,
  [SMALL_STATE(15)] = 629,
  [SMALL_STATE(16)] = 663,
  [SMALL_STATE(17)] = 697,
  [SMALL_STATE(18)] = 726,
  [SMALL_STATE(19)] = 761,
  [SMALL_STATE(20)] = 792,
  [SMALL_STATE(21)] = 827,
  [SMALL_STATE(22)] = 858,
  [SMALL_STATE(23)] = 887,
  [SMALL_STATE(24)] = 916,
  [SMALL_STATE(25)] = 947,
  [SMALL_STATE(26)] = 978,
  [SMALL_STATE(27)] = 1009,
  [SMALL_STATE(28)] = 1039,
  [SMALL_STATE(29)] = 1069,
  [SMALL_STATE(30)] = 1093,
  [SMALL_STATE(31)] = 1123,
  [SMALL_STATE(32)] = 1152,
  [SMALL_STATE(33)] = 1183,
  [SMALL_STATE(34)] = 1212,
  [SMALL_STATE(35)] = 1241,
  [SMALL_STATE(36)] = 1270,
  [SMALL_STATE(37)] = 1301,
  [SMALL_STATE(38)] = 1330,
  [SMALL_STATE(39)] = 1357,
  [SMALL_STATE(40)] = 1388,
  [SMALL_STATE(41)] = 1415,
  [SMALL_STATE(42)] = 1442,
  [SMALL_STATE(43)] = 1471,
  [SMALL_STATE(44)] = 1500,
  [SMALL_STATE(45)] = 1529,
  [SMALL_STATE(46)] = 1558,
  [SMALL_STATE(47)] = 1587,
  [SMALL_STATE(48)] = 1616,
  [SMALL_STATE(49)] = 1645,
  [SMALL_STATE(50)] = 1674,
  [SMALL_STATE(51)] = 1703,
  [SMALL_STATE(52)] = 1732,
  [SMALL_STATE(53)] = 1761,
  [SMALL_STATE(54)] = 1788,
  [SMALL_STATE(55)] = 1817,
  [SMALL_STATE(56)] = 1838,
  [SMALL_STATE(57)] = 1865,
  [SMALL_STATE(58)] = 1892,
  [SMALL_STATE(59)] = 1921,
  [SMALL_STATE(60)] = 1944,
  [SMALL_STATE(61)] = 1971,
  [SMALL_STATE(62)] = 1998,
  [SMALL_STATE(63)] = 2025,
  [SMALL_STATE(64)] = 2056,
  [SMALL_STATE(65)] = 2079,
  [SMALL_STATE(66)] = 2099,
  [SMALL_STATE(67)] = 2117,
  [SMALL_STATE(68)] = 2143,
  [SMALL_STATE(69)] = 2165,
  [SMALL_STATE(70)] = 2191,
  [SMALL_STATE(71)] = 2209,
  [SMALL_STATE(72)] = 2227,
  [SMALL_STATE(73)] = 2245,
  [SMALL_STATE(74)] = 2273,
  [SMALL_STATE(75)] = 2291,
  [SMALL_STATE(76)] = 2309,
  [SMALL_STATE(77)] = 2327,
  [SMALL_STATE(78)] = 2345,
  [SMALL_STATE(79)] = 2363,
  [SMALL_STATE(80)] = 2381,
  [SMALL_STATE(81)] = 2399,
  [SMALL_STATE(82)] = 2423,
  [SMALL_STATE(83)] = 2449,
  [SMALL_STATE(84)] = 2467,
  [SMALL_STATE(85)] = 2493,
  [SMALL_STATE(86)] = 2511,
  [SMALL_STATE(87)] = 2529,
  [SMALL_STATE(88)] = 2547,
  [SMALL_STATE(89)] = 2565,
  [SMALL_STATE(90)] = 2583,
  [SMALL_STATE(91)] = 2601,
  [SMALL_STATE(92)] = 2619,
  [SMALL_STATE(93)] = 2644,
  [SMALL_STATE(94)] = 2667,
  [SMALL_STATE(95)] = 2692,
  [SMALL_STATE(96)] = 2711,
  [SMALL_STATE(97)] = 2728,
  [SMALL_STATE(98)] = 2751,
  [SMALL_STATE(99)] = 2776,
  [SMALL_STATE(100)] = 2793,
  [SMALL_STATE(101)] = 2818,
  [SMALL_STATE(102)] = 2843,
  [SMALL_STATE(103)] = 2868,
  [SMALL_STATE(104)] = 2889,
  [SMALL_STATE(105)] = 2914,
  [SMALL_STATE(106)] = 2937,
  [SMALL_STATE(107)] = 2960,
  [SMALL_STATE(108)] = 2985,
  [SMALL_STATE(109)] = 3010,
  [SMALL_STATE(110)] = 3026,
  [SMALL_STATE(111)] = 3042,
  [SMALL_STATE(112)] = 3062,
  [SMALL_STATE(113)] = 3078,
  [SMALL_STATE(114)] = 3094,
  [SMALL_STATE(115)] = 3110,
  [SMALL_STATE(116)] = 3126,
  [SMALL_STATE(117)] = 3142,
  [SMALL_STATE(118)] = 3158,
  [SMALL_STATE(119)] = 3174,
  [SMALL_STATE(120)] = 3190,
  [SMALL_STATE(121)] = 3206,
  [SMALL_STATE(122)] = 3228,
  [SMALL_STATE(123)] = 3244,
  [SMALL_STATE(124)] = 3260,
  [SMALL_STATE(125)] = 3276,
  [SMALL_STATE(126)] = 3292,
  [SMALL_STATE(127)] = 3308,
  [SMALL_STATE(128)] = 3324,
  [SMALL_STATE(129)] = 3344,
  [SMALL_STATE(130)] = 3366,
  [SMALL_STATE(131)] = 3388,
  [SMALL_STATE(132)] = 3404,
  [SMALL_STATE(133)] = 3424,
  [SMALL_STATE(134)] = 3444,
  [SMALL_STATE(135)] = 3464,
  [SMALL_STATE(136)] = 3486,
  [SMALL_STATE(137)] = 3502,
  [SMALL_STATE(138)] = 3520,
  [SMALL_STATE(139)] = 3540,
  [SMALL_STATE(140)] = 3562,
  [SMALL_STATE(141)] = 3578,
  [SMALL_STATE(142)] = 3598,
  [SMALL_STATE(143)] = 3614,
  [SMALL_STATE(144)] = 3630,
  [SMALL_STATE(145)] = 3646,
  [SMALL_STATE(146)] = 3662,
  [SMALL_STATE(147)] = 3684,
  [SMALL_STATE(148)] = 3706,
  [SMALL_STATE(149)] = 3722,
  [SMALL_STATE(150)] = 3738,
  [SMALL_STATE(151)] = 3754,
  [SMALL_STATE(152)] = 3776,
  [SMALL_STATE(153)] = 3794,
  [SMALL_STATE(154)] = 3810,
  [SMALL_STATE(155)] = 3830,
  [SMALL_STATE(156)] = 3852,
  [SMALL_STATE(157)] = 3868,
  [SMALL_STATE(158)] = 3888,
  [SMALL_STATE(159)] = 3904,
  [SMALL_STATE(160)] = 3924,
  [SMALL_STATE(161)] = 3940,
  [SMALL_STATE(162)] = 3956,
  [SMALL_STATE(163)] = 3976,
  [SMALL_STATE(164)] = 3994,
  [SMALL_STATE(165)] = 4016,
  [SMALL_STATE(166)] = 4032,
  [SMALL_STATE(167)] = 4052,
  [SMALL_STATE(168)] = 4068,
  [SMALL_STATE(169)] = 4084,
  [SMALL_STATE(170)] = 4100,
  [SMALL_STATE(171)] = 4116,
  [SMALL_STATE(172)] = 4132,
  [SMALL_STATE(173)] = 4148,
  [SMALL_STATE(174)] = 4165,
  [SMALL_STATE(175)] = 4184,
  [SMALL_STATE(176)] = 4201,
  [SMALL_STATE(177)] = 4216,
  [SMALL_STATE(178)] = 4235,
  [SMALL_STATE(179)] = 4250,
  [SMALL_STATE(180)] = 4265,
  [SMALL_STATE(181)] = 4280,
  [SMALL_STATE(182)] = 4299,
  [SMALL_STATE(183)] = 4316,
  [SMALL_STATE(184)] = 4335,
  [SMALL_STATE(185)] = 4350,
  [SMALL_STATE(186)] = 4363,
  [SMALL_STATE(187)] = 4376,
  [SMALL_STATE(188)] = 4389,
  [SMALL_STATE(189)] = 4408,
  [SMALL_STATE(190)] = 4423,
  [SMALL_STATE(191)] = 4438,
  [SMALL_STATE(192)] = 4451,
  [SMALL_STATE(193)] = 4464,
  [SMALL_STATE(194)] = 4477,
  [SMALL_STATE(195)] = 4492,
  [SMALL_STATE(196)] = 4507,
  [SMALL_STATE(197)] = 4522,
  [SMALL_STATE(198)] = 4537,
  [SMALL_STATE(199)] = 4552,
  [SMALL_STATE(200)] = 4565,
  [SMALL_STATE(201)] = 4580,
  [SMALL_STATE(202)] = 4599,
  [SMALL_STATE(203)] = 4618,
  [SMALL_STATE(204)] = 4633,
  [SMALL_STATE(205)] = 4650,
  [SMALL_STATE(206)] = 4663,
  [SMALL_STATE(207)] = 4676,
  [SMALL_STATE(208)] = 4689,
  [SMALL_STATE(209)] = 4706,
  [SMALL_STATE(210)] = 4722,
  [SMALL_STATE(211)] = 4738,
  [SMALL_STATE(212)] = 4750,
  [SMALL_STATE(213)] = 4766,
  [SMALL_STATE(214)] = 4778,
  [SMALL_STATE(215)] = 4794,
  [SMALL_STATE(216)] = 4806,
  [SMALL_STATE(217)] = 4818,
  [SMALL_STATE(218)] = 4832,
  [SMALL_STATE(219)] = 4844,
  [SMALL_STATE(220)] = 4858,
  [SMALL_STATE(221)] = 4870,
  [SMALL_STATE(222)] = 4884,
  [SMALL_STATE(223)] = 4896,
  [SMALL_STATE(224)] = 4912,
  [SMALL_STATE(225)] = 4928,
  [SMALL_STATE(226)] = 4944,
  [SMALL_STATE(227)] = 4960,
  [SMALL_STATE(228)] = 4974,
  [SMALL_STATE(229)] = 4990,
  [SMALL_STATE(230)] = 5004,
  [SMALL_STATE(231)] = 5020,
  [SMALL_STATE(232)] = 5036,
  [SMALL_STATE(233)] = 5050,
  [SMALL_STATE(234)] = 5064,
  [SMALL_STATE(235)] = 5078,
  [SMALL_STATE(236)] = 5094,
  [SMALL_STATE(237)] = 5108,
  [SMALL_STATE(238)] = 5122,
  [SMALL_STATE(239)] = 5138,
  [SMALL_STATE(240)] = 5154,
  [SMALL_STATE(241)] = 5170,
  [SMALL_STATE(242)] = 5186,
  [SMALL_STATE(243)] = 5202,
  [SMALL_STATE(244)] = 5216,
  [SMALL_STATE(245)] = 5232,
  [SMALL_STATE(246)] = 5248,
  [SMALL_STATE(247)] = 5264,
  [SMALL_STATE(248)] = 5278,
  [SMALL_STATE(249)] = 5294,
  [SMALL_STATE(250)] = 5310,
  [SMALL_STATE(251)] = 5324,
  [SMALL_STATE(252)] = 5340,
  [SMALL_STATE(253)] = 5356,
  [SMALL_STATE(254)] = 5370,
  [SMALL_STATE(255)] = 5386,
  [SMALL_STATE(256)] = 5402,
  [SMALL_STATE(257)] = 5416,
  [SMALL_STATE(258)] = 5432,
  [SMALL_STATE(259)] = 5448,
  [SMALL_STATE(260)] = 5464,
  [SMALL_STATE(261)] = 5478,
  [SMALL_STATE(262)] = 5492,
  [SMALL_STATE(263)] = 5506,
  [SMALL_STATE(264)] = 5522,
  [SMALL_STATE(265)] = 5536,
  [SMALL_STATE(266)] = 5550,
  [SMALL_STATE(267)] = 5564,
  [SMALL_STATE(268)] = 5578,
  [SMALL_STATE(269)] = 5592,
  [SMALL_STATE(270)] = 5608,
  [SMALL_STATE(271)] = 5622,
  [SMALL_STATE(272)] = 5636,
  [SMALL_STATE(273)] = 5650,
  [SMALL_STATE(274)] = 5664,
  [SMALL_STATE(275)] = 5680,
  [SMALL_STATE(276)] = 5694,
  [SMALL_STATE(277)] = 5708,
  [SMALL_STATE(278)] = 5724,
  [SMALL_STATE(279)] = 5740,
  [SMALL_STATE(280)] = 5756,
  [SMALL_STATE(281)] = 5772,
  [SMALL_STATE(282)] = 5788,
  [SMALL_STATE(283)] = 5804,
  [SMALL_STATE(284)] = 5820,
  [SMALL_STATE(285)] = 5836,
  [SMALL_STATE(286)] = 5852,
  [SMALL_STATE(287)] = 5865,
  [SMALL_STATE(288)] = 5876,
  [SMALL_STATE(289)] = 5889,
  [SMALL_STATE(290)] = 5902,
  [SMALL_STATE(291)] = 5915,
  [SMALL_STATE(292)] = 5928,
  [SMALL_STATE(293)] = 5941,
  [SMALL_STATE(294)] = 5952,
  [SMALL_STATE(295)] = 5965,
  [SMALL_STATE(296)] = 5978,
  [SMALL_STATE(297)] = 5991,
  [SMALL_STATE(298)] = 6004,
  [SMALL_STATE(299)] = 6017,
  [SMALL_STATE(300)] = 6030,
  [SMALL_STATE(301)] = 6043,
  [SMALL_STATE(302)] = 6056,
  [SMALL_STATE(303)] = 6067,
  [SMALL_STATE(304)] = 6080,
  [SMALL_STATE(305)] = 6093,
  [SMALL_STATE(306)] = 6106,
  [SMALL_STATE(307)] = 6119,
  [SMALL_STATE(308)] = 6130,
  [SMALL_STATE(309)] = 6143,
  [SMALL_STATE(310)] = 6154,
  [SMALL_STATE(311)] = 6167,
  [SMALL_STATE(312)] = 6178,
  [SMALL_STATE(313)] = 6191,
  [SMALL_STATE(314)] = 6204,
  [SMALL_STATE(315)] = 6217,
  [SMALL_STATE(316)] = 6230,
  [SMALL_STATE(317)] = 6241,
  [SMALL_STATE(318)] = 6251,
  [SMALL_STATE(319)] = 6261,
  [SMALL_STATE(320)] = 6271,
  [SMALL_STATE(321)] = 6281,
  [SMALL_STATE(322)] = 6291,
  [SMALL_STATE(323)] = 6301,
  [SMALL_STATE(324)] = 6311,
  [SMALL_STATE(325)] = 6321,
  [SMALL_STATE(326)] = 6331,
  [SMALL_STATE(327)] = 6341,
  [SMALL_STATE(328)] = 6351,
  [SMALL_STATE(329)] = 6361,
  [SMALL_STATE(330)] = 6371,
  [SMALL_STATE(331)] = 6381,
  [SMALL_STATE(332)] = 6391,
  [SMALL_STATE(333)] = 6401,
  [SMALL_STATE(334)] = 6411,
  [SMALL_STATE(335)] = 6421,
  [SMALL_STATE(336)] = 6431,
  [SMALL_STATE(337)] = 6441,
  [SMALL_STATE(338)] = 6451,
  [SMALL_STATE(339)] = 6461,
  [SMALL_STATE(340)] = 6471,
  [SMALL_STATE(341)] = 6481,
  [SMALL_STATE(342)] = 6491,
  [SMALL_STATE(343)] = 6501,
  [SMALL_STATE(344)] = 6511,
  [SMALL_STATE(345)] = 6521,
  [SMALL_STATE(346)] = 6531,
  [SMALL_STATE(347)] = 6541,
  [SMALL_STATE(348)] = 6551,
  [SMALL_STATE(349)] = 6561,
  [SMALL_STATE(350)] = 6571,
  [SMALL_STATE(351)] = 6581,
  [SMALL_STATE(352)] = 6591,
  [SMALL_STATE(353)] = 6601,
  [SMALL_STATE(354)] = 6611,
  [SMALL_STATE(355)] = 6621,
  [SMALL_STATE(356)] = 6631,
  [SMALL_STATE(357)] = 6641,
  [SMALL_STATE(358)] = 6651,
  [SMALL_STATE(359)] = 6661,
  [SMALL_STATE(360)] = 6671,
  [SMALL_STATE(361)] = 6681,
  [SMALL_STATE(362)] = 6691,
  [SMALL_STATE(363)] = 6701,
  [SMALL_STATE(364)] = 6711,
  [SMALL_STATE(365)] = 6721,
  [SMALL_STATE(366)] = 6731,
  [SMALL_STATE(367)] = 6741,
  [SMALL_STATE(368)] = 6751,
  [SMALL_STATE(369)] = 6761,
  [SMALL_STATE(370)] = 6771,
  [SMALL_STATE(371)] = 6781,
  [SMALL_STATE(372)] = 6791,
  [SMALL_STATE(373)] = 6801,
  [SMALL_STATE(374)] = 6811,
  [SMALL_STATE(375)] = 6821,
  [SMALL_STATE(376)] = 6831,
  [SMALL_STATE(377)] = 6841,
  [SMALL_STATE(378)] = 6851,
  [SMALL_STATE(379)] = 6861,
  [SMALL_STATE(380)] = 6871,
  [SMALL_STATE(381)] = 6881,
  [SMALL_STATE(382)] = 6891,
  [SMALL_STATE(383)] = 6901,
  [SMALL_STATE(384)] = 6911,
  [SMALL_STATE(385)] = 6921,
  [SMALL_STATE(386)] = 6931,
  [SMALL_STATE(387)] = 6941,
  [SMALL_STATE(388)] = 6951,
  [SMALL_STATE(389)] = 6961,
  [SMALL_STATE(390)] = 6971,
  [SMALL_STATE(391)] = 6981,
  [SMALL_STATE(392)] = 6991,
  [SMALL_STATE(393)] = 7001,
  [SMALL_STATE(394)] = 7011,
  [SMALL_STATE(395)] = 7021,
  [SMALL_STATE(396)] = 7031,
  [SMALL_STATE(397)] = 7041,
  [SMALL_STATE(398)] = 7051,
  [SMALL_STATE(399)] = 7061,
  [SMALL_STATE(400)] = 7071,
  [SMALL_STATE(401)] = 7081,
  [SMALL_STATE(402)] = 7091,
  [SMALL_STATE(403)] = 7101,
  [SMALL_STATE(404)] = 7111,
  [SMALL_STATE(405)] = 7121,
  [SMALL_STATE(406)] = 7131,
  [SMALL_STATE(407)] = 7141,
  [SMALL_STATE(408)] = 7151,
  [SMALL_STATE(409)] = 7161,
  [SMALL_STATE(410)] = 7171,
  [SMALL_STATE(411)] = 7181,
  [SMALL_STATE(412)] = 7191,
  [SMALL_STATE(413)] = 7201,
  [SMALL_STATE(414)] = 7211,
  [SMALL_STATE(415)] = 7221,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(177),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(336),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(326),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(325),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(366),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(240),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(87),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(278),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(79),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(249),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(83),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(286),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(281),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(140),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(285),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(143),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 2), SHIFT_REPEAT(284),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 2),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 2), SHIFT_REPEAT(149),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_earthfile_local_path, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_earthfile_local_path, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_earthfile_local_path, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_earthfile_local_path, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(339),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(51),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(157),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(314),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(238),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(125),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(125),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(187),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(244),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 20),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 20),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(269),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(167),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(258),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(165),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 2), SHIFT_REPEAT(252),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 2), SHIFT_REPEAT(161),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 17),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 17),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 4),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 2, .production_id = 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(187),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(244),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(384),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 14),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(180),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(239),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(214),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(211),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 17),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 17),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(223),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(163),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(272),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(209),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(264),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(230),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(123),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 7),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 7),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_earthfile_ref, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_earthfile_ref, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(342),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(194),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(194),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_instruction_repeat1, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat1, 2),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat1, 2), SHIFT_REPEAT(344),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_instruction_repeat2, 2), SHIFT_REPEAT(108),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat2, 2), SHIFT_REPEAT(231),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 1),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat1, 2), SHIFT_REPEAT(365),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 12),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 12),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(229),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat1, 2),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat1, 2), SHIFT_REPEAT(253),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_earthfile_local_path_repeat1, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [752] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(188),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2), SHIFT_REPEAT(303),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_instruction_repeat1, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat1, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [776] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(191),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 11),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 11),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_direct, 2),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_direct, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_instruction, 2),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_instruction, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat1, 1),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_earthfile_local_path_repeat1, 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_earthfile_ref, 2),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_earthfile_ref, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 8),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 8),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_instruction_repeat2, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat2, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 9),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_instruction, 3),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 2),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_instruction, 2),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 13),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 13),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_instruction, 5, .production_id = 18),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 19),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 18),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_instruction, 4),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_instruction, 4, .production_id = 10),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_instruction, 4, .production_id = 16),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 15),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 13),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_instruction, 2),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1017] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_header, 2, .production_id = 5),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 2, .production_id = 6),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 10),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_instruction, 3),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_earthfile(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
