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
#define STATE_COUNT 395
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 0
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 25

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
  sym__target_name = 71,
  aux_sym_version_instruction_token1 = 72,
  sym__version_instruction_semver = 73,
  aux_sym_project_instruction_token1 = 74,
  aux_sym_project_instruction_token2 = 75,
  anon_sym_SLASH = 76,
  aux_sym_import_instruction_token1 = 77,
  anon_sym_PLUS = 78,
  aux_sym_target_token1 = 79,
  anon_sym_COLON_LF = 80,
  aux_sym_function_target_token1 = 81,
  anon_sym_DOT_SLASH = 82,
  anon_sym_DOT_DOT_SLASH = 83,
  aux_sym_build_instruction_token1 = 84,
  sym_source_file = 85,
  sym__instruction = 86,
  sym_from_instruction = 87,
  sym_run_instruction = 88,
  sym_cmd_instruction = 89,
  sym_label_instruction = 90,
  sym_expose_instruction = 91,
  sym_env_instruction = 92,
  sym_copy_instruction = 93,
  sym_entrypoint_instruction = 94,
  sym_volume_instruction = 95,
  sym_user_instruction = 96,
  sym__user_name_or_group = 97,
  aux_sym__immediate_user_name_or_group = 98,
  sym__immediate_user_name_or_group_fragment = 99,
  sym_workdir_instruction = 100,
  sym_arg_instruction = 101,
  sym_healthcheck_instruction = 102,
  sym_path = 103,
  sym_expansion = 104,
  sym__immediate_expansion = 105,
  sym__imm_expansion = 106,
  sym__expansion_body = 107,
  sym_env_pair = 108,
  sym__spaced_env_pair = 109,
  sym__env_key = 110,
  sym_expose_port = 111,
  sym_label_pair = 112,
  sym_image_spec = 113,
  sym_image_name = 114,
  sym_image_tag = 115,
  sym_image_digest = 116,
  sym_param = 117,
  sym_mount_param = 118,
  sym_mount_param_param = 119,
  sym_image_alias = 120,
  sym_shell_command = 121,
  sym_shell_fragment = 122,
  sym_line_continuation = 123,
  sym_required_line_continuation = 124,
  sym__comment_line = 125,
  sym__anon_comment = 126,
  sym_json_string_array = 127,
  sym_json_string = 128,
  sym_double_quoted_string = 129,
  sym_single_quoted_string = 130,
  sym_unquoted_string = 131,
  sym_version_instruction = 132,
  sym_project_instruction = 133,
  sym_import_instruction = 134,
  sym_target_header = 135,
  sym_function_header = 136,
  sym_earthfile_local_path = 137,
  sym_build_instruction = 138,
  aux_sym_source_file_repeat1 = 139,
  aux_sym_run_instruction_repeat1 = 140,
  aux_sym_label_instruction_repeat1 = 141,
  aux_sym_expose_instruction_repeat1 = 142,
  aux_sym_env_instruction_repeat1 = 143,
  aux_sym_copy_instruction_repeat1 = 144,
  aux_sym_copy_instruction_repeat2 = 145,
  aux_sym_volume_instruction_repeat1 = 146,
  aux_sym__user_name_or_group_repeat1 = 147,
  aux_sym_path_repeat1 = 148,
  aux_sym_image_name_repeat1 = 149,
  aux_sym_image_tag_repeat1 = 150,
  aux_sym_image_digest_repeat1 = 151,
  aux_sym_mount_param_repeat1 = 152,
  aux_sym_image_alias_repeat1 = 153,
  aux_sym_shell_command_repeat1 = 154,
  aux_sym_shell_command_repeat2 = 155,
  aux_sym_shell_fragment_repeat1 = 156,
  aux_sym_json_string_array_repeat1 = 157,
  aux_sym_json_string_repeat1 = 158,
  aux_sym_double_quoted_string_repeat1 = 159,
  aux_sym_single_quoted_string_repeat1 = 160,
  aux_sym_unquoted_string_repeat1 = 161,
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
  [sym__target_name] = "_target_name",
  [aux_sym_version_instruction_token1] = "VERSION",
  [sym__version_instruction_semver] = "_version_instruction_semver",
  [aux_sym_project_instruction_token1] = "PROJECT",
  [aux_sym_project_instruction_token2] = "project_instruction_token2",
  [anon_sym_SLASH] = "/",
  [aux_sym_import_instruction_token1] = "IMPORT",
  [anon_sym_PLUS] = "+",
  [aux_sym_target_token1] = "target_token1",
  [anon_sym_COLON_LF] = ":\n",
  [aux_sym_function_target_token1] = "function_target_token1",
  [anon_sym_DOT_SLASH] = "./",
  [anon_sym_DOT_DOT_SLASH] = "../",
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
  [sym_target_header] = "target_header",
  [sym_function_header] = "function_header",
  [sym_earthfile_local_path] = "earthfile_local_path",
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
  [sym__target_name] = sym__target_name,
  [aux_sym_version_instruction_token1] = aux_sym_version_instruction_token1,
  [sym__version_instruction_semver] = sym__version_instruction_semver,
  [aux_sym_project_instruction_token1] = aux_sym_project_instruction_token1,
  [aux_sym_project_instruction_token2] = aux_sym_project_instruction_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_import_instruction_token1] = aux_sym_import_instruction_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_target_token1] = aux_sym_target_token1,
  [anon_sym_COLON_LF] = anon_sym_COLON_LF,
  [aux_sym_function_target_token1] = aux_sym_function_target_token1,
  [anon_sym_DOT_SLASH] = anon_sym_DOT_SLASH,
  [anon_sym_DOT_DOT_SLASH] = anon_sym_DOT_DOT_SLASH,
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
  [sym_target_header] = sym_target_header,
  [sym_function_header] = sym_function_header,
  [sym_earthfile_local_path] = sym_earthfile_local_path,
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
  [sym__target_name] = {
    .visible = false,
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
};

enum {
  field_as = 1,
  field_default = 2,
  field_digest = 3,
  field_earthfile_ref = 4,
  field_function = 5,
  field_group = 6,
  field_key = 7,
  field_name = 8,
  field_org = 9,
  field_project = 10,
  field_tag = 11,
  field_target = 12,
  field_user = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_digest] = "digest",
  [field_earthfile_ref] = "earthfile_ref",
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
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 1},
  [13] = {.index = 15, .length = 3},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 2},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 2},
  [19] = {.index = 28, .length = 2},
  [20] = {.index = 30, .length = 2},
  [21] = {.index = 32, .length = 1},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 2},
  [24] = {.index = 37, .length = 3},
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
    {field_earthfile_ref, 1},
  [6] =
    {field_target, 0},
  [7] =
    {field_function, 0},
  [8] =
    {field_name, 0},
    {field_tag, 1},
  [10] =
    {field_digest, 1},
    {field_name, 0},
  [12] =
    {field_name, 2},
  [13] =
    {field_earthfile_ref, 2},
  [14] =
    {field_as, 3},
  [15] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [18] =
    {field_key, 0},
    {field_value, 2},
  [20] =
    {field_name, 0},
    {field_value, 2},
  [22] =
    {field_group, 3},
    {field_user, 1},
  [24] =
    {field_default, 3},
    {field_name, 1},
  [26] =
    {field_org, 1},
    {field_project, 3},
  [28] =
    {field_as, 3},
    {field_earthfile_ref, 1},
  [30] =
    {field_name, 1},
    {field_value, 3},
  [32] =
    {field_as, 4},
  [33] =
    {field_default, 4},
    {field_name, 2},
  [35] =
    {field_as, 4},
    {field_earthfile_ref, 2},
  [37] =
    {field_name, 1},
    {field_value, 3},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [16] = {
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
  [23] = 22,
  [24] = 24,
  [25] = 21,
  [26] = 26,
  [27] = 27,
  [28] = 20,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 29,
  [40] = 40,
  [41] = 41,
  [42] = 34,
  [43] = 43,
  [44] = 44,
  [45] = 44,
  [46] = 29,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 16,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 18,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 57,
  [73] = 57,
  [74] = 65,
  [75] = 75,
  [76] = 76,
  [77] = 71,
  [78] = 78,
  [79] = 67,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 76,
  [85] = 68,
  [86] = 78,
  [87] = 87,
  [88] = 88,
  [89] = 58,
  [90] = 67,
  [91] = 59,
  [92] = 92,
  [93] = 93,
  [94] = 80,
  [95] = 95,
  [96] = 68,
  [97] = 97,
  [98] = 58,
  [99] = 76,
  [100] = 75,
  [101] = 101,
  [102] = 57,
  [103] = 103,
  [104] = 88,
  [105] = 59,
  [106] = 75,
  [107] = 76,
  [108] = 68,
  [109] = 75,
  [110] = 75,
  [111] = 58,
  [112] = 112,
  [113] = 76,
  [114] = 58,
  [115] = 115,
  [116] = 116,
  [117] = 58,
  [118] = 76,
  [119] = 119,
  [120] = 76,
  [121] = 58,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 68,
  [126] = 126,
  [127] = 75,
  [128] = 64,
  [129] = 68,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 75,
  [134] = 68,
  [135] = 135,
  [136] = 136,
  [137] = 124,
  [138] = 135,
  [139] = 139,
  [140] = 136,
  [141] = 119,
  [142] = 142,
  [143] = 66,
  [144] = 135,
  [145] = 145,
  [146] = 119,
  [147] = 147,
  [148] = 148,
  [149] = 68,
  [150] = 150,
  [151] = 58,
  [152] = 152,
  [153] = 153,
  [154] = 76,
  [155] = 75,
  [156] = 93,
  [157] = 157,
  [158] = 158,
  [159] = 75,
  [160] = 68,
  [161] = 161,
  [162] = 78,
  [163] = 75,
  [164] = 76,
  [165] = 165,
  [166] = 58,
  [167] = 78,
  [168] = 68,
  [169] = 75,
  [170] = 76,
  [171] = 58,
  [172] = 78,
  [173] = 173,
  [174] = 174,
  [175] = 68,
  [176] = 75,
  [177] = 76,
  [178] = 178,
  [179] = 58,
  [180] = 78,
  [181] = 68,
  [182] = 182,
  [183] = 178,
  [184] = 64,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 58,
  [189] = 76,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 130,
  [195] = 178,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 68,
  [207] = 207,
  [208] = 78,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 178,
  [213] = 213,
  [214] = 204,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 213,
  [220] = 213,
  [221] = 221,
  [222] = 215,
  [223] = 76,
  [224] = 224,
  [225] = 68,
  [226] = 78,
  [227] = 227,
  [228] = 228,
  [229] = 204,
  [230] = 230,
  [231] = 213,
  [232] = 58,
  [233] = 233,
  [234] = 204,
  [235] = 235,
  [236] = 204,
  [237] = 237,
  [238] = 204,
  [239] = 204,
  [240] = 240,
  [241] = 213,
  [242] = 204,
  [243] = 243,
  [244] = 244,
  [245] = 204,
  [246] = 213,
  [247] = 247,
  [248] = 75,
  [249] = 204,
  [250] = 250,
  [251] = 213,
  [252] = 204,
  [253] = 68,
  [254] = 78,
  [255] = 58,
  [256] = 256,
  [257] = 64,
  [258] = 258,
  [259] = 204,
  [260] = 213,
  [261] = 76,
  [262] = 204,
  [263] = 263,
  [264] = 75,
  [265] = 75,
  [266] = 93,
  [267] = 204,
  [268] = 213,
  [269] = 64,
  [270] = 270,
  [271] = 271,
  [272] = 191,
  [273] = 273,
  [274] = 93,
  [275] = 275,
  [276] = 276,
  [277] = 197,
  [278] = 198,
  [279] = 279,
  [280] = 280,
  [281] = 93,
  [282] = 282,
  [283] = 283,
  [284] = 190,
  [285] = 285,
  [286] = 286,
  [287] = 217,
  [288] = 288,
  [289] = 289,
  [290] = 64,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 93,
  [305] = 305,
  [306] = 306,
  [307] = 307,
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
  [320] = 318,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 299,
  [325] = 325,
  [326] = 326,
  [327] = 198,
  [328] = 325,
  [329] = 197,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 325,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 335,
  [345] = 336,
  [346] = 346,
  [347] = 347,
  [348] = 325,
  [349] = 335,
  [350] = 336,
  [351] = 351,
  [352] = 352,
  [353] = 325,
  [354] = 335,
  [355] = 336,
  [356] = 356,
  [357] = 357,
  [358] = 335,
  [359] = 336,
  [360] = 360,
  [361] = 336,
  [362] = 335,
  [363] = 363,
  [364] = 335,
  [365] = 335,
  [366] = 366,
  [367] = 190,
  [368] = 335,
  [369] = 369,
  [370] = 335,
  [371] = 191,
  [372] = 335,
  [373] = 373,
  [374] = 335,
  [375] = 375,
  [376] = 335,
  [377] = 377,
  [378] = 335,
  [379] = 335,
  [380] = 380,
  [381] = 318,
  [382] = 318,
  [383] = 318,
  [384] = 318,
  [385] = 318,
  [386] = 318,
  [387] = 318,
  [388] = 318,
  [389] = 318,
  [390] = 318,
  [391] = 318,
  [392] = 318,
  [393] = 318,
  [394] = 394,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(150);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '+') ADVANCE(300);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == '[') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == ']') ADVANCE(266);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '}') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(258);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(257);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(375);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '@') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(256);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '\'') ADVANCE(276);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead == '[') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == ',') ADVANCE(254);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '[') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '[') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '[') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(233);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(71)
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 45:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 47:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 48:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 49:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 50:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 51:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 52:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '[') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(203);
      END_STATE();
    case 53:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 54:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 55:
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(237);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(450);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 62:
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(202);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(251);
      END_STATE();
    case 67:
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 69:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 70:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 71:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(71)
      END_STATE();
    case 72:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      END_STATE();
    case 73:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 74:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 75:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 96:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 97:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 102:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(89);
      END_STATE();
    case 103:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(199);
      END_STATE();
    case 104:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(88);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 111:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 123:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 131:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 132:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 139:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 140:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 141:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      if (eof) ADVANCE(150);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '[') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == ']') ADVANCE(266);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 148:
      if (eof) ADVANCE(150);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(426);
      if (lookahead == 'B') ADVANCE(443);
      if (lookahead == 'C') ADVANCE(407);
      if (lookahead == 'E') ADVANCE(411);
      if (lookahead == 'F') ADVANCE(431);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'I') ADVANCE(409);
      if (lookahead == 'L') ADVANCE(376);
      if (lookahead == 'P') ADVANCE(434);
      if (lookahead == 'R') ADVANCE(444);
      if (lookahead == 'U') ADVANCE(435);
      if (lookahead == 'V') ADVANCE(390);
      if (lookahead == 'W') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'b') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead == 'u') ADVANCE(360);
      if (lookahead == 'v') ADVANCE(311);
      if (lookahead == 'w') ADVANCE(343);
      if (lookahead == '}') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (lookahead == '-' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 149:
      if (eof) ADVANCE(150);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(426);
      if (lookahead == 'B') ADVANCE(443);
      if (lookahead == 'C') ADVANCE(407);
      if (lookahead == 'E') ADVANCE(411);
      if (lookahead == 'F') ADVANCE(431);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'I') ADVANCE(409);
      if (lookahead == 'L') ADVANCE(376);
      if (lookahead == 'P') ADVANCE(434);
      if (lookahead == 'R') ADVANCE(444);
      if (lookahead == 'U') ADVANCE(435);
      if (lookahead == 'V') ADVANCE(390);
      if (lookahead == 'W') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'b') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead == 'u') ADVANCE(360);
      if (lookahead == 'v') ADVANCE(311);
      if (lookahead == 'w') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (lookahead == '-' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(258);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(258);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(449);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(233);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(208);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(241);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(237);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(258);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(283);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(284);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
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
          lookahead != '\\') ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_version_instruction_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_version_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_version_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__version_instruction_semver);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_project_instruction_token1);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_project_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_project_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_project_instruction_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_import_instruction_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_import_instruction_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_import_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'B') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'C') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'D') ADVANCE(160);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'D') ADVANCE(451);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'D') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(125);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'G') ADVANCE(193);
      if (lookahead == 'g') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'H') ADVANCE(84);
      if (lookahead == 'h') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'H') ADVANCE(92);
      if (lookahead == 'h') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'J') ADVANCE(89);
      if (lookahead == 'j') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'K') ADVANCE(199);
      if (lookahead == 'k') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'L') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'L') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'L') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'M') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'M') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'M') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'M') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead == 'X') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == 'x') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'N') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'N') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'N') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'P') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'P') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'P') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'P') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'R') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'S') ADVANCE(100);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'S') ADVANCE(90);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'T') ADVANCE(297);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'T') ADVANCE(292);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'T') ADVANCE(129);
      if (lookahead == 'V') ADVANCE(169);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == 'v') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'U') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'U') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'U') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'Y') ADVANCE(172);
      if (lookahead == 'y') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'Y') ADVANCE(124);
      if (lookahead == 'y') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_COLON_LF);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'A') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'A') ADVANCE(403);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'B') ADVANCE(391);
      if (lookahead == 'b') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'C') ADVANCE(395);
      if (lookahead == 'c') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'D') ADVANCE(448);
      if (lookahead == 'd') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == 'd') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'D') ADVANCE(399);
      if (lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(379);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(430);
      if (lookahead == 'O') ADVANCE(406);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(404);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'E') ADVANCE(428);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'G') ADVANCE(195);
      if (lookahead == 'g') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'H') ADVANCE(380);
      if (lookahead == 'h') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'H') ADVANCE(389);
      if (lookahead == 'h') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'I') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'I') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'I') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'I') ADVANCE(429);
      if (lookahead == 'i') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'J') ADVANCE(385);
      if (lookahead == 'j') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'K') ADVANCE(201);
      if (lookahead == 'k') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'K') ADVANCE(384);
      if (lookahead == 'k') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'L') ADVANCE(438);
      if (lookahead == 'l') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'L') ADVANCE(382);
      if (lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'L') ADVANCE(445);
      if (lookahead == 'l') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'M') ADVANCE(383);
      if (lookahead == 'O') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'M') ADVANCE(155);
      if (lookahead == 'm') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'M') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'N') ADVANCE(442);
      if (lookahead == 'X') ADVANCE(423);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'N') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead == 'n') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'N') ADVANCE(441);
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(400);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(408);
      if (lookahead == 'o') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(413);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'O') ADVANCE(437);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'p') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'P') ADVANCE(421);
      if (lookahead == 'p') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'P') ADVANCE(418);
      if (lookahead == 'p') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'P') ADVANCE(420);
      if (lookahead == 'p') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'r') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(416);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(447);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(439);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'R') ADVANCE(415);
      if (lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'S') ADVANCE(392);
      if (lookahead == 's') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'S') ADVANCE(398);
      if (lookahead == 's') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'S') ADVANCE(386);
      if (lookahead == 's') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'T') ADVANCE(394);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'T') ADVANCE(299);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'T') ADVANCE(294);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'T') ADVANCE(177);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'T') ADVANCE(432);
      if (lookahead == 'V') ADVANCE(171);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'v') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'U') ADVANCE(396);
      if (lookahead == 'u') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'U') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'U') ADVANCE(410);
      if (lookahead == 'u') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'Y') ADVANCE(174);
      if (lookahead == 'y') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (lookahead == 'Y') ADVANCE(424);
      if (lookahead == 'y') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_function_target_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_SLASH);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_build_instruction_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 148},
  [2] = {.lex_state = 148},
  [3] = {.lex_state = 148},
  [4] = {.lex_state = 148},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 45},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 45},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 49},
  [48] = {.lex_state = 45},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 49},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 29},
  [60] = {.lex_state = 34},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 37},
  [64] = {.lex_state = 38},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 29},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 37},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 43},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 42},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 46},
  [93] = {.lex_state = 39},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 52},
  [102] = {.lex_state = 42},
  [103] = {.lex_state = 39},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 42},
  [106] = {.lex_state = 16},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 17},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 28},
  [115] = {.lex_state = 28},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 28},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 44},
  [124] = {.lex_state = 41},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 27},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 50},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 49},
  [131] = {.lex_state = 49},
  [132] = {.lex_state = 49},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 41},
  [138] = {.lex_state = 31},
  [139] = {.lex_state = 20},
  [140] = {.lex_state = 17},
  [141] = {.lex_state = 31},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 31},
  [145] = {.lex_state = 46},
  [146] = {.lex_state = 31},
  [147] = {.lex_state = 49},
  [148] = {.lex_state = 31},
  [149] = {.lex_state = 28},
  [150] = {.lex_state = 57},
  [151] = {.lex_state = 17},
  [152] = {.lex_state = 46},
  [153] = {.lex_state = 27},
  [154] = {.lex_state = 17},
  [155] = {.lex_state = 28},
  [156] = {.lex_state = 45},
  [157] = {.lex_state = 40},
  [158] = {.lex_state = 54},
  [159] = {.lex_state = 15},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 53},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 18},
  [164] = {.lex_state = 18},
  [165] = {.lex_state = 36},
  [166] = {.lex_state = 18},
  [167] = {.lex_state = 18},
  [168] = {.lex_state = 18},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 53},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 15},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 29},
  [181] = {.lex_state = 29},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 47},
  [185] = {.lex_state = 40},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 53},
  [193] = {.lex_state = 53},
  [194] = {.lex_state = 46},
  [195] = {.lex_state = 29},
  [196] = {.lex_state = 49},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 36},
  [200] = {.lex_state = 40},
  [201] = {.lex_state = 36},
  [202] = {.lex_state = 49},
  [203] = {.lex_state = 31},
  [204] = {.lex_state = 70},
  [205] = {.lex_state = 11},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 19},
  [209] = {.lex_state = 58},
  [210] = {.lex_state = 148},
  [211] = {.lex_state = 57},
  [212] = {.lex_state = 42},
  [213] = {.lex_state = 70},
  [214] = {.lex_state = 70},
  [215] = {.lex_state = 49},
  [216] = {.lex_state = 20},
  [217] = {.lex_state = 49},
  [218] = {.lex_state = 29},
  [219] = {.lex_state = 70},
  [220] = {.lex_state = 70},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 49},
  [223] = {.lex_state = 19},
  [224] = {.lex_state = 36},
  [225] = {.lex_state = 20},
  [226] = {.lex_state = 20},
  [227] = {.lex_state = 20},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 70},
  [230] = {.lex_state = 148},
  [231] = {.lex_state = 70},
  [232] = {.lex_state = 19},
  [233] = {.lex_state = 29},
  [234] = {.lex_state = 70},
  [235] = {.lex_state = 19},
  [236] = {.lex_state = 70},
  [237] = {.lex_state = 148},
  [238] = {.lex_state = 70},
  [239] = {.lex_state = 70},
  [240] = {.lex_state = 20},
  [241] = {.lex_state = 70},
  [242] = {.lex_state = 70},
  [243] = {.lex_state = 148},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 70},
  [246] = {.lex_state = 70},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 20},
  [249] = {.lex_state = 70},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 70},
  [252] = {.lex_state = 70},
  [253] = {.lex_state = 42},
  [254] = {.lex_state = 42},
  [255] = {.lex_state = 42},
  [256] = {.lex_state = 29},
  [257] = {.lex_state = 46},
  [258] = {.lex_state = 6},
  [259] = {.lex_state = 70},
  [260] = {.lex_state = 70},
  [261] = {.lex_state = 42},
  [262] = {.lex_state = 70},
  [263] = {.lex_state = 12},
  [264] = {.lex_state = 19},
  [265] = {.lex_state = 42},
  [266] = {.lex_state = 49},
  [267] = {.lex_state = 70},
  [268] = {.lex_state = 70},
  [269] = {.lex_state = 61},
  [270] = {.lex_state = 20},
  [271] = {.lex_state = 66},
  [272] = {.lex_state = 27},
  [273] = {.lex_state = 29},
  [274] = {.lex_state = 61},
  [275] = {.lex_state = 29},
  [276] = {.lex_state = 20},
  [277] = {.lex_state = 27},
  [278] = {.lex_state = 27},
  [279] = {.lex_state = 20},
  [280] = {.lex_state = 20},
  [281] = {.lex_state = 46},
  [282] = {.lex_state = 69},
  [283] = {.lex_state = 29},
  [284] = {.lex_state = 27},
  [285] = {.lex_state = 27},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 46},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 13},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 148},
  [292] = {.lex_state = 148},
  [293] = {.lex_state = 62},
  [294] = {.lex_state = 66},
  [295] = {.lex_state = 148},
  [296] = {.lex_state = 27},
  [297] = {.lex_state = 148},
  [298] = {.lex_state = 49},
  [299] = {.lex_state = 62},
  [300] = {.lex_state = 66},
  [301] = {.lex_state = 6},
  [302] = {.lex_state = 6},
  [303] = {.lex_state = 6},
  [304] = {.lex_state = 6},
  [305] = {.lex_state = 42},
  [306] = {.lex_state = 6},
  [307] = {.lex_state = 58},
  [308] = {.lex_state = 6},
  [309] = {.lex_state = 6},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 6},
  [312] = {.lex_state = 6},
  [313] = {.lex_state = 57},
  [314] = {.lex_state = 148},
  [315] = {.lex_state = 6},
  [316] = {.lex_state = 6},
  [317] = {.lex_state = 6},
  [318] = {.lex_state = 67},
  [319] = {.lex_state = 262},
  [320] = {.lex_state = 67},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 6},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 73},
  [326] = {.lex_state = 6},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 73},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 148},
  [333] = {.lex_state = 148},
  [334] = {.lex_state = 75},
  [335] = {.lex_state = 148},
  [336] = {.lex_state = 68},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 6},
  [339] = {.lex_state = 73},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 6},
  [342] = {.lex_state = 6},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 148},
  [345] = {.lex_state = 68},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 6},
  [348] = {.lex_state = 73},
  [349] = {.lex_state = 148},
  [350] = {.lex_state = 68},
  [351] = {.lex_state = 6},
  [352] = {.lex_state = 6},
  [353] = {.lex_state = 73},
  [354] = {.lex_state = 148},
  [355] = {.lex_state = 68},
  [356] = {.lex_state = 6},
  [357] = {.lex_state = 6},
  [358] = {.lex_state = 148},
  [359] = {.lex_state = 68},
  [360] = {.lex_state = 6},
  [361] = {.lex_state = 68},
  [362] = {.lex_state = 148},
  [363] = {.lex_state = 6},
  [364] = {.lex_state = 148},
  [365] = {.lex_state = 148},
  [366] = {.lex_state = 6},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 148},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 148},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 148},
  [373] = {.lex_state = 75},
  [374] = {.lex_state = 148},
  [375] = {.lex_state = 6},
  [376] = {.lex_state = 148},
  [377] = {.lex_state = 6},
  [378] = {.lex_state = 148},
  [379] = {.lex_state = 148},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 67},
  [382] = {.lex_state = 67},
  [383] = {.lex_state = 67},
  [384] = {.lex_state = 67},
  [385] = {.lex_state = 67},
  [386] = {.lex_state = 67},
  [387] = {.lex_state = 67},
  [388] = {.lex_state = 67},
  [389] = {.lex_state = 67},
  [390] = {.lex_state = 67},
  [391] = {.lex_state = 67},
  [392] = {.lex_state = 67},
  [393] = {.lex_state = 67},
  [394] = {(TSStateId)(-1)},
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
    [sym__target_name] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(331),
    [sym__instruction] = STATE(341),
    [sym_from_instruction] = STATE(330),
    [sym_run_instruction] = STATE(330),
    [sym_cmd_instruction] = STATE(330),
    [sym_label_instruction] = STATE(330),
    [sym_expose_instruction] = STATE(330),
    [sym_env_instruction] = STATE(330),
    [sym_copy_instruction] = STATE(330),
    [sym_entrypoint_instruction] = STATE(330),
    [sym_volume_instruction] = STATE(330),
    [sym_user_instruction] = STATE(330),
    [sym_workdir_instruction] = STATE(330),
    [sym_arg_instruction] = STATE(330),
    [sym_healthcheck_instruction] = STATE(330),
    [sym_line_continuation] = STATE(1),
    [sym_version_instruction] = STATE(330),
    [sym_project_instruction] = STATE(330),
    [sym_import_instruction] = STATE(330),
    [sym_target_header] = STATE(330),
    [sym_function_header] = STATE(330),
    [sym_build_instruction] = STATE(330),
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
    STATE(341), 1,
      sym__instruction,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(330), 19,
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
    STATE(341), 1,
      sym__instruction,
    STATE(330), 19,
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
    STATE(6), 1,
      aux_sym_run_instruction_repeat1,
    STATE(19), 1,
      aux_sym_shell_command_repeat1,
    STATE(116), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(247), 1,
      sym_shell_fragment,
    STATE(312), 1,
      sym__anon_comment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(103), 2,
      sym_param,
      sym_mount_param,
    STATE(316), 2,
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
    STATE(6), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_shell_command_repeat1,
    STATE(27), 1,
      aux_sym_run_instruction_repeat1,
    STATE(116), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(247), 1,
      sym_shell_fragment,
    STATE(312), 1,
      sym__anon_comment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(103), 2,
      sym_param,
      sym_mount_param,
    STATE(326), 2,
      sym_shell_command,
      sym_json_string_array,
  [322] = 12,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 1,
      anon_sym_DOLLAR2,
    ACTIONS(127), 1,
      aux_sym__env_key_token1,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_line_continuation,
    STATE(50), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(121), 1,
      sym__imm_expansion,
    STATE(143), 1,
      sym__immediate_expansion,
    ACTIONS(135), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(285), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [362] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_shell_command_repeat1,
    STATE(116), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(247), 1,
      sym_shell_fragment,
    STATE(312), 1,
      sym__anon_comment,
    STATE(311), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [399] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_shell_command_repeat1,
    STATE(116), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(247), 1,
      sym_shell_fragment,
    STATE(312), 1,
      sym__anon_comment,
    STATE(347), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [436] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(137), 1,
      anon_sym_DOLLAR2,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(58), 1,
      sym__imm_expansion,
    STATE(66), 1,
      sym__immediate_expansion,
    ACTIONS(143), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(338), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [470] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(137), 1,
      anon_sym_DOLLAR2,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(58), 1,
      sym__imm_expansion,
    STATE(66), 1,
      sym__immediate_expansion,
    ACTIONS(143), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(174), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [504] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(137), 1,
      anon_sym_DOLLAR2,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(58), 1,
      sym__imm_expansion,
    STATE(66), 1,
      sym__immediate_expansion,
    ACTIONS(143), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(363), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [538] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(137), 1,
      anon_sym_DOLLAR2,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(58), 1,
      sym__imm_expansion,
    STATE(66), 1,
      sym__immediate_expansion,
    ACTIONS(143), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(366), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [572] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      anon_sym_DOLLAR,
    ACTIONS(147), 1,
      aux_sym_image_name_token1,
    ACTIONS(149), 1,
      anon_sym_DASH_DASH,
    STATE(14), 1,
      sym_line_continuation,
    STATE(28), 1,
      sym_expansion,
    STATE(30), 1,
      sym_param,
    STATE(94), 1,
      sym_image_name,
    ACTIONS(151), 2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
    STATE(279), 2,
      sym_image_spec,
      sym_earthfile_local_path,
  [605] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      anon_sym_DOLLAR,
    ACTIONS(147), 1,
      aux_sym_image_name_token1,
    ACTIONS(149), 1,
      anon_sym_DASH_DASH,
    STATE(15), 1,
      sym_line_continuation,
    STATE(28), 1,
      sym_expansion,
    STATE(32), 1,
      sym_param,
    STATE(94), 1,
      sym_image_name,
    ACTIONS(151), 2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
    STATE(270), 2,
      sym_image_spec,
      sym_earthfile_local_path,
  [638] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(137), 1,
      anon_sym_DOLLAR2,
    ACTIONS(153), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(58), 1,
      sym__imm_expansion,
    STATE(66), 1,
      sym__immediate_expansion,
    ACTIONS(143), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    ACTIONS(155), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [669] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(149), 1,
      anon_sym_DASH_DASH,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    ACTIONS(159), 1,
      aux_sym_image_name_token1,
    STATE(17), 1,
      sym_line_continuation,
    STATE(20), 1,
      sym_expansion,
    STATE(48), 1,
      sym_param,
    STATE(80), 1,
      sym_image_name,
    ACTIONS(161), 2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
    STATE(244), 2,
      sym_image_spec,
      sym_earthfile_local_path,
  [702] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 1,
      anon_sym_DOLLAR2,
    STATE(58), 1,
      sym__imm_expansion,
    STATE(66), 1,
      sym__immediate_expansion,
    ACTIONS(170), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(18), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(168), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [731] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_line_continuation,
    STATE(61), 1,
      aux_sym_shell_command_repeat1,
    STATE(116), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(221), 1,
      sym_shell_fragment,
    STATE(312), 1,
      sym__anon_comment,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [761] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(175), 1,
      anon_sym_DOLLAR2,
    ACTIONS(177), 1,
      aux_sym_image_name_token2,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH,
    STATE(20), 1,
      sym_line_continuation,
    STATE(25), 1,
      aux_sym_image_name_repeat1,
    STATE(98), 1,
      sym__imm_expansion,
    STATE(104), 1,
      sym__immediate_expansion,
    ACTIONS(173), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [791] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(183), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(185), 1,
      anon_sym_DOLLAR2,
    ACTIONS(187), 1,
      aux_sym_image_name_token2,
    STATE(21), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_image_name_repeat1,
    STATE(88), 1,
      sym__immediate_expansion,
    STATE(89), 1,
      sym__imm_expansion,
    ACTIONS(181), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [821] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(191), 1,
      anon_sym_DOLLAR2,
    ACTIONS(194), 1,
      aux_sym_image_name_token2,
    ACTIONS(197), 1,
      anon_sym_DASH_DASH,
    STATE(98), 1,
      sym__imm_expansion,
    STATE(104), 1,
      sym__immediate_expansion,
    STATE(22), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(189), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [849] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(197), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(199), 1,
      anon_sym_DOLLAR2,
    ACTIONS(202), 1,
      aux_sym_image_name_token2,
    STATE(88), 1,
      sym__immediate_expansion,
    STATE(89), 1,
      sym__imm_expansion,
    STATE(23), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(189), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [877] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_line_continuation,
    STATE(61), 1,
      aux_sym_shell_command_repeat1,
    STATE(116), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(312), 1,
      sym__anon_comment,
    STATE(342), 1,
      sym_shell_fragment,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [907] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(175), 1,
      anon_sym_DOLLAR2,
    ACTIONS(177), 1,
      aux_sym_image_name_token2,
    ACTIONS(183), 1,
      anon_sym_DASH_DASH,
    STATE(22), 1,
      aux_sym_image_name_repeat1,
    STATE(25), 1,
      sym_line_continuation,
    STATE(98), 1,
      sym__imm_expansion,
    STATE(104), 1,
      sym__immediate_expansion,
    ACTIONS(181), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [937] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(24), 1,
      aux_sym_shell_command_repeat1,
    STATE(26), 1,
      sym_line_continuation,
    STATE(116), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym__comment_line,
    STATE(312), 1,
      sym__anon_comment,
    STATE(375), 1,
      sym_shell_fragment,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [967] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH,
    ACTIONS(208), 1,
      aux_sym_shell_fragment_token1,
    STATE(27), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(103), 2,
      sym_param,
      sym_mount_param,
    ACTIONS(210), 4,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [991] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(179), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(185), 1,
      anon_sym_DOLLAR2,
    ACTIONS(187), 1,
      aux_sym_image_name_token2,
    STATE(21), 1,
      aux_sym_image_name_repeat1,
    STATE(28), 1,
      sym_line_continuation,
    STATE(88), 1,
      sym__immediate_expansion,
    STATE(89), 1,
      sym__imm_expansion,
    ACTIONS(173), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1021] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(212), 1,
      anon_sym_DOLLAR2,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      sym_line_continuation,
    STATE(35), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(114), 1,
      sym__imm_expansion,
    STATE(115), 1,
      sym__immediate_expansion,
    ACTIONS(216), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1050] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      anon_sym_DOLLAR,
    ACTIONS(147), 1,
      aux_sym_image_name_token1,
    STATE(28), 1,
      sym_expansion,
    STATE(30), 1,
      sym_line_continuation,
    STATE(94), 1,
      sym_image_name,
    ACTIONS(151), 2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
    STATE(276), 2,
      sym_image_spec,
      sym_earthfile_local_path,
  [1077] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(220), 1,
      anon_sym_LF,
    ACTIONS(222), 1,
      aux_sym_label_pair_token1,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    STATE(182), 1,
      sym_label_pair,
    STATE(31), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
    STATE(310), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1104] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      anon_sym_DOLLAR,
    ACTIONS(147), 1,
      aux_sym_image_name_token1,
    STATE(28), 1,
      sym_expansion,
    STATE(32), 1,
      sym_line_continuation,
    STATE(94), 1,
      sym_image_name,
    ACTIONS(151), 2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
    STATE(280), 2,
      sym_image_spec,
      sym_earthfile_local_path,
  [1131] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      aux_sym_shell_fragment_token1,
    STATE(33), 1,
      sym_line_continuation,
    STATE(43), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(231), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1154] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(212), 1,
      anon_sym_DOLLAR2,
    ACTIONS(218), 1,
      anon_sym_BSLASH,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_line_continuation,
    STATE(53), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(114), 1,
      sym__imm_expansion,
    STATE(115), 1,
      sym__immediate_expansion,
    ACTIONS(216), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1183] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(212), 1,
      anon_sym_DOLLAR2,
    ACTIONS(218), 1,
      anon_sym_BSLASH,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_line_continuation,
    STATE(53), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(114), 1,
      sym__imm_expansion,
    STATE(115), 1,
      sym__immediate_expansion,
    ACTIONS(216), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1212] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(241), 1,
      anon_sym_LF,
    ACTIONS(245), 1,
      anon_sym_DOLLAR2,
    ACTIONS(248), 1,
      aux_sym_image_digest_token1,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(142), 1,
      sym__immediate_expansion,
    ACTIONS(243), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    STATE(36), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1239] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      aux_sym_shell_fragment_token1,
    STATE(37), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(251), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1260] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(262), 1,
      anon_sym_DOLLAR2,
    ACTIONS(264), 1,
      aux_sym_image_digest_token1,
    STATE(36), 1,
      aux_sym_image_digest_repeat1,
    STATE(38), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(142), 1,
      sym__immediate_expansion,
    ACTIONS(260), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [1289] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(212), 1,
      anon_sym_DOLLAR2,
    ACTIONS(218), 1,
      anon_sym_BSLASH,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_line_continuation,
    STATE(42), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(114), 1,
      sym__imm_expansion,
    STATE(115), 1,
      sym__immediate_expansion,
    ACTIONS(216), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1318] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(270), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(272), 1,
      anon_sym_DOLLAR2,
    STATE(40), 1,
      sym_line_continuation,
    STATE(41), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(171), 1,
      sym__imm_expansion,
    STATE(186), 1,
      sym__immediate_expansion,
    STATE(187), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(268), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1347] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(276), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(279), 1,
      anon_sym_DOLLAR2,
    STATE(171), 1,
      sym__imm_expansion,
    STATE(186), 1,
      sym__immediate_expansion,
    STATE(187), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(274), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(41), 2,
      sym_line_continuation,
      aux_sym__user_name_or_group_repeat1,
  [1374] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(212), 1,
      anon_sym_DOLLAR2,
    ACTIONS(218), 1,
      anon_sym_BSLASH,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_line_continuation,
    STATE(53), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(114), 1,
      sym__imm_expansion,
    STATE(115), 1,
      sym__immediate_expansion,
    ACTIONS(216), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1403] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      aux_sym_shell_fragment_token1,
    STATE(37), 1,
      aux_sym_mount_param_repeat1,
    STATE(43), 1,
      sym_line_continuation,
    ACTIONS(284), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1426] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(290), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(292), 1,
      anon_sym_DOLLAR2,
    ACTIONS(294), 1,
      aux_sym_image_tag_token1,
    STATE(44), 1,
      sym_line_continuation,
    STATE(51), 1,
      aux_sym_image_tag_repeat1,
    STATE(140), 1,
      sym__immediate_expansion,
    STATE(151), 1,
      sym__imm_expansion,
    ACTIONS(288), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1455] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(290), 1,
      anon_sym_DASH_DASH,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    ACTIONS(298), 1,
      aux_sym_image_tag_token1,
    STATE(45), 1,
      sym_line_continuation,
    STATE(54), 1,
      aux_sym_image_tag_repeat1,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(136), 1,
      sym__immediate_expansion,
    ACTIONS(288), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1484] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(212), 1,
      anon_sym_DOLLAR2,
    ACTIONS(218), 1,
      anon_sym_BSLASH,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(46), 1,
      sym_line_continuation,
    STATE(114), 1,
      sym__imm_expansion,
    STATE(115), 1,
      sym__immediate_expansion,
    ACTIONS(216), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1513] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(302), 1,
      aux_sym_path_token1,
    ACTIONS(304), 1,
      anon_sym_DOLLAR,
    ACTIONS(306), 1,
      anon_sym_DASH_DASH,
    STATE(47), 1,
      sym_line_continuation,
    STATE(56), 1,
      aux_sym_copy_instruction_repeat1,
    STATE(105), 1,
      sym_expansion,
    STATE(147), 1,
      aux_sym_copy_instruction_repeat2,
    STATE(217), 1,
      sym_param,
    STATE(305), 1,
      sym_path,
  [1544] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    ACTIONS(159), 1,
      aux_sym_image_name_token1,
    STATE(20), 1,
      sym_expansion,
    STATE(48), 1,
      sym_line_continuation,
    STATE(80), 1,
      sym_image_name,
    ACTIONS(161), 2,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
    STATE(263), 2,
      sym_image_spec,
      sym_earthfile_local_path,
  [1571] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 1,
      aux_sym_label_pair_token1,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      aux_sym_label_instruction_repeat1,
    STATE(49), 1,
      sym_line_continuation,
    STATE(182), 1,
      sym_label_pair,
    STATE(310), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1600] = 9,
    ACTIONS(125), 1,
      anon_sym_DOLLAR2,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      aux_sym__env_key_token1,
    STATE(50), 1,
      sym_line_continuation,
    STATE(55), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(121), 1,
      sym__imm_expansion,
    STATE(143), 1,
      sym__immediate_expansion,
    ACTIONS(135), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1629] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(318), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(320), 1,
      anon_sym_DOLLAR2,
    ACTIONS(323), 1,
      aux_sym_image_tag_token1,
    STATE(140), 1,
      sym__immediate_expansion,
    STATE(151), 1,
      sym__imm_expansion,
    ACTIONS(316), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(51), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1656] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(270), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(272), 1,
      anon_sym_DOLLAR2,
    STATE(40), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(52), 1,
      sym_line_continuation,
    STATE(171), 1,
      sym__imm_expansion,
    STATE(186), 1,
      sym__immediate_expansion,
    STATE(187), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(326), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1685] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(328), 1,
      anon_sym_DOLLAR2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      anon_sym_BSLASH,
    STATE(114), 1,
      sym__imm_expansion,
    STATE(115), 1,
      sym__immediate_expansion,
    ACTIONS(333), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(53), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1712] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(318), 1,
      anon_sym_DASH_DASH,
    ACTIONS(339), 1,
      anon_sym_DOLLAR2,
    ACTIONS(342), 1,
      aux_sym_image_tag_token1,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(136), 1,
      sym__immediate_expansion,
    ACTIONS(316), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(54), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1739] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      aux_sym__env_key_token1,
    ACTIONS(345), 1,
      anon_sym_DOLLAR2,
    STATE(121), 1,
      sym__imm_expansion,
    STATE(143), 1,
      sym__immediate_expansion,
    ACTIONS(348), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(55), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1766] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(302), 1,
      aux_sym_path_token1,
    ACTIONS(304), 1,
      anon_sym_DOLLAR,
    ACTIONS(306), 1,
      anon_sym_DASH_DASH,
    STATE(56), 1,
      sym_line_continuation,
    STATE(105), 1,
      sym_expansion,
    STATE(130), 1,
      aux_sym_copy_instruction_repeat1,
    STATE(131), 1,
      aux_sym_copy_instruction_repeat2,
    STATE(217), 1,
      sym_param,
    STATE(305), 1,
      sym_path,
  [1797] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(353), 1,
      aux_sym_path_token2,
    ACTIONS(356), 1,
      anon_sym_DOLLAR2,
    STATE(179), 1,
      sym__imm_expansion,
    STATE(195), 1,
      sym__immediate_expansion,
    ACTIONS(351), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(57), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1821] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(58), 1,
      sym_line_continuation,
    ACTIONS(361), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(359), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1839] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      aux_sym_path_token2,
    ACTIONS(367), 1,
      anon_sym_DOLLAR2,
    STATE(59), 1,
      sym_line_continuation,
    STATE(67), 1,
      aux_sym_path_repeat1,
    STATE(179), 1,
      sym__imm_expansion,
    STATE(195), 1,
      sym__immediate_expansion,
    ACTIONS(363), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1865] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(369), 1,
      aux_sym_label_pair_token1,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    STATE(49), 1,
      aux_sym_label_instruction_repeat1,
    STATE(60), 1,
      sym_line_continuation,
    STATE(182), 1,
      sym_label_pair,
    STATE(310), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1891] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(377), 1,
      anon_sym_POUND,
    STATE(185), 1,
      sym__comment_line,
    STATE(312), 1,
      sym__anon_comment,
    STATE(61), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
    ACTIONS(375), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1913] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(270), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(272), 1,
      anon_sym_DOLLAR2,
    ACTIONS(380), 1,
      anon_sym_LF,
    STATE(62), 1,
      sym_line_continuation,
    STATE(69), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(171), 1,
      sym__imm_expansion,
    STATE(186), 1,
      sym__immediate_expansion,
    STATE(205), 1,
      sym__immediate_user_name_or_group_fragment,
  [1941] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(384), 1,
      aux_sym_shell_fragment_token1,
    STATE(63), 1,
      sym_line_continuation,
    ACTIONS(382), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1959] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(386), 1,
      anon_sym_EQ,
    ACTIONS(390), 1,
      aux_sym_shell_fragment_token1,
    STATE(64), 1,
      sym_line_continuation,
    ACTIONS(388), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1979] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(392), 1,
      anon_sym_LF,
    ACTIONS(394), 1,
      aux_sym_path_token2,
    ACTIONS(396), 1,
      anon_sym_DOLLAR2,
    ACTIONS(398), 1,
      anon_sym_DASH_DASH,
    STATE(65), 1,
      sym_line_continuation,
    STATE(71), 1,
      aux_sym_path_repeat1,
    STATE(178), 1,
      sym__immediate_expansion,
    STATE(188), 1,
      sym__imm_expansion,
  [2007] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(66), 1,
      sym_line_continuation,
    ACTIONS(402), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(400), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2025] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      aux_sym_path_token2,
    ACTIONS(367), 1,
      anon_sym_DOLLAR2,
    STATE(57), 1,
      aux_sym_path_repeat1,
    STATE(67), 1,
      sym_line_continuation,
    STATE(179), 1,
      sym__imm_expansion,
    STATE(195), 1,
      sym__immediate_expansion,
    ACTIONS(404), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [2051] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(68), 1,
      sym_line_continuation,
    ACTIONS(408), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(406), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2069] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(412), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(415), 1,
      anon_sym_DOLLAR2,
    STATE(171), 1,
      sym__imm_expansion,
    STATE(186), 1,
      sym__immediate_expansion,
    STATE(205), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(69), 2,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
  [2095] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(256), 1,
      aux_sym_shell_fragment_token1,
    STATE(70), 1,
      sym_line_continuation,
    ACTIONS(251), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2113] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(394), 1,
      aux_sym_path_token2,
    ACTIONS(396), 1,
      anon_sym_DOLLAR2,
    ACTIONS(418), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      anon_sym_DASH_DASH,
    STATE(71), 1,
      sym_line_continuation,
    STATE(72), 1,
      aux_sym_path_repeat1,
    STATE(178), 1,
      sym__immediate_expansion,
    STATE(188), 1,
      sym__imm_expansion,
  [2141] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(351), 1,
      anon_sym_DASH_DASH,
    ACTIONS(422), 1,
      anon_sym_LF,
    ACTIONS(424), 1,
      aux_sym_path_token2,
    ACTIONS(427), 1,
      anon_sym_DOLLAR2,
    STATE(178), 1,
      sym__immediate_expansion,
    STATE(188), 1,
      sym__imm_expansion,
    STATE(72), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2167] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(351), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(422), 1,
      anon_sym_LF,
    ACTIONS(430), 1,
      aux_sym_path_token2,
    ACTIONS(433), 1,
      anon_sym_DOLLAR2,
    STATE(166), 1,
      sym__imm_expansion,
    STATE(183), 1,
      sym__immediate_expansion,
    STATE(73), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2193] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(392), 1,
      anon_sym_LF,
    ACTIONS(398), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(436), 1,
      aux_sym_path_token2,
    ACTIONS(438), 1,
      anon_sym_DOLLAR2,
    STATE(74), 1,
      sym_line_continuation,
    STATE(77), 1,
      aux_sym_path_repeat1,
    STATE(166), 1,
      sym__imm_expansion,
    STATE(183), 1,
      sym__immediate_expansion,
  [2221] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(442), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(440), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2239] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(76), 1,
      sym_line_continuation,
    ACTIONS(446), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(444), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2257] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(418), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(436), 1,
      aux_sym_path_token2,
    ACTIONS(438), 1,
      anon_sym_DOLLAR2,
    STATE(73), 1,
      aux_sym_path_repeat1,
    STATE(77), 1,
      sym_line_continuation,
    STATE(166), 1,
      sym__imm_expansion,
    STATE(183), 1,
      sym__immediate_expansion,
  [2285] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(78), 1,
      sym_line_continuation,
    ACTIONS(450), 2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(448), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2302] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(436), 1,
      aux_sym_path_token2,
    ACTIONS(438), 1,
      anon_sym_DOLLAR2,
    ACTIONS(452), 1,
      anon_sym_LF,
    STATE(73), 1,
      aux_sym_path_repeat1,
    STATE(79), 1,
      sym_line_continuation,
    STATE(166), 1,
      sym__imm_expansion,
    STATE(183), 1,
      sym__immediate_expansion,
  [2327] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(454), 1,
      anon_sym_LF,
    ACTIONS(456), 1,
      anon_sym_COLON,
    ACTIONS(458), 1,
      anon_sym_AT,
    ACTIONS(460), 1,
      anon_sym_DASH_DASH,
    STATE(80), 1,
      sym_line_continuation,
    STATE(122), 1,
      sym_image_tag,
    STATE(240), 1,
      sym_image_digest,
  [2352] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(464), 1,
      anon_sym_DOLLAR,
    ACTIONS(466), 1,
      aux_sym_expose_port_token1,
    STATE(81), 1,
      sym_line_continuation,
    STATE(95), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(227), 2,
      sym_expansion,
      sym_expose_port,
  [2375] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(468), 1,
      anon_sym_LF,
    ACTIONS(470), 1,
      anon_sym_DOLLAR2,
    ACTIONS(472), 1,
      aux_sym_image_alias_token2,
    STATE(82), 1,
      sym_line_continuation,
    STATE(83), 1,
      aux_sym_image_alias_repeat1,
    STATE(232), 1,
      sym__imm_expansion,
    STATE(235), 1,
      sym__immediate_expansion,
  [2400] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(470), 1,
      anon_sym_DOLLAR2,
    ACTIONS(472), 1,
      aux_sym_image_alias_token2,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(83), 1,
      sym_line_continuation,
    STATE(97), 1,
      aux_sym_image_alias_repeat1,
    STATE(232), 1,
      sym__imm_expansion,
    STATE(235), 1,
      sym__immediate_expansion,
  [2425] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(84), 1,
      sym_line_continuation,
    ACTIONS(446), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(444), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2442] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(408), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(406), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2459] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(86), 1,
      sym_line_continuation,
    ACTIONS(450), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(448), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2476] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(270), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(272), 1,
      anon_sym_DOLLAR2,
    STATE(62), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(87), 1,
      sym_line_continuation,
    STATE(171), 1,
      sym__imm_expansion,
    STATE(186), 1,
      sym__immediate_expansion,
    STATE(205), 1,
      sym__immediate_user_name_or_group_fragment,
  [2501] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(88), 1,
      sym_line_continuation,
    ACTIONS(478), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(476), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2518] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(89), 1,
      sym_line_continuation,
    ACTIONS(361), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(359), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2535] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(452), 1,
      sym__non_newline_whitespace,
    ACTIONS(480), 1,
      aux_sym_path_token2,
    ACTIONS(482), 1,
      anon_sym_DOLLAR2,
    STATE(90), 1,
      sym_line_continuation,
    STATE(102), 1,
      aux_sym_path_repeat1,
    STATE(212), 1,
      sym__immediate_expansion,
    STATE(255), 1,
      sym__imm_expansion,
  [2560] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(436), 1,
      aux_sym_path_token2,
    ACTIONS(438), 1,
      anon_sym_DOLLAR2,
    ACTIONS(484), 1,
      anon_sym_LF,
    STATE(79), 1,
      aux_sym_path_repeat1,
    STATE(91), 1,
      sym_line_continuation,
    STATE(166), 1,
      sym__imm_expansion,
    STATE(183), 1,
      sym__immediate_expansion,
  [2585] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(486), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(488), 1,
      anon_sym_NONE,
    ACTIONS(490), 1,
      anon_sym_DASH_DASH,
    STATE(92), 1,
      sym_line_continuation,
    STATE(145), 1,
      aux_sym_copy_instruction_repeat1,
    STATE(287), 1,
      sym_param,
    STATE(309), 1,
      sym_cmd_instruction,
  [2610] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      aux_sym_shell_fragment_token1,
    STATE(93), 1,
      sym_line_continuation,
    ACTIONS(492), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2627] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(454), 1,
      anon_sym_LF,
    ACTIONS(458), 1,
      anon_sym_AT,
    ACTIONS(460), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(496), 1,
      anon_sym_COLON,
    STATE(94), 1,
      sym_line_continuation,
    STATE(122), 1,
      sym_image_tag,
    STATE(240), 1,
      sym_image_digest,
  [2652] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(498), 1,
      anon_sym_LF,
    ACTIONS(500), 1,
      anon_sym_DOLLAR,
    ACTIONS(503), 1,
      aux_sym_expose_port_token1,
    STATE(95), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(227), 2,
      sym_expansion,
      sym_expose_port,
  [2673] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(96), 1,
      sym_line_continuation,
    ACTIONS(408), 2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(406), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2690] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(506), 1,
      anon_sym_LF,
    ACTIONS(508), 1,
      anon_sym_DOLLAR2,
    ACTIONS(511), 1,
      aux_sym_image_alias_token2,
    STATE(232), 1,
      sym__imm_expansion,
    STATE(235), 1,
      sym__immediate_expansion,
    STATE(97), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2713] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(98), 1,
      sym_line_continuation,
    ACTIONS(361), 2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(359), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2730] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(446), 2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(444), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2747] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(100), 1,
      sym_line_continuation,
    ACTIONS(442), 2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(440), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2764] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      aux_sym_path_token1,
    ACTIONS(516), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym_expansion,
    STATE(101), 1,
      sym_line_continuation,
    STATE(218), 1,
      sym_path,
    STATE(306), 1,
      sym_json_string_array,
  [2789] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(422), 1,
      sym__non_newline_whitespace,
    ACTIONS(518), 1,
      aux_sym_path_token2,
    ACTIONS(521), 1,
      anon_sym_DOLLAR2,
    STATE(212), 1,
      sym__immediate_expansion,
    STATE(255), 1,
      sym__imm_expansion,
    STATE(102), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2812] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(526), 1,
      aux_sym_shell_fragment_token1,
    STATE(103), 1,
      sym_line_continuation,
    ACTIONS(524), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2829] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(104), 1,
      sym_line_continuation,
    ACTIONS(478), 2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(476), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2846] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(480), 1,
      aux_sym_path_token2,
    ACTIONS(482), 1,
      anon_sym_DOLLAR2,
    ACTIONS(484), 1,
      sym__non_newline_whitespace,
    STATE(90), 1,
      aux_sym_path_repeat1,
    STATE(105), 1,
      sym_line_continuation,
    STATE(212), 1,
      sym__immediate_expansion,
    STATE(255), 1,
      sym__imm_expansion,
  [2871] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(106), 1,
      sym_line_continuation,
    ACTIONS(442), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(440), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2888] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(446), 1,
      aux_sym__env_key_token1,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(444), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2904] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(408), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    ACTIONS(406), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2920] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(442), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    ACTIONS(440), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2936] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(442), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(440), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2952] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(361), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    ACTIONS(359), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2968] = 4,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(533), 1,
      anon_sym_BSLASH_LF,
    STATE(112), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(530), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2984] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(446), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    ACTIONS(444), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3000] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(361), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(359), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3016] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(537), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(535), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3032] = 5,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(543), 1,
      anon_sym_BSLASH_LF,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(541), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [3050] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(117), 1,
      sym_line_continuation,
    ACTIONS(361), 2,
      aux_sym_image_tag_token1,
      anon_sym_DASH_DASH,
    ACTIONS(359), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3066] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(446), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(444), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3082] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(545), 1,
      anon_sym_BSLASH,
    ACTIONS(547), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      sym_line_continuation,
    STATE(148), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(549), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3102] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(446), 2,
      aux_sym_image_tag_token1,
      anon_sym_DASH_DASH,
    ACTIONS(444), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3118] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      aux_sym__env_key_token1,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(359), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3134] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(458), 1,
      anon_sym_AT,
    ACTIONS(551), 1,
      anon_sym_LF,
    STATE(122), 1,
      sym_line_continuation,
    STATE(207), 1,
      sym_image_digest,
    ACTIONS(553), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [3154] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(262), 1,
      anon_sym_DOLLAR2,
    ACTIONS(264), 1,
      aux_sym_image_digest_token1,
    STATE(38), 1,
      aux_sym_image_digest_repeat1,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(123), 1,
      sym_line_continuation,
    STATE(142), 1,
      sym__immediate_expansion,
  [3176] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(292), 1,
      anon_sym_DOLLAR2,
    ACTIONS(294), 1,
      aux_sym_image_tag_token1,
    STATE(44), 1,
      aux_sym_image_tag_repeat1,
    STATE(124), 1,
      sym_line_continuation,
    STATE(140), 1,
      sym__immediate_expansion,
    STATE(151), 1,
      sym__imm_expansion,
  [3198] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(408), 1,
      aux_sym__env_key_token1,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(406), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3214] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 1,
      aux_sym__env_key_token1,
    STATE(296), 1,
      sym_env_pair,
    STATE(340), 1,
      sym__env_key,
    STATE(126), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [3234] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(442), 1,
      aux_sym__env_key_token1,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(440), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3250] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(390), 1,
      aux_sym_image_name_token1,
    ACTIONS(560), 1,
      anon_sym_EQ,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(388), 3,
      anon_sym_DOLLAR,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3268] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(408), 2,
      aux_sym_image_tag_token1,
      anon_sym_DASH_DASH,
    ACTIONS(406), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3284] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(562), 1,
      aux_sym_path_token1,
    ACTIONS(564), 1,
      anon_sym_DOLLAR,
    ACTIONS(566), 1,
      anon_sym_DASH_DASH,
    STATE(217), 1,
      sym_param,
    STATE(130), 2,
      sym_line_continuation,
      aux_sym_copy_instruction_repeat1,
  [3304] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(514), 1,
      aux_sym_path_token1,
    ACTIONS(516), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym_expansion,
    STATE(131), 1,
      sym_line_continuation,
    STATE(132), 1,
      aux_sym_copy_instruction_repeat2,
    STATE(273), 1,
      sym_path,
  [3326] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(569), 1,
      aux_sym_path_token1,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    STATE(105), 1,
      sym_expansion,
    STATE(305), 1,
      sym_path,
    STATE(132), 2,
      sym_line_continuation,
      aux_sym_copy_instruction_repeat2,
  [3346] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(442), 2,
      aux_sym_image_tag_token1,
      anon_sym_DASH_DASH,
    ACTIONS(440), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3362] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(408), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(406), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3378] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(545), 1,
      anon_sym_BSLASH,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    STATE(135), 1,
      sym_line_continuation,
    STATE(141), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(549), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3398] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(579), 2,
      aux_sym_image_tag_token1,
      anon_sym_DASH_DASH,
    ACTIONS(577), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3414] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    ACTIONS(298), 1,
      aux_sym_image_tag_token1,
    STATE(45), 1,
      aux_sym_image_tag_repeat1,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(136), 1,
      sym__immediate_expansion,
    STATE(137), 1,
      sym_line_continuation,
  [3436] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(545), 1,
      anon_sym_BSLASH,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(138), 1,
      sym_line_continuation,
    ACTIONS(549), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3456] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(583), 1,
      anon_sym_LF,
    STATE(139), 1,
      sym_line_continuation,
    ACTIONS(585), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(587), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [3474] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(140), 1,
      sym_line_continuation,
    ACTIONS(579), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(577), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3490] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(545), 1,
      anon_sym_BSLASH,
    ACTIONS(589), 1,
      anon_sym_SQUOTE,
    STATE(141), 1,
      sym_line_continuation,
    STATE(148), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(549), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3510] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(142), 1,
      sym_line_continuation,
    ACTIONS(593), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    ACTIONS(591), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3526] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(402), 1,
      aux_sym__env_key_token1,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(400), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3542] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(545), 1,
      anon_sym_BSLASH,
    ACTIONS(595), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym_line_continuation,
    STATE(146), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(549), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3562] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(486), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(490), 1,
      anon_sym_DASH_DASH,
    STATE(145), 1,
      sym_line_continuation,
    STATE(194), 1,
      aux_sym_copy_instruction_repeat1,
    STATE(287), 1,
      sym_param,
    STATE(308), 1,
      sym_cmd_instruction,
  [3584] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(545), 1,
      anon_sym_BSLASH,
    ACTIONS(597), 1,
      anon_sym_SQUOTE,
    STATE(146), 1,
      sym_line_continuation,
    STATE(148), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(549), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3604] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(514), 1,
      aux_sym_path_token1,
    ACTIONS(516), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym_expansion,
    STATE(132), 1,
      aux_sym_copy_instruction_repeat2,
    STATE(147), 1,
      sym_line_continuation,
    STATE(283), 1,
      sym_path,
  [3626] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(599), 1,
      anon_sym_BSLASH,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
    STATE(148), 2,
      sym_line_continuation,
      aux_sym_single_quoted_string_repeat1,
  [3644] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(408), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(406), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3660] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      aux_sym__env_key_token1,
    STATE(150), 1,
      sym_line_continuation,
    STATE(153), 1,
      aux_sym_env_instruction_repeat1,
    STATE(293), 1,
      sym__env_key,
    STATE(296), 1,
      sym_env_pair,
    STATE(302), 1,
      sym__spaced_env_pair,
  [3682] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(361), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(359), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3698] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      aux_sym_expose_port_token1,
    STATE(81), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(152), 1,
      sym_line_continuation,
    STATE(227), 2,
      sym_expansion,
      sym_expose_port,
  [3718] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(613), 1,
      anon_sym_LF,
    ACTIONS(615), 1,
      aux_sym__env_key_token1,
    STATE(126), 1,
      aux_sym_env_instruction_repeat1,
    STATE(153), 1,
      sym_line_continuation,
    STATE(296), 1,
      sym_env_pair,
    STATE(340), 1,
      sym__env_key,
  [3740] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(154), 1,
      sym_line_continuation,
    ACTIONS(446), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(444), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3756] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(442), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(440), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3772] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      aux_sym_image_name_token1,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(492), 3,
      anon_sym_DOLLAR,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [3787] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(157), 1,
      sym_line_continuation,
    ACTIONS(617), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3800] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(619), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(621), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_expansion,
    STATE(158), 1,
      sym_line_continuation,
    STATE(289), 1,
      sym__user_name_or_group,
  [3819] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(440), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(442), 2,
      aux_sym_path_token2,
      anon_sym_DASH_DASH,
  [3834] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(160), 1,
      sym_line_continuation,
    ACTIONS(406), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(408), 2,
      aux_sym_path_token2,
      anon_sym_DASH_DASH,
  [3849] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(623), 1,
      anon_sym_DOLLAR,
    ACTIONS(625), 1,
      aux_sym_image_alias_token1,
    STATE(82), 1,
      sym_expansion,
    STATE(161), 1,
      sym_line_continuation,
    STATE(301), 1,
      sym_image_alias,
  [3868] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(448), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(450), 2,
      aux_sym_path_token2,
      anon_sym_DASH_DASH,
  [3883] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(440), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(442), 2,
      aux_sym_from_instruction_token2,
      aux_sym_path_token2,
  [3898] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(164), 1,
      sym_line_continuation,
    ACTIONS(444), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(446), 2,
      aux_sym_from_instruction_token2,
      aux_sym_path_token2,
  [3913] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(627), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_line_continuation,
    STATE(201), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(629), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [3930] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(166), 1,
      sym_line_continuation,
    ACTIONS(359), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(361), 2,
      aux_sym_from_instruction_token2,
      aux_sym_path_token2,
  [3945] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(167), 1,
      sym_line_continuation,
    ACTIONS(448), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(450), 2,
      aux_sym_from_instruction_token2,
      aux_sym_path_token2,
  [3960] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(168), 1,
      sym_line_continuation,
    ACTIONS(406), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(408), 2,
      aux_sym_from_instruction_token2,
      aux_sym_path_token2,
  [3975] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(169), 1,
      sym_line_continuation,
    ACTIONS(440), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3988] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(170), 1,
      sym_line_continuation,
    ACTIONS(444), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4001] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(171), 1,
      sym_line_continuation,
    ACTIONS(359), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4014] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(172), 1,
      sym_line_continuation,
    ACTIONS(448), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4027] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(623), 1,
      anon_sym_DOLLAR,
    ACTIONS(625), 1,
      aux_sym_image_alias_token1,
    STATE(82), 1,
      sym_expansion,
    STATE(173), 1,
      sym_line_continuation,
    STATE(357), 1,
      sym_image_alias,
  [4046] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(631), 1,
      anon_sym_LF,
    STATE(174), 1,
      sym_line_continuation,
    ACTIONS(633), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4061] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(175), 1,
      sym_line_continuation,
    ACTIONS(406), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4074] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(440), 1,
      anon_sym_DOLLAR2,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(442), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4089] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(444), 1,
      anon_sym_DOLLAR2,
    STATE(177), 1,
      sym_line_continuation,
    ACTIONS(446), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4104] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(178), 1,
      sym_line_continuation,
    ACTIONS(635), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(637), 2,
      aux_sym_path_token2,
      anon_sym_DASH_DASH,
  [4119] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(359), 1,
      anon_sym_DOLLAR2,
    STATE(179), 1,
      sym_line_continuation,
    ACTIONS(361), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4134] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      anon_sym_DOLLAR2,
    STATE(180), 1,
      sym_line_continuation,
    ACTIONS(450), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4149] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(406), 1,
      anon_sym_DOLLAR2,
    STATE(181), 1,
      sym_line_continuation,
    ACTIONS(408), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4164] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(639), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(641), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4179] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(635), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(637), 2,
      aux_sym_from_instruction_token2,
      aux_sym_path_token2,
  [4194] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(390), 1,
      aux_sym_path_token1,
    ACTIONS(643), 1,
      anon_sym_EQ,
    STATE(184), 1,
      sym_line_continuation,
    ACTIONS(388), 2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [4211] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(185), 1,
      sym_line_continuation,
    ACTIONS(645), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4224] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(647), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4237] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(649), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4250] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(359), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(361), 2,
      aux_sym_path_token2,
      anon_sym_DASH_DASH,
  [4265] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(189), 1,
      sym_line_continuation,
    ACTIONS(444), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(446), 2,
      aux_sym_path_token2,
      anon_sym_DASH_DASH,
  [4280] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(653), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4295] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(655), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_line_continuation,
    ACTIONS(657), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4310] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(623), 1,
      anon_sym_DOLLAR,
    ACTIONS(625), 1,
      aux_sym_image_alias_token1,
    STATE(82), 1,
      sym_expansion,
    STATE(192), 1,
      sym_line_continuation,
    STATE(352), 1,
      sym_image_alias,
  [4329] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(623), 1,
      anon_sym_DOLLAR,
    ACTIONS(625), 1,
      aux_sym_image_alias_token1,
    STATE(82), 1,
      sym_expansion,
    STATE(193), 1,
      sym_line_continuation,
    STATE(337), 1,
      sym_image_alias,
  [4348] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(564), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(659), 1,
      anon_sym_DASH_DASH,
    STATE(287), 1,
      sym_param,
    STATE(194), 2,
      sym_line_continuation,
      aux_sym_copy_instruction_repeat1,
  [4365] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(635), 1,
      anon_sym_DOLLAR2,
    STATE(195), 1,
      sym_line_continuation,
    ACTIONS(637), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4380] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(514), 1,
      aux_sym_path_token1,
    ACTIONS(516), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym_expansion,
    STATE(196), 1,
      sym_line_continuation,
    STATE(275), 1,
      sym_path,
  [4399] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(662), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_line_continuation,
    ACTIONS(664), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4414] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(666), 1,
      anon_sym_LF,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(668), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4429] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(670), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      aux_sym_json_string_repeat1,
    STATE(199), 1,
      sym_line_continuation,
    ACTIONS(629), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [4446] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(200), 1,
      sym_line_continuation,
    ACTIONS(672), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4459] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(674), 1,
      anon_sym_DQUOTE,
    ACTIONS(676), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
    STATE(201), 2,
      sym_line_continuation,
      aux_sym_json_string_repeat1,
  [4474] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(679), 1,
      aux_sym_path_token1,
    ACTIONS(681), 1,
      anon_sym_DOLLAR,
    STATE(91), 1,
      sym_expansion,
    STATE(202), 1,
      sym_line_continuation,
    STATE(303), 1,
      sym_path,
  [4493] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(203), 1,
      sym_line_continuation,
    ACTIONS(683), 2,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
    ACTIONS(685), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [4508] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(687), 1,
      anon_sym_LBRACE,
    ACTIONS(689), 1,
      sym_variable,
    STATE(118), 1,
      sym__expansion_body,
    STATE(204), 1,
      sym_line_continuation,
  [4524] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(205), 1,
      sym_line_continuation,
    ACTIONS(691), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4536] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(206), 1,
      sym_line_continuation,
    ACTIONS(406), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4548] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(693), 1,
      anon_sym_LF,
    STATE(207), 1,
      sym_line_continuation,
    ACTIONS(695), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [4562] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(208), 1,
      sym_line_continuation,
    ACTIONS(448), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4574] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(697), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(699), 1,
      anon_sym_DASH_DASH,
    STATE(209), 1,
      sym_line_continuation,
    STATE(307), 1,
      sym_param,
  [4590] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(701), 1,
      anon_sym_COMMA2,
    ACTIONS(704), 1,
      anon_sym_RBRACK,
    STATE(210), 2,
      sym_line_continuation,
      aux_sym_json_string_array_repeat1,
  [4604] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(699), 1,
      anon_sym_DASH_DASH,
    ACTIONS(706), 1,
      sym__version_instruction_semver,
    STATE(211), 1,
      sym_line_continuation,
    STATE(313), 1,
      sym_param,
  [4620] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(637), 1,
      aux_sym_path_token2,
    STATE(212), 1,
      sym_line_continuation,
    ACTIONS(635), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4634] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
    ACTIONS(710), 1,
      sym_variable,
    STATE(213), 1,
      sym_line_continuation,
    STATE(254), 1,
      sym__expansion_body,
  [4650] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
    ACTIONS(710), 1,
      sym_variable,
    STATE(214), 1,
      sym_line_continuation,
    STATE(261), 1,
      sym__expansion_body,
  [4666] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(712), 1,
      aux_sym_path_token1,
    ACTIONS(714), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym_expansion,
    STATE(215), 1,
      sym_line_continuation,
  [4682] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(716), 1,
      anon_sym_LF,
    STATE(216), 1,
      sym_line_continuation,
    ACTIONS(718), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4696] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(720), 1,
      aux_sym_path_token1,
    STATE(217), 1,
      sym_line_continuation,
    ACTIONS(722), 2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [4710] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      anon_sym_LF,
    ACTIONS(726), 1,
      sym__non_newline_whitespace,
    STATE(218), 1,
      sym_line_continuation,
    STATE(233), 1,
      aux_sym_volume_instruction_repeat1,
  [4726] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(728), 1,
      anon_sym_LBRACE,
    ACTIONS(730), 1,
      sym_variable,
    STATE(219), 1,
      sym_line_continuation,
    STATE(226), 1,
      sym__expansion_body,
  [4742] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      sym_variable,
    STATE(86), 1,
      sym__expansion_body,
    STATE(220), 1,
      sym_line_continuation,
  [4758] = 5,
    ACTIONS(736), 1,
      anon_sym_LF,
    ACTIONS(738), 1,
      anon_sym_BSLASH_LF,
    STATE(26), 1,
      sym_required_line_continuation,
    STATE(221), 1,
      sym_line_continuation,
    STATE(258), 1,
      aux_sym_shell_command_repeat2,
  [4774] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(681), 1,
      anon_sym_DOLLAR,
    ACTIONS(740), 1,
      aux_sym_path_token1,
    STATE(74), 1,
      sym_expansion,
    STATE(222), 1,
      sym_line_continuation,
  [4790] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(223), 1,
      sym_line_continuation,
    ACTIONS(444), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4802] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      sym_line_continuation,
    ACTIONS(744), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [4816] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(406), 1,
      anon_sym_LF,
    STATE(225), 1,
      sym_line_continuation,
    ACTIONS(408), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4830] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      anon_sym_LF,
    STATE(226), 1,
      sym_line_continuation,
    ACTIONS(450), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4844] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(746), 1,
      anon_sym_LF,
    STATE(227), 1,
      sym_line_continuation,
    ACTIONS(748), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4858] = 5,
    ACTIONS(736), 1,
      anon_sym_LF,
    ACTIONS(738), 1,
      anon_sym_BSLASH_LF,
    STATE(26), 1,
      sym_required_line_continuation,
    STATE(228), 1,
      sym_line_continuation,
    STATE(250), 1,
      aux_sym_shell_command_repeat2,
  [4874] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_LBRACE,
    ACTIONS(752), 1,
      sym_variable,
    STATE(223), 1,
      sym__expansion_body,
    STATE(229), 1,
      sym_line_continuation,
  [4890] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_COMMA2,
    ACTIONS(756), 1,
      anon_sym_RBRACK,
    STATE(230), 1,
      sym_line_continuation,
    STATE(237), 1,
      aux_sym_json_string_array_repeat1,
  [4906] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      anon_sym_LBRACE,
    ACTIONS(760), 1,
      sym_variable,
    STATE(180), 1,
      sym__expansion_body,
    STATE(231), 1,
      sym_line_continuation,
  [4922] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(232), 1,
      sym_line_continuation,
    ACTIONS(359), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4934] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(726), 1,
      sym__non_newline_whitespace,
    ACTIONS(762), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
    STATE(256), 1,
      aux_sym_volume_instruction_repeat1,
  [4950] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(766), 1,
      sym_variable,
    STATE(170), 1,
      sym__expansion_body,
    STATE(234), 1,
      sym_line_continuation,
  [4966] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(235), 1,
      sym_line_continuation,
    ACTIONS(768), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4978] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(770), 1,
      anon_sym_LBRACE,
    ACTIONS(772), 1,
      sym_variable,
    STATE(120), 1,
      sym__expansion_body,
    STATE(236), 1,
      sym_line_continuation,
  [4994] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_COMMA2,
    ACTIONS(774), 1,
      anon_sym_RBRACK,
    STATE(210), 1,
      aux_sym_json_string_array_repeat1,
    STATE(237), 1,
      sym_line_continuation,
  [5010] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      sym_variable,
    STATE(189), 1,
      sym__expansion_body,
    STATE(238), 1,
      sym_line_continuation,
  [5026] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
    ACTIONS(782), 1,
      sym_variable,
    STATE(107), 1,
      sym__expansion_body,
    STATE(239), 1,
      sym_line_continuation,
  [5042] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      anon_sym_LF,
    STATE(240), 1,
      sym_line_continuation,
    ACTIONS(786), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [5056] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(766), 1,
      sym_variable,
    STATE(172), 1,
      sym__expansion_body,
    STATE(241), 1,
      sym_line_continuation,
  [5072] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      sym_variable,
    STATE(84), 1,
      sym__expansion_body,
    STATE(242), 1,
      sym_line_continuation,
  [5088] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      anon_sym_RBRACK,
    ACTIONS(790), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      sym_json_string,
    STATE(243), 1,
      sym_line_continuation,
  [5104] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      anon_sym_LF,
    ACTIONS(794), 1,
      anon_sym_DASH_DASH,
    STATE(244), 1,
      sym_line_continuation,
    STATE(369), 1,
      sym_param,
  [5120] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    ACTIONS(798), 1,
      sym_variable,
    STATE(164), 1,
      sym__expansion_body,
    STATE(245), 1,
      sym_line_continuation,
  [5136] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    ACTIONS(798), 1,
      sym_variable,
    STATE(167), 1,
      sym__expansion_body,
    STATE(246), 1,
      sym_line_continuation,
  [5152] = 5,
    ACTIONS(738), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(800), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_required_line_continuation,
    STATE(228), 1,
      aux_sym_shell_command_repeat2,
    STATE(247), 1,
      sym_line_continuation,
  [5168] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(440), 1,
      anon_sym_LF,
    STATE(248), 1,
      sym_line_continuation,
    ACTIONS(442), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [5182] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
    ACTIONS(804), 1,
      sym_variable,
    STATE(99), 1,
      sym__expansion_body,
    STATE(249), 1,
      sym_line_continuation,
  [5198] = 4,
    ACTIONS(806), 1,
      anon_sym_LF,
    ACTIONS(808), 1,
      anon_sym_BSLASH_LF,
    STATE(26), 1,
      sym_required_line_continuation,
    STATE(250), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [5212] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
    ACTIONS(804), 1,
      sym_variable,
    STATE(78), 1,
      sym__expansion_body,
    STATE(251), 1,
      sym_line_continuation,
  [5228] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      anon_sym_LBRACE,
    ACTIONS(760), 1,
      sym_variable,
    STATE(177), 1,
      sym__expansion_body,
    STATE(252), 1,
      sym_line_continuation,
  [5244] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(408), 1,
      aux_sym_path_token2,
    STATE(253), 1,
      sym_line_continuation,
    ACTIONS(406), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5258] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(450), 1,
      aux_sym_path_token2,
    STATE(254), 1,
      sym_line_continuation,
    ACTIONS(448), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5272] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      aux_sym_path_token2,
    STATE(255), 1,
      sym_line_continuation,
    ACTIONS(359), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5286] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(811), 1,
      anon_sym_LF,
    ACTIONS(813), 1,
      sym__non_newline_whitespace,
    STATE(256), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [5300] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(816), 1,
      anon_sym_EQ,
    STATE(257), 1,
      sym_line_continuation,
    ACTIONS(388), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5314] = 5,
    ACTIONS(738), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(818), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_required_line_continuation,
    STATE(250), 1,
      aux_sym_shell_command_repeat2,
    STATE(258), 1,
      sym_line_continuation,
  [5330] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(820), 1,
      anon_sym_LBRACE,
    ACTIONS(822), 1,
      sym_variable,
    STATE(76), 1,
      sym__expansion_body,
    STATE(259), 1,
      sym_line_continuation,
  [5346] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_LBRACE,
    ACTIONS(752), 1,
      sym_variable,
    STATE(208), 1,
      sym__expansion_body,
    STATE(260), 1,
      sym_line_continuation,
  [5362] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(446), 1,
      aux_sym_path_token2,
    STATE(261), 1,
      sym_line_continuation,
    ACTIONS(444), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5376] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(824), 1,
      anon_sym_LBRACE,
    ACTIONS(826), 1,
      sym_variable,
    STATE(113), 1,
      sym__expansion_body,
    STATE(262), 1,
      sym_line_continuation,
  [5392] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      anon_sym_DASH_DASH,
    ACTIONS(828), 1,
      anon_sym_LF,
    STATE(263), 1,
      sym_line_continuation,
    STATE(356), 1,
      sym_param,
  [5408] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(264), 1,
      sym_line_continuation,
    ACTIONS(440), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5420] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(442), 1,
      aux_sym_path_token2,
    STATE(265), 1,
      sym_line_continuation,
    ACTIONS(440), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5434] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      aux_sym_path_token1,
    STATE(266), 1,
      sym_line_continuation,
    ACTIONS(492), 2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [5448] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    ACTIONS(832), 1,
      sym_variable,
    STATE(154), 1,
      sym__expansion_body,
    STATE(267), 1,
      sym_line_continuation,
  [5464] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      sym_variable,
    STATE(162), 1,
      sym__expansion_body,
    STATE(268), 1,
      sym_line_continuation,
  [5480] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(388), 1,
      sym__version_instruction_semver,
    ACTIONS(390), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(834), 1,
      anon_sym_EQ,
    STATE(269), 1,
      sym_line_continuation,
  [5496] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(836), 1,
      anon_sym_LF,
    ACTIONS(838), 1,
      aux_sym_from_instruction_token2,
    STATE(270), 1,
      sym_line_continuation,
  [5509] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(840), 1,
      aux_sym_mount_param_param_token1,
    STATE(70), 1,
      sym_mount_param_param,
    STATE(271), 1,
      sym_line_continuation,
  [5522] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(657), 1,
      aux_sym__env_key_token1,
    STATE(272), 1,
      sym_line_continuation,
  [5535] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(842), 1,
      anon_sym_LF,
    ACTIONS(844), 1,
      sym__non_newline_whitespace,
    STATE(273), 1,
      sym_line_continuation,
  [5548] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(492), 1,
      sym__version_instruction_semver,
    ACTIONS(494), 1,
      aux_sym_arg_instruction_token2,
    STATE(274), 1,
      sym_line_continuation,
  [5561] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(275), 1,
      sym_line_continuation,
    ACTIONS(811), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [5572] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(846), 1,
      anon_sym_LF,
    ACTIONS(848), 1,
      aux_sym_from_instruction_token2,
    STATE(276), 1,
      sym_line_continuation,
  [5585] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(662), 1,
      anon_sym_LF,
    ACTIONS(664), 1,
      aux_sym__env_key_token1,
    STATE(277), 1,
      sym_line_continuation,
  [5598] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(666), 1,
      anon_sym_LF,
    ACTIONS(668), 1,
      aux_sym__env_key_token1,
    STATE(278), 1,
      sym_line_continuation,
  [5611] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(850), 1,
      anon_sym_LF,
    ACTIONS(852), 1,
      aux_sym_from_instruction_token2,
    STATE(279), 1,
      sym_line_continuation,
  [5624] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(854), 1,
      anon_sym_LF,
    ACTIONS(856), 1,
      aux_sym_from_instruction_token2,
    STATE(280), 1,
      sym_line_continuation,
  [5637] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(281), 1,
      sym_line_continuation,
    ACTIONS(492), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5648] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      aux_sym_param_token1,
    ACTIONS(860), 1,
      anon_sym_mount,
    STATE(282), 1,
      sym_line_continuation,
  [5661] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      sym__non_newline_whitespace,
    ACTIONS(862), 1,
      anon_sym_LF,
    STATE(283), 1,
      sym_line_continuation,
  [5674] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      anon_sym_LF,
    ACTIONS(653), 1,
      aux_sym__env_key_token1,
    STATE(284), 1,
      sym_line_continuation,
  [5687] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(864), 1,
      anon_sym_LF,
    ACTIONS(866), 1,
      aux_sym__env_key_token1,
    STATE(285), 1,
      sym_line_continuation,
  [5700] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(868), 1,
      anon_sym_LF,
    ACTIONS(870), 1,
      anon_sym_EQ,
    STATE(286), 1,
      sym_line_continuation,
  [5713] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(287), 1,
      sym_line_continuation,
    ACTIONS(722), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5724] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(872), 1,
      anon_sym_LF,
    ACTIONS(874), 1,
      anon_sym_EQ,
    STATE(288), 1,
      sym_line_continuation,
  [5737] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(876), 1,
      anon_sym_LF,
    ACTIONS(878), 1,
      anon_sym_COLON,
    STATE(289), 1,
      sym_line_continuation,
  [5750] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(880), 1,
      anon_sym_EQ,
    STATE(290), 1,
      sym_line_continuation,
  [5763] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(291), 1,
      sym_line_continuation,
    ACTIONS(882), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5774] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      anon_sym_DQUOTE,
    STATE(292), 1,
      sym_line_continuation,
    STATE(295), 1,
      sym_json_string,
  [5787] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(884), 1,
      anon_sym_EQ,
    ACTIONS(886), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(293), 1,
      sym_line_continuation,
  [5800] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(840), 1,
      aux_sym_mount_param_param_token1,
    STATE(33), 1,
      sym_mount_param_param,
    STATE(294), 1,
      sym_line_continuation,
  [5813] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(295), 1,
      sym_line_continuation,
    ACTIONS(704), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5824] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(888), 1,
      anon_sym_LF,
    ACTIONS(890), 1,
      aux_sym__env_key_token1,
    STATE(296), 1,
      sym_line_continuation,
  [5837] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(297), 1,
      sym_line_continuation,
    ACTIONS(892), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5848] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(894), 1,
      aux_sym_path_token1,
    ACTIONS(896), 1,
      anon_sym_DOLLAR,
    STATE(298), 1,
      sym_line_continuation,
  [5861] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(299), 1,
      sym_line_continuation,
    ACTIONS(898), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [5872] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(900), 1,
      aux_sym_mount_param_param_token1,
    STATE(300), 1,
      sym_line_continuation,
  [5882] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(902), 1,
      anon_sym_LF,
    STATE(301), 1,
      sym_line_continuation,
  [5892] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(904), 1,
      anon_sym_LF,
    STATE(302), 1,
      sym_line_continuation,
  [5902] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(906), 1,
      anon_sym_LF,
    STATE(303), 1,
      sym_line_continuation,
  [5912] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(492), 1,
      anon_sym_LF,
    STATE(304), 1,
      sym_line_continuation,
  [5922] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(908), 1,
      sym__non_newline_whitespace,
    STATE(305), 1,
      sym_line_continuation,
  [5932] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(910), 1,
      anon_sym_LF,
    STATE(306), 1,
      sym_line_continuation,
  [5942] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(912), 1,
      aux_sym_arg_instruction_token2,
    STATE(307), 1,
      sym_line_continuation,
  [5952] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(914), 1,
      anon_sym_LF,
    STATE(308), 1,
      sym_line_continuation,
  [5962] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(916), 1,
      anon_sym_LF,
    STATE(309), 1,
      sym_line_continuation,
  [5972] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(918), 1,
      anon_sym_EQ,
    STATE(310), 1,
      sym_line_continuation,
  [5982] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(920), 1,
      anon_sym_LF,
    STATE(311), 1,
      sym_line_continuation,
  [5992] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(922), 1,
      anon_sym_LF,
    STATE(312), 1,
      sym_line_continuation,
  [6002] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(924), 1,
      sym__version_instruction_semver,
    STATE(313), 1,
      sym_line_continuation,
  [6012] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(926), 1,
      anon_sym_SLASH,
    STATE(314), 1,
      sym_line_continuation,
  [6022] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(928), 1,
      anon_sym_LF,
    STATE(315), 1,
      sym_line_continuation,
  [6032] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(930), 1,
      anon_sym_LF,
    STATE(316), 1,
      sym_line_continuation,
  [6042] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(932), 1,
      anon_sym_LF,
    STATE(317), 1,
      sym_line_continuation,
  [6052] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(934), 1,
      aux_sym__expansion_body_token1,
    STATE(318), 1,
      sym_line_continuation,
  [6062] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(936), 1,
      aux_sym__anon_comment_token1,
    STATE(319), 1,
      sym_line_continuation,
  [6072] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(938), 1,
      aux_sym__expansion_body_token1,
    STATE(320), 1,
      sym_line_continuation,
  [6082] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(940), 1,
      anon_sym_EQ,
    STATE(321), 1,
      sym_line_continuation,
  [6092] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(942), 1,
      anon_sym_LF,
    STATE(322), 1,
      sym_line_continuation,
  [6102] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(944), 1,
      anon_sym_LF,
    STATE(323), 1,
      sym_line_continuation,
  [6112] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(898), 1,
      anon_sym_EQ,
    STATE(324), 1,
      sym_line_continuation,
  [6122] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(946), 1,
      aux_sym_param_token1,
    STATE(325), 1,
      sym_line_continuation,
  [6132] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(948), 1,
      anon_sym_LF,
    STATE(326), 1,
      sym_line_continuation,
  [6142] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(666), 1,
      anon_sym_EQ,
    STATE(327), 1,
      sym_line_continuation,
  [6152] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(950), 1,
      aux_sym_param_token1,
    STATE(328), 1,
      sym_line_continuation,
  [6162] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(662), 1,
      anon_sym_EQ,
    STATE(329), 1,
      sym_line_continuation,
  [6172] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(952), 1,
      anon_sym_LF,
    STATE(330), 1,
      sym_line_continuation,
  [6182] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(954), 1,
      ts_builtin_sym_end,
    STATE(331), 1,
      sym_line_continuation,
  [6192] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(956), 1,
      anon_sym_COLON_LF,
    STATE(332), 1,
      sym_line_continuation,
  [6202] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(958), 1,
      anon_sym_COLON_LF,
    STATE(333), 1,
      sym_line_continuation,
  [6212] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(960), 1,
      aux_sym_project_instruction_token2,
    STATE(334), 1,
      sym_line_continuation,
  [6222] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(962), 1,
      anon_sym_RBRACE,
    STATE(335), 1,
      sym_line_continuation,
  [6232] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(964), 1,
      aux_sym_param_token2,
    STATE(336), 1,
      sym_line_continuation,
  [6242] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(966), 1,
      anon_sym_LF,
    STATE(337), 1,
      sym_line_continuation,
  [6252] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(968), 1,
      anon_sym_LF,
    STATE(338), 1,
      sym_line_continuation,
  [6262] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(970), 1,
      aux_sym_param_token1,
    STATE(339), 1,
      sym_line_continuation,
  [6272] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(884), 1,
      anon_sym_EQ,
    STATE(340), 1,
      sym_line_continuation,
  [6282] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(972), 1,
      anon_sym_LF,
    STATE(341), 1,
      sym_line_continuation,
  [6292] = 3,
    ACTIONS(974), 1,
      anon_sym_LF,
    ACTIONS(976), 1,
      anon_sym_BSLASH_LF,
    STATE(342), 1,
      sym_line_continuation,
  [6302] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(978), 1,
      anon_sym_LF,
    STATE(343), 1,
      sym_line_continuation,
  [6312] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(980), 1,
      anon_sym_RBRACE,
    STATE(344), 1,
      sym_line_continuation,
  [6322] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(982), 1,
      aux_sym_param_token2,
    STATE(345), 1,
      sym_line_continuation,
  [6332] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(984), 1,
      anon_sym_EQ,
    STATE(346), 1,
      sym_line_continuation,
  [6342] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(986), 1,
      anon_sym_LF,
    STATE(347), 1,
      sym_line_continuation,
  [6352] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(988), 1,
      aux_sym_param_token1,
    STATE(348), 1,
      sym_line_continuation,
  [6362] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
    STATE(349), 1,
      sym_line_continuation,
  [6372] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(992), 1,
      aux_sym_param_token2,
    STATE(350), 1,
      sym_line_continuation,
  [6382] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(994), 1,
      anon_sym_LF,
    STATE(351), 1,
      sym_line_continuation,
  [6392] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(996), 1,
      anon_sym_LF,
    STATE(352), 1,
      sym_line_continuation,
  [6402] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(998), 1,
      aux_sym_param_token1,
    STATE(353), 1,
      sym_line_continuation,
  [6412] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1000), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      sym_line_continuation,
  [6422] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1002), 1,
      aux_sym_param_token2,
    STATE(355), 1,
      sym_line_continuation,
  [6432] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1004), 1,
      anon_sym_LF,
    STATE(356), 1,
      sym_line_continuation,
  [6442] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1006), 1,
      anon_sym_LF,
    STATE(357), 1,
      sym_line_continuation,
  [6452] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1008), 1,
      anon_sym_RBRACE,
    STATE(358), 1,
      sym_line_continuation,
  [6462] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1010), 1,
      aux_sym_param_token2,
    STATE(359), 1,
      sym_line_continuation,
  [6472] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1012), 1,
      anon_sym_LF,
    STATE(360), 1,
      sym_line_continuation,
  [6482] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1014), 1,
      aux_sym_param_token2,
    STATE(361), 1,
      sym_line_continuation,
  [6492] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1016), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      sym_line_continuation,
  [6502] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1018), 1,
      anon_sym_LF,
    STATE(363), 1,
      sym_line_continuation,
  [6512] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1020), 1,
      anon_sym_RBRACE,
    STATE(364), 1,
      sym_line_continuation,
  [6522] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      sym_line_continuation,
  [6532] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1024), 1,
      anon_sym_LF,
    STATE(366), 1,
      sym_line_continuation,
  [6542] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      anon_sym_EQ,
    STATE(367), 1,
      sym_line_continuation,
  [6552] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      sym_line_continuation,
  [6562] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(828), 1,
      anon_sym_LF,
    STATE(369), 1,
      sym_line_continuation,
  [6572] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1028), 1,
      anon_sym_RBRACE,
    STATE(370), 1,
      sym_line_continuation,
  [6582] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(655), 1,
      anon_sym_EQ,
    STATE(371), 1,
      sym_line_continuation,
  [6592] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1030), 1,
      anon_sym_RBRACE,
    STATE(372), 1,
      sym_line_continuation,
  [6602] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1032), 1,
      aux_sym_project_instruction_token2,
    STATE(373), 1,
      sym_line_continuation,
  [6612] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1034), 1,
      anon_sym_RBRACE,
    STATE(374), 1,
      sym_line_continuation,
  [6622] = 3,
    ACTIONS(806), 1,
      anon_sym_LF,
    ACTIONS(1036), 1,
      anon_sym_BSLASH_LF,
    STATE(375), 1,
      sym_line_continuation,
  [6632] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1038), 1,
      anon_sym_RBRACE,
    STATE(376), 1,
      sym_line_continuation,
  [6642] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1040), 1,
      anon_sym_LF,
    STATE(377), 1,
      sym_line_continuation,
  [6652] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1042), 1,
      anon_sym_RBRACE,
    STATE(378), 1,
      sym_line_continuation,
  [6662] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      sym_line_continuation,
  [6672] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1046), 1,
      anon_sym_LF,
    STATE(380), 1,
      sym_line_continuation,
  [6682] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1048), 1,
      aux_sym__expansion_body_token1,
    STATE(381), 1,
      sym_line_continuation,
  [6692] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1050), 1,
      aux_sym__expansion_body_token1,
    STATE(382), 1,
      sym_line_continuation,
  [6702] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1052), 1,
      aux_sym__expansion_body_token1,
    STATE(383), 1,
      sym_line_continuation,
  [6712] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1054), 1,
      aux_sym__expansion_body_token1,
    STATE(384), 1,
      sym_line_continuation,
  [6722] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1056), 1,
      aux_sym__expansion_body_token1,
    STATE(385), 1,
      sym_line_continuation,
  [6732] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1058), 1,
      aux_sym__expansion_body_token1,
    STATE(386), 1,
      sym_line_continuation,
  [6742] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1060), 1,
      aux_sym__expansion_body_token1,
    STATE(387), 1,
      sym_line_continuation,
  [6752] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1062), 1,
      aux_sym__expansion_body_token1,
    STATE(388), 1,
      sym_line_continuation,
  [6762] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1064), 1,
      aux_sym__expansion_body_token1,
    STATE(389), 1,
      sym_line_continuation,
  [6772] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1066), 1,
      aux_sym__expansion_body_token1,
    STATE(390), 1,
      sym_line_continuation,
  [6782] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1068), 1,
      aux_sym__expansion_body_token1,
    STATE(391), 1,
      sym_line_continuation,
  [6792] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1070), 1,
      aux_sym__expansion_body_token1,
    STATE(392), 1,
      sym_line_continuation,
  [6802] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1072), 1,
      aux_sym__expansion_body_token1,
    STATE(393), 1,
      sym_line_continuation,
  [6812] = 1,
    ACTIONS(1074), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 224,
  [SMALL_STATE(6)] = 273,
  [SMALL_STATE(7)] = 322,
  [SMALL_STATE(8)] = 362,
  [SMALL_STATE(9)] = 399,
  [SMALL_STATE(10)] = 436,
  [SMALL_STATE(11)] = 470,
  [SMALL_STATE(12)] = 504,
  [SMALL_STATE(13)] = 538,
  [SMALL_STATE(14)] = 572,
  [SMALL_STATE(15)] = 605,
  [SMALL_STATE(16)] = 638,
  [SMALL_STATE(17)] = 669,
  [SMALL_STATE(18)] = 702,
  [SMALL_STATE(19)] = 731,
  [SMALL_STATE(20)] = 761,
  [SMALL_STATE(21)] = 791,
  [SMALL_STATE(22)] = 821,
  [SMALL_STATE(23)] = 849,
  [SMALL_STATE(24)] = 877,
  [SMALL_STATE(25)] = 907,
  [SMALL_STATE(26)] = 937,
  [SMALL_STATE(27)] = 967,
  [SMALL_STATE(28)] = 991,
  [SMALL_STATE(29)] = 1021,
  [SMALL_STATE(30)] = 1050,
  [SMALL_STATE(31)] = 1077,
  [SMALL_STATE(32)] = 1104,
  [SMALL_STATE(33)] = 1131,
  [SMALL_STATE(34)] = 1154,
  [SMALL_STATE(35)] = 1183,
  [SMALL_STATE(36)] = 1212,
  [SMALL_STATE(37)] = 1239,
  [SMALL_STATE(38)] = 1260,
  [SMALL_STATE(39)] = 1289,
  [SMALL_STATE(40)] = 1318,
  [SMALL_STATE(41)] = 1347,
  [SMALL_STATE(42)] = 1374,
  [SMALL_STATE(43)] = 1403,
  [SMALL_STATE(44)] = 1426,
  [SMALL_STATE(45)] = 1455,
  [SMALL_STATE(46)] = 1484,
  [SMALL_STATE(47)] = 1513,
  [SMALL_STATE(48)] = 1544,
  [SMALL_STATE(49)] = 1571,
  [SMALL_STATE(50)] = 1600,
  [SMALL_STATE(51)] = 1629,
  [SMALL_STATE(52)] = 1656,
  [SMALL_STATE(53)] = 1685,
  [SMALL_STATE(54)] = 1712,
  [SMALL_STATE(55)] = 1739,
  [SMALL_STATE(56)] = 1766,
  [SMALL_STATE(57)] = 1797,
  [SMALL_STATE(58)] = 1821,
  [SMALL_STATE(59)] = 1839,
  [SMALL_STATE(60)] = 1865,
  [SMALL_STATE(61)] = 1891,
  [SMALL_STATE(62)] = 1913,
  [SMALL_STATE(63)] = 1941,
  [SMALL_STATE(64)] = 1959,
  [SMALL_STATE(65)] = 1979,
  [SMALL_STATE(66)] = 2007,
  [SMALL_STATE(67)] = 2025,
  [SMALL_STATE(68)] = 2051,
  [SMALL_STATE(69)] = 2069,
  [SMALL_STATE(70)] = 2095,
  [SMALL_STATE(71)] = 2113,
  [SMALL_STATE(72)] = 2141,
  [SMALL_STATE(73)] = 2167,
  [SMALL_STATE(74)] = 2193,
  [SMALL_STATE(75)] = 2221,
  [SMALL_STATE(76)] = 2239,
  [SMALL_STATE(77)] = 2257,
  [SMALL_STATE(78)] = 2285,
  [SMALL_STATE(79)] = 2302,
  [SMALL_STATE(80)] = 2327,
  [SMALL_STATE(81)] = 2352,
  [SMALL_STATE(82)] = 2375,
  [SMALL_STATE(83)] = 2400,
  [SMALL_STATE(84)] = 2425,
  [SMALL_STATE(85)] = 2442,
  [SMALL_STATE(86)] = 2459,
  [SMALL_STATE(87)] = 2476,
  [SMALL_STATE(88)] = 2501,
  [SMALL_STATE(89)] = 2518,
  [SMALL_STATE(90)] = 2535,
  [SMALL_STATE(91)] = 2560,
  [SMALL_STATE(92)] = 2585,
  [SMALL_STATE(93)] = 2610,
  [SMALL_STATE(94)] = 2627,
  [SMALL_STATE(95)] = 2652,
  [SMALL_STATE(96)] = 2673,
  [SMALL_STATE(97)] = 2690,
  [SMALL_STATE(98)] = 2713,
  [SMALL_STATE(99)] = 2730,
  [SMALL_STATE(100)] = 2747,
  [SMALL_STATE(101)] = 2764,
  [SMALL_STATE(102)] = 2789,
  [SMALL_STATE(103)] = 2812,
  [SMALL_STATE(104)] = 2829,
  [SMALL_STATE(105)] = 2846,
  [SMALL_STATE(106)] = 2871,
  [SMALL_STATE(107)] = 2888,
  [SMALL_STATE(108)] = 2904,
  [SMALL_STATE(109)] = 2920,
  [SMALL_STATE(110)] = 2936,
  [SMALL_STATE(111)] = 2952,
  [SMALL_STATE(112)] = 2968,
  [SMALL_STATE(113)] = 2984,
  [SMALL_STATE(114)] = 3000,
  [SMALL_STATE(115)] = 3016,
  [SMALL_STATE(116)] = 3032,
  [SMALL_STATE(117)] = 3050,
  [SMALL_STATE(118)] = 3066,
  [SMALL_STATE(119)] = 3082,
  [SMALL_STATE(120)] = 3102,
  [SMALL_STATE(121)] = 3118,
  [SMALL_STATE(122)] = 3134,
  [SMALL_STATE(123)] = 3154,
  [SMALL_STATE(124)] = 3176,
  [SMALL_STATE(125)] = 3198,
  [SMALL_STATE(126)] = 3214,
  [SMALL_STATE(127)] = 3234,
  [SMALL_STATE(128)] = 3250,
  [SMALL_STATE(129)] = 3268,
  [SMALL_STATE(130)] = 3284,
  [SMALL_STATE(131)] = 3304,
  [SMALL_STATE(132)] = 3326,
  [SMALL_STATE(133)] = 3346,
  [SMALL_STATE(134)] = 3362,
  [SMALL_STATE(135)] = 3378,
  [SMALL_STATE(136)] = 3398,
  [SMALL_STATE(137)] = 3414,
  [SMALL_STATE(138)] = 3436,
  [SMALL_STATE(139)] = 3456,
  [SMALL_STATE(140)] = 3474,
  [SMALL_STATE(141)] = 3490,
  [SMALL_STATE(142)] = 3510,
  [SMALL_STATE(143)] = 3526,
  [SMALL_STATE(144)] = 3542,
  [SMALL_STATE(145)] = 3562,
  [SMALL_STATE(146)] = 3584,
  [SMALL_STATE(147)] = 3604,
  [SMALL_STATE(148)] = 3626,
  [SMALL_STATE(149)] = 3644,
  [SMALL_STATE(150)] = 3660,
  [SMALL_STATE(151)] = 3682,
  [SMALL_STATE(152)] = 3698,
  [SMALL_STATE(153)] = 3718,
  [SMALL_STATE(154)] = 3740,
  [SMALL_STATE(155)] = 3756,
  [SMALL_STATE(156)] = 3772,
  [SMALL_STATE(157)] = 3787,
  [SMALL_STATE(158)] = 3800,
  [SMALL_STATE(159)] = 3819,
  [SMALL_STATE(160)] = 3834,
  [SMALL_STATE(161)] = 3849,
  [SMALL_STATE(162)] = 3868,
  [SMALL_STATE(163)] = 3883,
  [SMALL_STATE(164)] = 3898,
  [SMALL_STATE(165)] = 3913,
  [SMALL_STATE(166)] = 3930,
  [SMALL_STATE(167)] = 3945,
  [SMALL_STATE(168)] = 3960,
  [SMALL_STATE(169)] = 3975,
  [SMALL_STATE(170)] = 3988,
  [SMALL_STATE(171)] = 4001,
  [SMALL_STATE(172)] = 4014,
  [SMALL_STATE(173)] = 4027,
  [SMALL_STATE(174)] = 4046,
  [SMALL_STATE(175)] = 4061,
  [SMALL_STATE(176)] = 4074,
  [SMALL_STATE(177)] = 4089,
  [SMALL_STATE(178)] = 4104,
  [SMALL_STATE(179)] = 4119,
  [SMALL_STATE(180)] = 4134,
  [SMALL_STATE(181)] = 4149,
  [SMALL_STATE(182)] = 4164,
  [SMALL_STATE(183)] = 4179,
  [SMALL_STATE(184)] = 4194,
  [SMALL_STATE(185)] = 4211,
  [SMALL_STATE(186)] = 4224,
  [SMALL_STATE(187)] = 4237,
  [SMALL_STATE(188)] = 4250,
  [SMALL_STATE(189)] = 4265,
  [SMALL_STATE(190)] = 4280,
  [SMALL_STATE(191)] = 4295,
  [SMALL_STATE(192)] = 4310,
  [SMALL_STATE(193)] = 4329,
  [SMALL_STATE(194)] = 4348,
  [SMALL_STATE(195)] = 4365,
  [SMALL_STATE(196)] = 4380,
  [SMALL_STATE(197)] = 4399,
  [SMALL_STATE(198)] = 4414,
  [SMALL_STATE(199)] = 4429,
  [SMALL_STATE(200)] = 4446,
  [SMALL_STATE(201)] = 4459,
  [SMALL_STATE(202)] = 4474,
  [SMALL_STATE(203)] = 4493,
  [SMALL_STATE(204)] = 4508,
  [SMALL_STATE(205)] = 4524,
  [SMALL_STATE(206)] = 4536,
  [SMALL_STATE(207)] = 4548,
  [SMALL_STATE(208)] = 4562,
  [SMALL_STATE(209)] = 4574,
  [SMALL_STATE(210)] = 4590,
  [SMALL_STATE(211)] = 4604,
  [SMALL_STATE(212)] = 4620,
  [SMALL_STATE(213)] = 4634,
  [SMALL_STATE(214)] = 4650,
  [SMALL_STATE(215)] = 4666,
  [SMALL_STATE(216)] = 4682,
  [SMALL_STATE(217)] = 4696,
  [SMALL_STATE(218)] = 4710,
  [SMALL_STATE(219)] = 4726,
  [SMALL_STATE(220)] = 4742,
  [SMALL_STATE(221)] = 4758,
  [SMALL_STATE(222)] = 4774,
  [SMALL_STATE(223)] = 4790,
  [SMALL_STATE(224)] = 4802,
  [SMALL_STATE(225)] = 4816,
  [SMALL_STATE(226)] = 4830,
  [SMALL_STATE(227)] = 4844,
  [SMALL_STATE(228)] = 4858,
  [SMALL_STATE(229)] = 4874,
  [SMALL_STATE(230)] = 4890,
  [SMALL_STATE(231)] = 4906,
  [SMALL_STATE(232)] = 4922,
  [SMALL_STATE(233)] = 4934,
  [SMALL_STATE(234)] = 4950,
  [SMALL_STATE(235)] = 4966,
  [SMALL_STATE(236)] = 4978,
  [SMALL_STATE(237)] = 4994,
  [SMALL_STATE(238)] = 5010,
  [SMALL_STATE(239)] = 5026,
  [SMALL_STATE(240)] = 5042,
  [SMALL_STATE(241)] = 5056,
  [SMALL_STATE(242)] = 5072,
  [SMALL_STATE(243)] = 5088,
  [SMALL_STATE(244)] = 5104,
  [SMALL_STATE(245)] = 5120,
  [SMALL_STATE(246)] = 5136,
  [SMALL_STATE(247)] = 5152,
  [SMALL_STATE(248)] = 5168,
  [SMALL_STATE(249)] = 5182,
  [SMALL_STATE(250)] = 5198,
  [SMALL_STATE(251)] = 5212,
  [SMALL_STATE(252)] = 5228,
  [SMALL_STATE(253)] = 5244,
  [SMALL_STATE(254)] = 5258,
  [SMALL_STATE(255)] = 5272,
  [SMALL_STATE(256)] = 5286,
  [SMALL_STATE(257)] = 5300,
  [SMALL_STATE(258)] = 5314,
  [SMALL_STATE(259)] = 5330,
  [SMALL_STATE(260)] = 5346,
  [SMALL_STATE(261)] = 5362,
  [SMALL_STATE(262)] = 5376,
  [SMALL_STATE(263)] = 5392,
  [SMALL_STATE(264)] = 5408,
  [SMALL_STATE(265)] = 5420,
  [SMALL_STATE(266)] = 5434,
  [SMALL_STATE(267)] = 5448,
  [SMALL_STATE(268)] = 5464,
  [SMALL_STATE(269)] = 5480,
  [SMALL_STATE(270)] = 5496,
  [SMALL_STATE(271)] = 5509,
  [SMALL_STATE(272)] = 5522,
  [SMALL_STATE(273)] = 5535,
  [SMALL_STATE(274)] = 5548,
  [SMALL_STATE(275)] = 5561,
  [SMALL_STATE(276)] = 5572,
  [SMALL_STATE(277)] = 5585,
  [SMALL_STATE(278)] = 5598,
  [SMALL_STATE(279)] = 5611,
  [SMALL_STATE(280)] = 5624,
  [SMALL_STATE(281)] = 5637,
  [SMALL_STATE(282)] = 5648,
  [SMALL_STATE(283)] = 5661,
  [SMALL_STATE(284)] = 5674,
  [SMALL_STATE(285)] = 5687,
  [SMALL_STATE(286)] = 5700,
  [SMALL_STATE(287)] = 5713,
  [SMALL_STATE(288)] = 5724,
  [SMALL_STATE(289)] = 5737,
  [SMALL_STATE(290)] = 5750,
  [SMALL_STATE(291)] = 5763,
  [SMALL_STATE(292)] = 5774,
  [SMALL_STATE(293)] = 5787,
  [SMALL_STATE(294)] = 5800,
  [SMALL_STATE(295)] = 5813,
  [SMALL_STATE(296)] = 5824,
  [SMALL_STATE(297)] = 5837,
  [SMALL_STATE(298)] = 5848,
  [SMALL_STATE(299)] = 5861,
  [SMALL_STATE(300)] = 5872,
  [SMALL_STATE(301)] = 5882,
  [SMALL_STATE(302)] = 5892,
  [SMALL_STATE(303)] = 5902,
  [SMALL_STATE(304)] = 5912,
  [SMALL_STATE(305)] = 5922,
  [SMALL_STATE(306)] = 5932,
  [SMALL_STATE(307)] = 5942,
  [SMALL_STATE(308)] = 5952,
  [SMALL_STATE(309)] = 5962,
  [SMALL_STATE(310)] = 5972,
  [SMALL_STATE(311)] = 5982,
  [SMALL_STATE(312)] = 5992,
  [SMALL_STATE(313)] = 6002,
  [SMALL_STATE(314)] = 6012,
  [SMALL_STATE(315)] = 6022,
  [SMALL_STATE(316)] = 6032,
  [SMALL_STATE(317)] = 6042,
  [SMALL_STATE(318)] = 6052,
  [SMALL_STATE(319)] = 6062,
  [SMALL_STATE(320)] = 6072,
  [SMALL_STATE(321)] = 6082,
  [SMALL_STATE(322)] = 6092,
  [SMALL_STATE(323)] = 6102,
  [SMALL_STATE(324)] = 6112,
  [SMALL_STATE(325)] = 6122,
  [SMALL_STATE(326)] = 6132,
  [SMALL_STATE(327)] = 6142,
  [SMALL_STATE(328)] = 6152,
  [SMALL_STATE(329)] = 6162,
  [SMALL_STATE(330)] = 6172,
  [SMALL_STATE(331)] = 6182,
  [SMALL_STATE(332)] = 6192,
  [SMALL_STATE(333)] = 6202,
  [SMALL_STATE(334)] = 6212,
  [SMALL_STATE(335)] = 6222,
  [SMALL_STATE(336)] = 6232,
  [SMALL_STATE(337)] = 6242,
  [SMALL_STATE(338)] = 6252,
  [SMALL_STATE(339)] = 6262,
  [SMALL_STATE(340)] = 6272,
  [SMALL_STATE(341)] = 6282,
  [SMALL_STATE(342)] = 6292,
  [SMALL_STATE(343)] = 6302,
  [SMALL_STATE(344)] = 6312,
  [SMALL_STATE(345)] = 6322,
  [SMALL_STATE(346)] = 6332,
  [SMALL_STATE(347)] = 6342,
  [SMALL_STATE(348)] = 6352,
  [SMALL_STATE(349)] = 6362,
  [SMALL_STATE(350)] = 6372,
  [SMALL_STATE(351)] = 6382,
  [SMALL_STATE(352)] = 6392,
  [SMALL_STATE(353)] = 6402,
  [SMALL_STATE(354)] = 6412,
  [SMALL_STATE(355)] = 6422,
  [SMALL_STATE(356)] = 6432,
  [SMALL_STATE(357)] = 6442,
  [SMALL_STATE(358)] = 6452,
  [SMALL_STATE(359)] = 6462,
  [SMALL_STATE(360)] = 6472,
  [SMALL_STATE(361)] = 6482,
  [SMALL_STATE(362)] = 6492,
  [SMALL_STATE(363)] = 6502,
  [SMALL_STATE(364)] = 6512,
  [SMALL_STATE(365)] = 6522,
  [SMALL_STATE(366)] = 6532,
  [SMALL_STATE(367)] = 6542,
  [SMALL_STATE(368)] = 6552,
  [SMALL_STATE(369)] = 6562,
  [SMALL_STATE(370)] = 6572,
  [SMALL_STATE(371)] = 6582,
  [SMALL_STATE(372)] = 6592,
  [SMALL_STATE(373)] = 6602,
  [SMALL_STATE(374)] = 6612,
  [SMALL_STATE(375)] = 6622,
  [SMALL_STATE(376)] = 6632,
  [SMALL_STATE(377)] = 6642,
  [SMALL_STATE(378)] = 6652,
  [SMALL_STATE(379)] = 6662,
  [SMALL_STATE(380)] = 6672,
  [SMALL_STATE(381)] = 6682,
  [SMALL_STATE(382)] = 6692,
  [SMALL_STATE(383)] = 6702,
  [SMALL_STATE(384)] = 6712,
  [SMALL_STATE(385)] = 6722,
  [SMALL_STATE(386)] = 6732,
  [SMALL_STATE(387)] = 6742,
  [SMALL_STATE(388)] = 6752,
  [SMALL_STATE(389)] = 6762,
  [SMALL_STATE(390)] = 6772,
  [SMALL_STATE(391)] = 6782,
  [SMALL_STATE(392)] = 6792,
  [SMALL_STATE(393)] = 6802,
  [SMALL_STATE(394)] = 6812,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(341),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(334),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(333),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(332),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(259),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(66),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(249),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(104),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(242),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(88),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(282),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(310),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(46),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(138),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 20),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 20),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(262),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(142),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(271),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(186),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(234),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 24),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 24),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(267),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(140),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(204),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(115),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(115),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(236),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(136),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(239),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(143),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(195),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(252),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(319),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 16),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 2, .production_id = 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_earthfile_local_path, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_earthfile_local_path, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(186),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(234),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_earthfile_local_path, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_earthfile_local_path, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(178),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(238),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(183),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(245),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 20),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 20),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(219),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(139),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(229),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(235),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(212),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(214),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(112),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 8),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 8),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(324),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_instruction_repeat1, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat1, 2), SHIFT_REPEAT(328),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_instruction_repeat2, 2), SHIFT_REPEAT(105),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat2, 2), SHIFT_REPEAT(213),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(203),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(203),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 14),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 14),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat1, 2), SHIFT_REPEAT(348),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(224),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 13),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 13),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2), SHIFT_REPEAT(292),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_instruction_repeat1, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat1, 1),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 9),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 9),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_instruction, 2),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [808] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(200),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [813] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(196),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_instruction, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_instruction, 3, .production_id = 11),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_instruction, 2, .production_id = 5),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 15),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 15),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 10),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_instruction_repeat2, 2),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat2, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 21),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_header, 2, .production_id = 6),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 2, .production_id = 7),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [954] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_instruction, 5, .production_id = 23),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 22),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_instruction, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 12),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_instruction, 4),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_instruction, 4, .production_id = 19),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_instruction, 4, .production_id = 18),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 17),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 15),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_instruction, 3),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
