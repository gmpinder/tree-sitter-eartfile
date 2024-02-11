#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 410
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 168
#define ALIAS_COUNT 0
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 20

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
  aux_sym_build_arg_token1 = 44,
  anon_sym_mount = 45,
  anon_sym_COMMA = 46,
  aux_sym_mount_param_param_token1 = 47,
  aux_sym_image_alias_token1 = 48,
  aux_sym_image_alias_token2 = 49,
  aux_sym_shell_fragment_token1 = 50,
  aux_sym_shell_fragment_token2 = 51,
  aux_sym_shell_fragment_token3 = 52,
  anon_sym_BSLASH_LF = 53,
  anon_sym_POUND = 54,
  aux_sym__anon_comment_token1 = 55,
  anon_sym_LBRACK = 56,
  anon_sym_COMMA2 = 57,
  anon_sym_RBRACK = 58,
  anon_sym_DQUOTE = 59,
  aux_sym_json_string_token1 = 60,
  sym_json_escape_sequence = 61,
  aux_sym_double_quoted_string_token1 = 62,
  anon_sym_BSLASH = 63,
  anon_sym_SQUOTE = 64,
  aux_sym_single_quoted_string_token1 = 65,
  aux_sym_unquoted_string_token1 = 66,
  anon_sym_BSLASH2 = 67,
  sym_double_quoted_escape_sequence = 68,
  sym_single_quoted_escape_sequence = 69,
  sym__non_newline_whitespace = 70,
  sym_comment = 71,
  aux_sym_version_instruction_token1 = 72,
  sym__version_instruction_semver = 73,
  aux_sym_project_instruction_token1 = 74,
  aux_sym_project_instruction_token2 = 75,
  anon_sym_SLASH = 76,
  aux_sym_import_instruction_token1 = 77,
  anon_sym_PLUS = 78,
  aux_sym_target_token1 = 79,
  anon_sym_PLUS2 = 80,
  anon_sym_DOT_SLASH = 81,
  anon_sym_DOT_DOT_SLASH = 82,
  aux_sym_earthfile_local_path_token1 = 83,
  aux_sym_earthfile_local_path_token2 = 84,
  aux_sym_build_instruction_token1 = 85,
  sym_source_file = 86,
  sym__instruction = 87,
  sym_from_instruction = 88,
  sym_run_instruction = 89,
  sym_cmd_instruction = 90,
  sym_label_instruction = 91,
  sym_expose_instruction = 92,
  sym_env_instruction = 93,
  sym_copy_instruction = 94,
  sym_entrypoint_instruction = 95,
  sym_volume_instruction = 96,
  sym_user_instruction = 97,
  sym__user_name_or_group = 98,
  aux_sym__immediate_user_name_or_group = 99,
  sym__immediate_user_name_or_group_fragment = 100,
  sym_workdir_instruction = 101,
  sym_arg_instruction = 102,
  sym_healthcheck_instruction = 103,
  sym_path = 104,
  sym_expansion = 105,
  sym__immediate_expansion = 106,
  sym__imm_expansion = 107,
  sym__expansion_body = 108,
  sym_env_pair = 109,
  sym__spaced_env_pair = 110,
  sym__env_key = 111,
  sym_expose_port = 112,
  sym_label_pair = 113,
  sym_image_spec = 114,
  sym_image_name = 115,
  sym_image_tag = 116,
  sym_image_digest = 117,
  sym_param = 118,
  sym_build_arg = 119,
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
  sym_earthfile_local_path = 139,
  sym_earthfile_ref = 140,
  sym_build_instruction = 141,
  aux_sym_source_file_repeat1 = 142,
  aux_sym_from_instruction_repeat1 = 143,
  aux_sym_from_instruction_repeat2 = 144,
  aux_sym_run_instruction_repeat1 = 145,
  aux_sym_label_instruction_repeat1 = 146,
  aux_sym_expose_instruction_repeat1 = 147,
  aux_sym_env_instruction_repeat1 = 148,
  aux_sym_copy_instruction_repeat1 = 149,
  aux_sym_volume_instruction_repeat1 = 150,
  aux_sym__user_name_or_group_repeat1 = 151,
  aux_sym_path_repeat1 = 152,
  aux_sym_image_name_repeat1 = 153,
  aux_sym_image_tag_repeat1 = 154,
  aux_sym_image_digest_repeat1 = 155,
  aux_sym_mount_param_repeat1 = 156,
  aux_sym_image_alias_repeat1 = 157,
  aux_sym_shell_command_repeat1 = 158,
  aux_sym_shell_command_repeat2 = 159,
  aux_sym_shell_fragment_repeat1 = 160,
  aux_sym_json_string_array_repeat1 = 161,
  aux_sym_json_string_repeat1 = 162,
  aux_sym_double_quoted_string_repeat1 = 163,
  aux_sym_single_quoted_string_repeat1 = 164,
  aux_sym_unquoted_string_repeat1 = 165,
  aux_sym_earthfile_local_path_repeat1 = 166,
  aux_sym_earthfile_local_path_repeat2 = 167,
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
  [aux_sym_build_arg_token1] = "build_arg_token1",
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
  [sym_build_arg] = "build_arg",
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
  [sym_earthfile_local_path] = "earthfile_local_path",
  [sym_earthfile_ref] = "earthfile_ref",
  [sym_build_instruction] = "build_instruction",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_from_instruction_repeat1] = "from_instruction_repeat1",
  [aux_sym_from_instruction_repeat2] = "from_instruction_repeat2",
  [aux_sym_run_instruction_repeat1] = "run_instruction_repeat1",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_copy_instruction_repeat1] = "copy_instruction_repeat1",
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
  [aux_sym_build_arg_token1] = aux_sym_build_arg_token1,
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
  [sym_build_arg] = sym_build_arg,
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
  [sym_earthfile_local_path] = sym_earthfile_local_path,
  [sym_earthfile_ref] = sym_earthfile_ref,
  [sym_build_instruction] = sym_build_instruction,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_from_instruction_repeat1] = aux_sym_from_instruction_repeat1,
  [aux_sym_from_instruction_repeat2] = aux_sym_from_instruction_repeat2,
  [aux_sym_run_instruction_repeat1] = aux_sym_run_instruction_repeat1,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_copy_instruction_repeat1] = aux_sym_copy_instruction_repeat1,
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
  [aux_sym_build_arg_token1] = {
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
  [sym_build_arg] = {
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
  [aux_sym_from_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_instruction_repeat2] = {
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
  field_group = 4,
  field_key = 5,
  field_name = 6,
  field_org = 7,
  field_project = 8,
  field_tag = 9,
  field_user = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_digest] = "digest",
  [field_group] = "group",
  [field_key] = "key",
  [field_name] = "name",
  [field_org] = "org",
  [field_project] = "project",
  [field_tag] = "tag",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 1},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 1},
  [19] = {.index = 30, .length = 3},
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
    {field_name, 0},
    {field_tag, 1},
  [7] =
    {field_digest, 1},
    {field_name, 0},
  [9] =
    {field_name, 2},
  [10] =
    {field_as, 3},
  [11] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [14] =
    {field_key, 0},
    {field_value, 2},
  [16] =
    {field_name, 0},
    {field_value, 2},
  [18] =
    {field_group, 3},
    {field_user, 1},
  [20] =
    {field_default, 3},
    {field_name, 1},
  [22] =
    {field_org, 1},
    {field_project, 3},
  [24] =
    {field_name, 1},
    {field_value, 3},
  [26] =
    {field_as, 4},
  [27] =
    {field_default, 4},
    {field_name, 2},
  [29] =
    {field_as, 5},
  [30] =
    {field_name, 1},
    {field_value, 3},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [12] = {
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 23,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 21,
  [48] = 48,
  [49] = 49,
  [50] = 42,
  [51] = 51,
  [52] = 42,
  [53] = 53,
  [54] = 35,
  [55] = 55,
  [56] = 35,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 45,
  [63] = 63,
  [64] = 37,
  [65] = 65,
  [66] = 66,
  [67] = 59,
  [68] = 14,
  [69] = 69,
  [70] = 25,
  [71] = 71,
  [72] = 17,
  [73] = 43,
  [74] = 26,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 24,
  [81] = 76,
  [82] = 82,
  [83] = 15,
  [84] = 84,
  [85] = 59,
  [86] = 86,
  [87] = 87,
  [88] = 69,
  [89] = 89,
  [90] = 90,
  [91] = 43,
  [92] = 32,
  [93] = 93,
  [94] = 82,
  [95] = 95,
  [96] = 37,
  [97] = 84,
  [98] = 98,
  [99] = 84,
  [100] = 45,
  [101] = 82,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 69,
  [106] = 106,
  [107] = 87,
  [108] = 108,
  [109] = 109,
  [110] = 59,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 117,
  [120] = 120,
  [121] = 45,
  [122] = 43,
  [123] = 123,
  [124] = 124,
  [125] = 120,
  [126] = 126,
  [127] = 45,
  [128] = 59,
  [129] = 118,
  [130] = 130,
  [131] = 37,
  [132] = 43,
  [133] = 37,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 117,
  [138] = 58,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 45,
  [147] = 59,
  [148] = 118,
  [149] = 37,
  [150] = 43,
  [151] = 151,
  [152] = 79,
  [153] = 153,
  [154] = 154,
  [155] = 108,
  [156] = 156,
  [157] = 157,
  [158] = 32,
  [159] = 45,
  [160] = 59,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 43,
  [165] = 165,
  [166] = 166,
  [167] = 37,
  [168] = 168,
  [169] = 59,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 37,
  [175] = 32,
  [176] = 176,
  [177] = 43,
  [178] = 45,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 45,
  [183] = 38,
  [184] = 184,
  [185] = 59,
  [186] = 37,
  [187] = 76,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 43,
  [192] = 37,
  [193] = 32,
  [194] = 59,
  [195] = 45,
  [196] = 58,
  [197] = 43,
  [198] = 45,
  [199] = 199,
  [200] = 200,
  [201] = 43,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 32,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 37,
  [212] = 59,
  [213] = 213,
  [214] = 45,
  [215] = 45,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 218,
  [220] = 218,
  [221] = 221,
  [222] = 218,
  [223] = 223,
  [224] = 218,
  [225] = 43,
  [226] = 32,
  [227] = 223,
  [228] = 228,
  [229] = 218,
  [230] = 223,
  [231] = 218,
  [232] = 232,
  [233] = 223,
  [234] = 218,
  [235] = 235,
  [236] = 236,
  [237] = 223,
  [238] = 218,
  [239] = 218,
  [240] = 223,
  [241] = 95,
  [242] = 218,
  [243] = 243,
  [244] = 43,
  [245] = 32,
  [246] = 218,
  [247] = 247,
  [248] = 223,
  [249] = 249,
  [250] = 218,
  [251] = 251,
  [252] = 252,
  [253] = 45,
  [254] = 59,
  [255] = 37,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 223,
  [260] = 32,
  [261] = 218,
  [262] = 223,
  [263] = 263,
  [264] = 43,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 76,
  [269] = 170,
  [270] = 270,
  [271] = 223,
  [272] = 43,
  [273] = 32,
  [274] = 37,
  [275] = 263,
  [276] = 276,
  [277] = 277,
  [278] = 37,
  [279] = 170,
  [280] = 76,
  [281] = 59,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 45,
  [286] = 87,
  [287] = 59,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 171,
  [292] = 292,
  [293] = 87,
  [294] = 176,
  [295] = 295,
  [296] = 95,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 87,
  [301] = 301,
  [302] = 153,
  [303] = 165,
  [304] = 304,
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
  [342] = 176,
  [343] = 171,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 344,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 344,
  [357] = 357,
  [358] = 352,
  [359] = 359,
  [360] = 353,
  [361] = 352,
  [362] = 353,
  [363] = 363,
  [364] = 349,
  [365] = 344,
  [366] = 352,
  [367] = 353,
  [368] = 368,
  [369] = 317,
  [370] = 352,
  [371] = 353,
  [372] = 153,
  [373] = 165,
  [374] = 352,
  [375] = 375,
  [376] = 376,
  [377] = 352,
  [378] = 378,
  [379] = 379,
  [380] = 352,
  [381] = 381,
  [382] = 382,
  [383] = 352,
  [384] = 384,
  [385] = 385,
  [386] = 352,
  [387] = 387,
  [388] = 352,
  [389] = 389,
  [390] = 352,
  [391] = 391,
  [392] = 352,
  [393] = 393,
  [394] = 352,
  [395] = 352,
  [396] = 349,
  [397] = 349,
  [398] = 349,
  [399] = 349,
  [400] = 349,
  [401] = 349,
  [402] = 349,
  [403] = 349,
  [404] = 349,
  [405] = 349,
  [406] = 349,
  [407] = 349,
  [408] = 349,
  [409] = 409,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '+') ADVANCE(277);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '@') ADVANCE(215);
      if (lookahead == '[') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead == ']') ADVANCE(247);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(239);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(238);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '+') ADVANCE(277);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '@') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '+') ADVANCE(277);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(283);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '@') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '+') ADVANCE(214);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(283);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '+') ADVANCE(286);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '+') ADVANCE(277);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '@') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(237);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '=') ADVANCE(235);
      if (lookahead == '[') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '[') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '[') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '[') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '@') ADVANCE(214);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(64)
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '+') ADVANCE(275);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(205);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '+') ADVANCE(275);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(205);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 45:
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(280);
      END_STATE();
    case 47:
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '[') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(187);
      END_STATE();
    case 48:
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 49:
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 50:
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(280);
      END_STATE();
    case 51:
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(218);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '/') ADVANCE(279);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 58:
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(186);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 63:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 64:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(64)
      END_STATE();
    case 65:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      END_STATE();
    case 66:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 67:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 69:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 70:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 71:
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(232);
      END_STATE();
    case 72:
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(196);
      END_STATE();
    case 73:
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 96:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 97:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 98:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 103:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(88);
      END_STATE();
    case 104:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(185);
      END_STATE();
    case 105:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(85);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 111:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 112:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 113:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(126);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      END_STATE();
    case 141:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 151:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == '+') ADVANCE(275);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '[') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead == ']') ADVANCE(247);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 158:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(247);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(147);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(92);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(247);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(147);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(92);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (lookahead == '.') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(239);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(239);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(278);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != '@') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != '@') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != '@') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+') ADVANCE(286);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(221);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(218);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(196);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(239);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(264);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(265);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_version_instruction_token1);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__version_instruction_semver);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_project_instruction_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_project_instruction_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_import_instruction_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_SLASH);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token1);
      if (lookahead == '\n') ADVANCE(239);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token1);
      if (lookahead == '.') ADVANCE(56);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token2);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+') ADVANCE(286);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token2);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+') ADVANCE(286);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+') ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_earthfile_local_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '+') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_build_instruction_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 158},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 158},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 29},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 45},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 34},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 45},
  [58] = {.lex_state = 43},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 42},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 26},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 26},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 41},
  [89] = {.lex_state = 36},
  [90] = {.lex_state = 38},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 41},
  [95] = {.lex_state = 43},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 41},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 158},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 47},
  [107] = {.lex_state = 43},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 18},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 158},
  [116] = {.lex_state = 53},
  [117] = {.lex_state = 28},
  [118] = {.lex_state = 28},
  [119] = {.lex_state = 28},
  [120] = {.lex_state = 46},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 46},
  [126] = {.lex_state = 28},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 28},
  [130] = {.lex_state = 24},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 25},
  [134] = {.lex_state = 39},
  [135] = {.lex_state = 40},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 28},
  [138] = {.lex_state = 45},
  [139] = {.lex_state = 18},
  [140] = {.lex_state = 45},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 45},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 45},
  [146] = {.lex_state = 25},
  [147] = {.lex_state = 25},
  [148] = {.lex_state = 28},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 25},
  [151] = {.lex_state = 158},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 48},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 18},
  [158] = {.lex_state = 16},
  [159] = {.lex_state = 15},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 18},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 45},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 26},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 48},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 15},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 33},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 48},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 18},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 44},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 37},
  [190] = {.lex_state = 28},
  [191] = {.lex_state = 13},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 158},
  [197] = {.lex_state = 11},
  [198] = {.lex_state = 26},
  [199] = {.lex_state = 33},
  [200] = {.lex_state = 37},
  [201] = {.lex_state = 26},
  [202] = {.lex_state = 46},
  [203] = {.lex_state = 48},
  [204] = {.lex_state = 37},
  [205] = {.lex_state = 26},
  [206] = {.lex_state = 33},
  [207] = {.lex_state = 48},
  [208] = {.lex_state = 18},
  [209] = {.lex_state = 45},
  [210] = {.lex_state = 49},
  [211] = {.lex_state = 26},
  [212] = {.lex_state = 26},
  [213] = {.lex_state = 18},
  [214] = {.lex_state = 18},
  [215] = {.lex_state = 14},
  [216] = {.lex_state = 26},
  [217] = {.lex_state = 11},
  [218] = {.lex_state = 63},
  [219] = {.lex_state = 63},
  [220] = {.lex_state = 63},
  [221] = {.lex_state = 14},
  [222] = {.lex_state = 63},
  [223] = {.lex_state = 63},
  [224] = {.lex_state = 63},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 14},
  [227] = {.lex_state = 63},
  [228] = {.lex_state = 158},
  [229] = {.lex_state = 63},
  [230] = {.lex_state = 63},
  [231] = {.lex_state = 63},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 63},
  [234] = {.lex_state = 63},
  [235] = {.lex_state = 26},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 63},
  [238] = {.lex_state = 63},
  [239] = {.lex_state = 63},
  [240] = {.lex_state = 63},
  [241] = {.lex_state = 45},
  [242] = {.lex_state = 63},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 18},
  [245] = {.lex_state = 18},
  [246] = {.lex_state = 63},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 63},
  [249] = {.lex_state = 158},
  [250] = {.lex_state = 63},
  [251] = {.lex_state = 18},
  [252] = {.lex_state = 33},
  [253] = {.lex_state = 17},
  [254] = {.lex_state = 17},
  [255] = {.lex_state = 17},
  [256] = {.lex_state = 18},
  [257] = {.lex_state = 54},
  [258] = {.lex_state = 53},
  [259] = {.lex_state = 63},
  [260] = {.lex_state = 17},
  [261] = {.lex_state = 63},
  [262] = {.lex_state = 63},
  [263] = {.lex_state = 50},
  [264] = {.lex_state = 17},
  [265] = {.lex_state = 26},
  [266] = {.lex_state = 18},
  [267] = {.lex_state = 18},
  [268] = {.lex_state = 158},
  [269] = {.lex_state = 41},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 63},
  [272] = {.lex_state = 41},
  [273] = {.lex_state = 41},
  [274] = {.lex_state = 41},
  [275] = {.lex_state = 50},
  [276] = {.lex_state = 46},
  [277] = {.lex_state = 158},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 17},
  [280] = {.lex_state = 57},
  [281] = {.lex_state = 41},
  [282] = {.lex_state = 158},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 41},
  [286] = {.lex_state = 45},
  [287] = {.lex_state = 14},
  [288] = {.lex_state = 18},
  [289] = {.lex_state = 71},
  [290] = {.lex_state = 18},
  [291] = {.lex_state = 23},
  [292] = {.lex_state = 62},
  [293] = {.lex_state = 57},
  [294] = {.lex_state = 23},
  [295] = {.lex_state = 18},
  [296] = {.lex_state = 158},
  [297] = {.lex_state = 45},
  [298] = {.lex_state = 26},
  [299] = {.lex_state = 18},
  [300] = {.lex_state = 158},
  [301] = {.lex_state = 18},
  [302] = {.lex_state = 23},
  [303] = {.lex_state = 23},
  [304] = {.lex_state = 158},
  [305] = {.lex_state = 158},
  [306] = {.lex_state = 18},
  [307] = {.lex_state = 23},
  [308] = {.lex_state = 18},
  [309] = {.lex_state = 26},
  [310] = {.lex_state = 18},
  [311] = {.lex_state = 9},
  [312] = {.lex_state = 71},
  [313] = {.lex_state = 158},
  [314] = {.lex_state = 58},
  [315] = {.lex_state = 158},
  [316] = {.lex_state = 23},
  [317] = {.lex_state = 58},
  [318] = {.lex_state = 26},
  [319] = {.lex_state = 53},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 5},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 41},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 5},
  [326] = {.lex_state = 54},
  [327] = {.lex_state = 69},
  [328] = {.lex_state = 5},
  [329] = {.lex_state = 158},
  [330] = {.lex_state = 5},
  [331] = {.lex_state = 158},
  [332] = {.lex_state = 5},
  [333] = {.lex_state = 5},
  [334] = {.lex_state = 5},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 67},
  [337] = {.lex_state = 243},
  [338] = {.lex_state = 158},
  [339] = {.lex_state = 5},
  [340] = {.lex_state = 5},
  [341] = {.lex_state = 5},
  [342] = {.lex_state = 158},
  [343] = {.lex_state = 158},
  [344] = {.lex_state = 66},
  [345] = {.lex_state = 158},
  [346] = {.lex_state = 69},
  [347] = {.lex_state = 66},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 72},
  [350] = {.lex_state = 5},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 158},
  [353] = {.lex_state = 73},
  [354] = {.lex_state = 5},
  [355] = {.lex_state = 70},
  [356] = {.lex_state = 66},
  [357] = {.lex_state = 70},
  [358] = {.lex_state = 158},
  [359] = {.lex_state = 5},
  [360] = {.lex_state = 73},
  [361] = {.lex_state = 158},
  [362] = {.lex_state = 73},
  [363] = {.lex_state = 5},
  [364] = {.lex_state = 72},
  [365] = {.lex_state = 66},
  [366] = {.lex_state = 158},
  [367] = {.lex_state = 73},
  [368] = {.lex_state = 5},
  [369] = {.lex_state = 158},
  [370] = {.lex_state = 158},
  [371] = {.lex_state = 73},
  [372] = {.lex_state = 158},
  [373] = {.lex_state = 158},
  [374] = {.lex_state = 158},
  [375] = {.lex_state = 5},
  [376] = {.lex_state = 71},
  [377] = {.lex_state = 158},
  [378] = {.lex_state = 5},
  [379] = {.lex_state = 5},
  [380] = {.lex_state = 158},
  [381] = {.lex_state = 5},
  [382] = {.lex_state = 5},
  [383] = {.lex_state = 158},
  [384] = {.lex_state = 5},
  [385] = {.lex_state = 158},
  [386] = {.lex_state = 158},
  [387] = {.lex_state = 5},
  [388] = {.lex_state = 158},
  [389] = {.lex_state = 73},
  [390] = {.lex_state = 158},
  [391] = {.lex_state = 5},
  [392] = {.lex_state = 158},
  [393] = {.lex_state = 5},
  [394] = {.lex_state = 158},
  [395] = {.lex_state = 158},
  [396] = {.lex_state = 72},
  [397] = {.lex_state = 72},
  [398] = {.lex_state = 72},
  [399] = {.lex_state = 72},
  [400] = {.lex_state = 72},
  [401] = {.lex_state = 72},
  [402] = {.lex_state = 72},
  [403] = {.lex_state = 72},
  [404] = {.lex_state = 72},
  [405] = {.lex_state = 72},
  [406] = {.lex_state = 72},
  [407] = {.lex_state = 72},
  [408] = {.lex_state = 72},
  [409] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(351),
    [sym__instruction] = STATE(359),
    [sym_from_instruction] = STATE(350),
    [sym_run_instruction] = STATE(350),
    [sym_cmd_instruction] = STATE(350),
    [sym_label_instruction] = STATE(350),
    [sym_expose_instruction] = STATE(350),
    [sym_env_instruction] = STATE(350),
    [sym_copy_instruction] = STATE(350),
    [sym_entrypoint_instruction] = STATE(350),
    [sym_volume_instruction] = STATE(350),
    [sym_user_instruction] = STATE(350),
    [sym_workdir_instruction] = STATE(350),
    [sym_arg_instruction] = STATE(350),
    [sym_healthcheck_instruction] = STATE(350),
    [sym_line_continuation] = STATE(1),
    [sym_version_instruction] = STATE(350),
    [sym_project_instruction] = STATE(350),
    [sym_import_instruction] = STATE(350),
    [sym_build_instruction] = STATE(350),
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
    [aux_sym_build_instruction_token1] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(48), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(51), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(54), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(57), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(60), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(63), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(66), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(69), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(72), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(75), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(78), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(81), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym_version_instruction_token1,
    ACTIONS(90), 1,
      aux_sym_project_instruction_token1,
    ACTIONS(93), 1,
      aux_sym_import_instruction_token1,
    ACTIONS(96), 1,
      aux_sym_build_instruction_token1,
    STATE(359), 1,
      sym__instruction,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(350), 17,
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
      sym_build_instruction,
  [87] = 24,
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
      aux_sym_build_instruction_token1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_line_continuation,
    STATE(359), 1,
      sym__instruction,
    STATE(350), 17,
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
      sym_build_instruction,
  [176] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(4), 1,
      sym_line_continuation,
    ACTIONS(43), 19,
      ts_builtin_sym_end,
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
      sym_comment,
      aux_sym_version_instruction_token1,
      aux_sym_project_instruction_token1,
      aux_sym_import_instruction_token1,
      aux_sym_build_instruction_token1,
  [204] = 15,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(101), 1,
      anon_sym_DASH_DASH,
    ACTIONS(103), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(107), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      sym_line_continuation,
    STATE(6), 1,
      aux_sym_run_instruction_repeat1,
    STATE(29), 1,
      aux_sym_shell_command_repeat1,
    STATE(130), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(189), 1,
      sym__comment_line,
    STATE(270), 1,
      sym_shell_fragment,
    STATE(333), 1,
      sym__anon_comment,
    ACTIONS(105), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(89), 2,
      sym_param,
      sym_mount_param,
    STATE(335), 2,
      sym_shell_command,
      sym_json_string_array,
  [253] = 15,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(101), 1,
      anon_sym_DASH_DASH,
    ACTIONS(103), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(107), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_run_instruction_repeat1,
    STATE(29), 1,
      aux_sym_shell_command_repeat1,
    STATE(130), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(189), 1,
      sym__comment_line,
    STATE(270), 1,
      sym_shell_fragment,
    STATE(333), 1,
      sym__anon_comment,
    ACTIONS(105), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(89), 2,
      sym_param,
      sym_mount_param,
    STATE(341), 2,
      sym_shell_command,
      sym_json_string_array,
  [302] = 16,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      aux_sym_image_name_token1,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      anon_sym_PLUS,
    ACTIONS(119), 1,
      anon_sym_DOT_SLASH,
    ACTIONS(121), 1,
      anon_sym_DOT_DOT_SLASH,
    STATE(7), 1,
      sym_line_continuation,
    STATE(8), 1,
      aux_sym_from_instruction_repeat1,
    STATE(17), 1,
      sym_expansion,
    STATE(31), 1,
      sym_image_name,
    STATE(95), 1,
      sym_param,
    STATE(124), 1,
      sym_earthfile_local_path,
    STATE(125), 1,
      aux_sym_earthfile_local_path_repeat1,
    STATE(290), 1,
      sym_image_spec,
    STATE(123), 2,
      sym_target,
      sym_earthfile_ref,
  [352] = 16,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      aux_sym_image_name_token1,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      anon_sym_PLUS,
    ACTIONS(119), 1,
      anon_sym_DOT_SLASH,
    ACTIONS(121), 1,
      anon_sym_DOT_DOT_SLASH,
    STATE(8), 1,
      sym_line_continuation,
    STATE(17), 1,
      sym_expansion,
    STATE(31), 1,
      sym_image_name,
    STATE(58), 1,
      aux_sym_from_instruction_repeat1,
    STATE(95), 1,
      sym_param,
    STATE(124), 1,
      sym_earthfile_local_path,
    STATE(125), 1,
      aux_sym_earthfile_local_path_repeat1,
    STATE(295), 1,
      sym_image_spec,
    STATE(111), 2,
      sym_target,
      sym_earthfile_ref,
  [402] = 14,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      aux_sym_image_name_token1,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      anon_sym_PLUS,
    ACTIONS(119), 1,
      anon_sym_DOT_SLASH,
    ACTIONS(121), 1,
      anon_sym_DOT_DOT_SLASH,
    STATE(9), 1,
      sym_line_continuation,
    STATE(10), 1,
      aux_sym_from_instruction_repeat1,
    STATE(17), 1,
      sym_expansion,
    STATE(95), 1,
      sym_param,
    STATE(125), 1,
      aux_sym_earthfile_local_path_repeat1,
    STATE(124), 2,
      sym_image_name,
      sym_earthfile_local_path,
    STATE(161), 2,
      sym_target,
      sym_earthfile_ref,
  [447] = 14,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      aux_sym_image_name_token1,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      anon_sym_PLUS,
    ACTIONS(119), 1,
      anon_sym_DOT_SLASH,
    ACTIONS(121), 1,
      anon_sym_DOT_DOT_SLASH,
    STATE(10), 1,
      sym_line_continuation,
    STATE(17), 1,
      sym_expansion,
    STATE(58), 1,
      aux_sym_from_instruction_repeat1,
    STATE(95), 1,
      sym_param,
    STATE(125), 1,
      aux_sym_earthfile_local_path_repeat1,
    STATE(124), 2,
      sym_image_name,
      sym_earthfile_local_path,
    STATE(157), 2,
      sym_target,
      sym_earthfile_ref,
  [492] = 12,
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
    STATE(11), 1,
      sym_line_continuation,
    STATE(40), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(131), 1,
      sym__imm_expansion,
    STATE(152), 1,
      sym__immediate_expansion,
    ACTIONS(135), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(307), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [532] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(107), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_line_continuation,
    STATE(29), 1,
      aux_sym_shell_command_repeat1,
    STATE(130), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(189), 1,
      sym__comment_line,
    STATE(270), 1,
      sym_shell_fragment,
    STATE(333), 1,
      sym__anon_comment,
    STATE(321), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(105), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [569] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(107), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      sym_line_continuation,
    STATE(29), 1,
      aux_sym_shell_command_repeat1,
    STATE(130), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(189), 1,
      sym__comment_line,
    STATE(270), 1,
      sym_shell_fragment,
    STATE(333), 1,
      sym__anon_comment,
    STATE(332), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(105), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [606] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(141), 1,
      anon_sym_DOLLAR2,
    ACTIONS(144), 1,
      aux_sym_image_name_token2,
    STATE(37), 1,
      sym__imm_expansion,
    STATE(38), 1,
      sym__immediate_expansion,
    ACTIONS(139), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    STATE(14), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(137), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_PLUS2,
  [636] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(151), 1,
      anon_sym_DOLLAR2,
    ACTIONS(153), 1,
      aux_sym_image_name_token2,
    STATE(14), 1,
      aux_sym_image_name_repeat1,
    STATE(15), 1,
      sym_line_continuation,
    STATE(37), 1,
      sym__imm_expansion,
    STATE(38), 1,
      sym__immediate_expansion,
    ACTIONS(149), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    ACTIONS(147), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_PLUS2,
  [668] = 10,
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
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(64), 1,
      sym__imm_expansion,
    STATE(79), 1,
      sym__immediate_expansion,
    ACTIONS(161), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(188), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [702] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(151), 1,
      anon_sym_DOLLAR2,
    ACTIONS(153), 1,
      aux_sym_image_name_token2,
    STATE(15), 1,
      aux_sym_image_name_repeat1,
    STATE(17), 1,
      sym_line_continuation,
    STATE(37), 1,
      sym__imm_expansion,
    STATE(38), 1,
      sym__immediate_expansion,
    ACTIONS(165), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    ACTIONS(163), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_PLUS2,
  [734] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(64), 1,
      sym__imm_expansion,
    STATE(79), 1,
      sym__immediate_expansion,
    ACTIONS(161), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(334), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [768] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(64), 1,
      sym__imm_expansion,
    STATE(79), 1,
      sym__immediate_expansion,
    ACTIONS(161), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(381), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [802] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(64), 1,
      sym__imm_expansion,
    STATE(79), 1,
      sym__immediate_expansion,
    ACTIONS(161), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(375), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [836] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      anon_sym_DOLLAR2,
    STATE(64), 1,
      sym__imm_expansion,
    STATE(79), 1,
      sym__immediate_expansion,
    ACTIONS(174), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(21), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(172), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [865] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(177), 1,
      anon_sym_DOLLAR,
    ACTIONS(179), 1,
      aux_sym_image_name_token1,
    ACTIONS(181), 1,
      anon_sym_DOT_SLASH,
    STATE(22), 1,
      sym_line_continuation,
    STATE(49), 1,
      sym_param,
    STATE(72), 1,
      sym_expansion,
    STATE(120), 1,
      aux_sym_earthfile_local_path_repeat1,
    STATE(308), 2,
      sym_image_name,
      sym_earthfile_local_path,
  [900] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(183), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(23), 1,
      sym_line_continuation,
    STATE(64), 1,
      sym__imm_expansion,
    STATE(79), 1,
      sym__immediate_expansion,
    ACTIONS(161), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    ACTIONS(185), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [931] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(191), 1,
      anon_sym_DOLLAR2,
    ACTIONS(193), 1,
      aux_sym_earthfile_local_path_token2,
    STATE(24), 1,
      sym_line_continuation,
    STATE(25), 1,
      aux_sym_earthfile_local_path_repeat2,
    STATE(96), 1,
      sym__imm_expansion,
    STATE(108), 1,
      sym__immediate_expansion,
    ACTIONS(187), 2,
      anon_sym_LF,
      anon_sym_PLUS2,
    ACTIONS(189), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [961] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(191), 1,
      anon_sym_DOLLAR2,
    ACTIONS(193), 1,
      aux_sym_earthfile_local_path_token2,
    STATE(25), 1,
      sym_line_continuation,
    STATE(26), 1,
      aux_sym_earthfile_local_path_repeat2,
    STATE(96), 1,
      sym__imm_expansion,
    STATE(108), 1,
      sym__immediate_expansion,
    ACTIONS(195), 2,
      anon_sym_LF,
      anon_sym_PLUS2,
    ACTIONS(197), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [991] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR2,
    ACTIONS(206), 1,
      aux_sym_earthfile_local_path_token2,
    STATE(96), 1,
      sym__imm_expansion,
    STATE(108), 1,
      sym__immediate_expansion,
    ACTIONS(199), 2,
      anon_sym_LF,
      anon_sym_PLUS2,
    ACTIONS(201), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
    STATE(26), 2,
      sym_line_continuation,
      aux_sym_earthfile_local_path_repeat2,
  [1019] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(209), 1,
      anon_sym_DASH_DASH,
    ACTIONS(212), 1,
      aux_sym_shell_fragment_token1,
    STATE(27), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(89), 2,
      sym_param,
      sym_mount_param,
    ACTIONS(214), 4,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1043] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(107), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_shell_command_repeat1,
    STATE(130), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(189), 1,
      sym__comment_line,
    STATE(333), 1,
      sym__anon_comment,
    STATE(382), 1,
      sym_shell_fragment,
    ACTIONS(105), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1073] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(107), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_shell_command_repeat1,
    STATE(130), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(189), 1,
      sym__comment_line,
    STATE(284), 1,
      sym_shell_fragment,
    STATE(333), 1,
      sym__anon_comment,
    ACTIONS(105), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1103] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(107), 1,
      anon_sym_POUND,
    STATE(28), 1,
      aux_sym_shell_command_repeat1,
    STATE(30), 1,
      sym_line_continuation,
    STATE(130), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(189), 1,
      sym__comment_line,
    STATE(333), 1,
      sym__anon_comment,
    STATE(368), 1,
      sym_shell_fragment,
    ACTIONS(105), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1133] = 11,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(218), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(220), 1,
      anon_sym_COLON,
    ACTIONS(222), 1,
      anon_sym_AT,
    ACTIONS(224), 1,
      anon_sym_DASH_DASH,
    ACTIONS(226), 1,
      anon_sym_PLUS2,
    STATE(31), 1,
      sym_line_continuation,
    STATE(184), 1,
      sym_image_tag,
    STATE(267), 1,
      sym_target_direct,
    STATE(299), 1,
      sym_image_digest,
  [1167] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(32), 1,
      sym_line_continuation,
    ACTIONS(230), 3,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(228), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [1186] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(232), 1,
      aux_sym_path_token1,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(236), 1,
      anon_sym_DASH_DASH,
    STATE(33), 1,
      sym_line_continuation,
    STATE(57), 1,
      aux_sym_from_instruction_repeat1,
    STATE(97), 1,
      sym_expansion,
    STATE(145), 1,
      aux_sym_copy_instruction_repeat1,
    STATE(241), 1,
      sym_param,
    STATE(323), 1,
      sym_path,
  [1217] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(242), 1,
      anon_sym_DOLLAR2,
    ACTIONS(245), 1,
      aux_sym_image_tag_token1,
    STATE(143), 1,
      sym__immediate_expansion,
    STATE(149), 1,
      sym__imm_expansion,
    ACTIONS(238), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(34), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1244] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      anon_sym_DOLLAR2,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_BSLASH,
    STATE(35), 1,
      sym_line_continuation,
    STATE(39), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(114), 1,
      sym__immediate_expansion,
    STATE(133), 1,
      sym__imm_expansion,
    ACTIONS(252), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1273] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      aux_sym_shell_fragment_token1,
    STATE(36), 1,
      sym_line_continuation,
    STATE(41), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(256), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1296] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(37), 1,
      sym_line_continuation,
    ACTIONS(264), 3,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(262), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [1315] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(38), 1,
      sym_line_continuation,
    ACTIONS(268), 3,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(266), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [1334] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(270), 1,
      anon_sym_DOLLAR2,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(114), 1,
      sym__immediate_expansion,
    STATE(133), 1,
      sym__imm_expansion,
    ACTIONS(275), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(39), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1361] = 9,
    ACTIONS(125), 1,
      anon_sym_DOLLAR2,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(183), 1,
      anon_sym_LF,
    ACTIONS(185), 1,
      aux_sym__env_key_token1,
    STATE(40), 1,
      sym_line_continuation,
    STATE(47), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(131), 1,
      sym__imm_expansion,
    STATE(152), 1,
      sym__immediate_expansion,
    ACTIONS(135), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1390] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      aux_sym_shell_fragment_token1,
    STATE(41), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(281), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1411] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      anon_sym_BSLASH,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(42), 1,
      sym_line_continuation,
    STATE(114), 1,
      sym__immediate_expansion,
    STATE(133), 1,
      sym__imm_expansion,
    ACTIONS(252), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1440] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(43), 1,
      sym_line_continuation,
    ACTIONS(292), 3,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(290), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [1459] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      aux_sym_shell_fragment_token1,
    STATE(36), 1,
      aux_sym_mount_param_repeat1,
    STATE(44), 1,
      sym_line_continuation,
    ACTIONS(294), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1482] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(45), 1,
      sym_line_continuation,
    ACTIONS(300), 3,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(298), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [1501] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(304), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(307), 1,
      anon_sym_DOLLAR2,
    STATE(162), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym__immediate_expansion,
    STATE(186), 1,
      sym__imm_expansion,
    ACTIONS(302), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(46), 2,
      sym_line_continuation,
      aux_sym__user_name_or_group_repeat1,
  [1528] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(172), 1,
      aux_sym__env_key_token1,
    ACTIONS(310), 1,
      anon_sym_DOLLAR2,
    STATE(131), 1,
      sym__imm_expansion,
    STATE(152), 1,
      sym__immediate_expansion,
    ACTIONS(313), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(47), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1555] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(318), 1,
      aux_sym_label_pair_token1,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      anon_sym_SQUOTE,
    STATE(180), 1,
      sym_label_pair,
    STATE(48), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
    STATE(331), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1582] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(121), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(177), 1,
      anon_sym_DOLLAR,
    ACTIONS(179), 1,
      aux_sym_image_name_token1,
    ACTIONS(181), 1,
      anon_sym_DOT_SLASH,
    STATE(49), 1,
      sym_line_continuation,
    STATE(72), 1,
      sym_expansion,
    STATE(120), 1,
      aux_sym_earthfile_local_path_repeat1,
    STATE(288), 2,
      sym_image_name,
      sym_earthfile_local_path,
  [1611] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      anon_sym_BSLASH,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_line_continuation,
    STATE(54), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(114), 1,
      sym__immediate_expansion,
    STATE(133), 1,
      sym__imm_expansion,
    ACTIONS(252), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1640] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(331), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(333), 1,
      anon_sym_DOLLAR2,
    STATE(46), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(51), 1,
      sym_line_continuation,
    STATE(162), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym__immediate_expansion,
    STATE(186), 1,
      sym__imm_expansion,
    ACTIONS(329), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1669] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_line_continuation,
    STATE(56), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(114), 1,
      sym__immediate_expansion,
    STATE(133), 1,
      sym__imm_expansion,
    ACTIONS(252), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1698] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(339), 1,
      aux_sym_label_pair_token1,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      anon_sym_SQUOTE,
    STATE(48), 1,
      aux_sym_label_instruction_repeat1,
    STATE(53), 1,
      sym_line_continuation,
    STATE(180), 1,
      sym_label_pair,
    STATE(331), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1727] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      anon_sym_BSLASH,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(54), 1,
      sym_line_continuation,
    STATE(114), 1,
      sym__immediate_expansion,
    STATE(133), 1,
      sym__imm_expansion,
    ACTIONS(252), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1756] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(349), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(351), 1,
      anon_sym_DOLLAR2,
    ACTIONS(353), 1,
      aux_sym_image_tag_token1,
    STATE(34), 1,
      aux_sym_image_tag_repeat1,
    STATE(55), 1,
      sym_line_continuation,
    STATE(143), 1,
      sym__immediate_expansion,
    STATE(149), 1,
      sym__imm_expansion,
    ACTIONS(347), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1785] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      anon_sym_BSLASH,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(56), 1,
      sym_line_continuation,
    STATE(114), 1,
      sym__immediate_expansion,
    STATE(133), 1,
      sym__imm_expansion,
    ACTIONS(252), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1814] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(232), 1,
      aux_sym_path_token1,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(236), 1,
      anon_sym_DASH_DASH,
    STATE(57), 1,
      sym_line_continuation,
    STATE(97), 1,
      sym_expansion,
    STATE(138), 1,
      aux_sym_from_instruction_repeat1,
    STATE(140), 1,
      aux_sym_copy_instruction_repeat1,
    STATE(241), 1,
      sym_param,
    STATE(323), 1,
      sym_path,
  [1845] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(359), 1,
      aux_sym_image_name_token1,
    ACTIONS(361), 1,
      anon_sym_DASH_DASH,
    STATE(95), 1,
      sym_param,
    STATE(58), 2,
      sym_line_continuation,
      aux_sym_from_instruction_repeat1,
    ACTIONS(357), 4,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [1868] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(59), 1,
      sym_line_continuation,
    ACTIONS(366), 3,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
      anon_sym_DASH_DASH,
    ACTIONS(364), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
      anon_sym_PLUS2,
  [1887] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(331), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(333), 1,
      anon_sym_DOLLAR2,
    STATE(51), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(60), 1,
      sym_line_continuation,
    STATE(162), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym__immediate_expansion,
    STATE(186), 1,
      sym__imm_expansion,
    ACTIONS(368), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1916] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(331), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(333), 1,
      anon_sym_DOLLAR2,
    ACTIONS(370), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym_line_continuation,
    STATE(75), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(163), 1,
      sym__immediate_expansion,
    STATE(186), 1,
      sym__imm_expansion,
    STATE(217), 1,
      sym__immediate_user_name_or_group_fragment,
  [1944] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(62), 1,
      sym_line_continuation,
    ACTIONS(300), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(298), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1962] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      aux_sym_label_pair_token1,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    ACTIONS(376), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      aux_sym_label_instruction_repeat1,
    STATE(63), 1,
      sym_line_continuation,
    STATE(180), 1,
      sym_label_pair,
    STATE(331), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1988] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(64), 1,
      sym_line_continuation,
    ACTIONS(264), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(262), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2006] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(380), 1,
      anon_sym_POUND,
    STATE(189), 1,
      sym__comment_line,
    STATE(333), 1,
      sym__anon_comment,
    STATE(65), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
    ACTIONS(378), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2028] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(385), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(387), 1,
      anon_sym_DOLLAR2,
    ACTIONS(389), 1,
      aux_sym_image_digest_token1,
    STATE(66), 1,
      sym_line_continuation,
    STATE(71), 1,
      aux_sym_image_digest_repeat1,
    STATE(167), 1,
      sym__imm_expansion,
    STATE(168), 1,
      sym__immediate_expansion,
  [2056] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(67), 1,
      sym_line_continuation,
    ACTIONS(366), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(364), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2074] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(137), 1,
      anon_sym_LF,
    ACTIONS(139), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(391), 1,
      anon_sym_DOLLAR2,
    ACTIONS(394), 1,
      aux_sym_image_name_token2,
    STATE(174), 1,
      sym__imm_expansion,
    STATE(183), 1,
      sym__immediate_expansion,
    STATE(68), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
  [2100] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(399), 1,
      aux_sym_path_token2,
    ACTIONS(401), 1,
      anon_sym_DOLLAR2,
    STATE(69), 1,
      sym_line_continuation,
    STATE(82), 1,
      aux_sym_path_repeat1,
    STATE(170), 1,
      sym__immediate_expansion,
    STATE(211), 1,
      sym__imm_expansion,
    ACTIONS(397), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [2126] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(195), 1,
      anon_sym_LF,
    ACTIONS(197), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(403), 1,
      anon_sym_DOLLAR2,
    ACTIONS(405), 1,
      aux_sym_earthfile_local_path_token2,
    STATE(70), 1,
      sym_line_continuation,
    STATE(74), 1,
      aux_sym_earthfile_local_path_repeat2,
    STATE(155), 1,
      sym__immediate_expansion,
    STATE(192), 1,
      sym__imm_expansion,
  [2154] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(409), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(411), 1,
      anon_sym_DOLLAR2,
    ACTIONS(414), 1,
      aux_sym_image_digest_token1,
    STATE(167), 1,
      sym__imm_expansion,
    STATE(168), 1,
      sym__immediate_expansion,
    STATE(71), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [2180] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(417), 1,
      anon_sym_DOLLAR2,
    ACTIONS(419), 1,
      aux_sym_image_name_token2,
    STATE(72), 1,
      sym_line_continuation,
    STATE(83), 1,
      aux_sym_image_name_repeat1,
    STATE(174), 1,
      sym__imm_expansion,
    STATE(183), 1,
      sym__immediate_expansion,
  [2208] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(73), 1,
      sym_line_continuation,
    ACTIONS(292), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(290), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2226] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(199), 1,
      anon_sym_LF,
    ACTIONS(201), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(421), 1,
      anon_sym_DOLLAR2,
    ACTIONS(424), 1,
      aux_sym_earthfile_local_path_token2,
    STATE(155), 1,
      sym__immediate_expansion,
    STATE(192), 1,
      sym__imm_expansion,
    STATE(74), 2,
      sym_line_continuation,
      aux_sym_earthfile_local_path_repeat2,
  [2252] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(429), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(432), 1,
      anon_sym_DOLLAR2,
    STATE(163), 1,
      sym__immediate_expansion,
    STATE(186), 1,
      sym__imm_expansion,
    STATE(217), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(75), 2,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
  [2278] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      anon_sym_EQ,
    ACTIONS(439), 1,
      aux_sym_image_name_token1,
    STATE(76), 1,
      sym_line_continuation,
    ACTIONS(437), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2298] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(443), 1,
      aux_sym_shell_fragment_token1,
    STATE(77), 1,
      sym_line_continuation,
    ACTIONS(441), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2316] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(286), 1,
      aux_sym_shell_fragment_token1,
    STATE(78), 1,
      sym_line_continuation,
    ACTIONS(281), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2334] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(79), 1,
      sym_line_continuation,
    ACTIONS(447), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(445), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2352] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(403), 1,
      anon_sym_DOLLAR2,
    ACTIONS(405), 1,
      aux_sym_earthfile_local_path_token2,
    STATE(70), 1,
      aux_sym_earthfile_local_path_repeat2,
    STATE(80), 1,
      sym_line_continuation,
    STATE(155), 1,
      sym__immediate_expansion,
    STATE(192), 1,
      sym__imm_expansion,
  [2380] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(449), 1,
      anon_sym_EQ,
    STATE(81), 1,
      sym_line_continuation,
    ACTIONS(437), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2400] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(453), 1,
      aux_sym_path_token2,
    ACTIONS(456), 1,
      anon_sym_DOLLAR2,
    STATE(170), 1,
      sym__immediate_expansion,
    STATE(211), 1,
      sym__imm_expansion,
    ACTIONS(451), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(82), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2424] = 9,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(149), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(417), 1,
      anon_sym_DOLLAR2,
    ACTIONS(419), 1,
      aux_sym_image_name_token2,
    STATE(68), 1,
      aux_sym_image_name_repeat1,
    STATE(83), 1,
      sym_line_continuation,
    STATE(174), 1,
      sym__imm_expansion,
    STATE(183), 1,
      sym__immediate_expansion,
  [2452] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(399), 1,
      aux_sym_path_token2,
    ACTIONS(401), 1,
      anon_sym_DOLLAR2,
    STATE(69), 1,
      aux_sym_path_repeat1,
    STATE(84), 1,
      sym_line_continuation,
    STATE(170), 1,
      sym__immediate_expansion,
    STATE(211), 1,
      sym__imm_expansion,
    ACTIONS(459), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [2478] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(364), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
    ACTIONS(366), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
      aux_sym_earthfile_local_path_token2,
  [2495] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      anon_sym_LF,
    ACTIONS(463), 1,
      anon_sym_DOLLAR,
    ACTIONS(465), 1,
      aux_sym_expose_port_token1,
    STATE(86), 1,
      sym_line_continuation,
    STATE(98), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(266), 2,
      sym_expansion,
      sym_expose_port,
  [2518] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(469), 1,
      aux_sym_shell_fragment_token1,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(467), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2535] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(471), 1,
      aux_sym_path_token2,
    ACTIONS(473), 1,
      anon_sym_DOLLAR2,
    ACTIONS(475), 1,
      sym__non_newline_whitespace,
    STATE(88), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_path_repeat1,
    STATE(269), 1,
      sym__immediate_expansion,
    STATE(274), 1,
      sym__imm_expansion,
  [2560] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(479), 1,
      aux_sym_shell_fragment_token1,
    STATE(89), 1,
      sym_line_continuation,
    ACTIONS(477), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2577] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(331), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(333), 1,
      anon_sym_DOLLAR2,
    STATE(61), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(90), 1,
      sym_line_continuation,
    STATE(163), 1,
      sym__immediate_expansion,
    STATE(186), 1,
      sym__imm_expansion,
    STATE(217), 1,
      sym__immediate_user_name_or_group_fragment,
  [2602] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(91), 1,
      sym_line_continuation,
    ACTIONS(290), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
    ACTIONS(292), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
      aux_sym_earthfile_local_path_token2,
  [2619] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(92), 1,
      sym_line_continuation,
    ACTIONS(228), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
    ACTIONS(230), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
      aux_sym_earthfile_local_path_token2,
  [2636] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(481), 1,
      anon_sym_LF,
    ACTIONS(483), 1,
      anon_sym_DOLLAR2,
    ACTIONS(485), 1,
      aux_sym_image_alias_token2,
    STATE(93), 1,
      sym_line_continuation,
    STATE(102), 1,
      aux_sym_image_alias_repeat1,
    STATE(221), 1,
      sym__immediate_expansion,
    STATE(278), 1,
      sym__imm_expansion,
  [2661] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(487), 1,
      aux_sym_path_token2,
    ACTIONS(490), 1,
      anon_sym_DOLLAR2,
    ACTIONS(493), 1,
      sym__non_newline_whitespace,
    STATE(269), 1,
      sym__immediate_expansion,
    STATE(274), 1,
      sym__imm_expansion,
    STATE(94), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2684] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(497), 1,
      aux_sym_image_name_token1,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(495), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2701] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(96), 1,
      sym_line_continuation,
    ACTIONS(262), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
    ACTIONS(264), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
      aux_sym_earthfile_local_path_token2,
  [2718] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(471), 1,
      aux_sym_path_token2,
    ACTIONS(473), 1,
      anon_sym_DOLLAR2,
    ACTIONS(499), 1,
      sym__non_newline_whitespace,
    STATE(88), 1,
      aux_sym_path_repeat1,
    STATE(97), 1,
      sym_line_continuation,
    STATE(269), 1,
      sym__immediate_expansion,
    STATE(274), 1,
      sym__imm_expansion,
  [2743] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(501), 1,
      anon_sym_LF,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(506), 1,
      aux_sym_expose_port_token1,
    STATE(98), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(266), 2,
      sym_expansion,
      sym_expose_port,
  [2764] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(499), 1,
      anon_sym_LF,
    ACTIONS(509), 1,
      aux_sym_path_token2,
    ACTIONS(511), 1,
      anon_sym_DOLLAR2,
    STATE(99), 1,
      sym_line_continuation,
    STATE(105), 1,
      aux_sym_path_repeat1,
    STATE(255), 1,
      sym__imm_expansion,
    STATE(279), 1,
      sym__immediate_expansion,
  [2789] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(100), 1,
      sym_line_continuation,
    ACTIONS(298), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
    ACTIONS(300), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
      aux_sym_earthfile_local_path_token2,
  [2806] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(493), 1,
      anon_sym_LF,
    ACTIONS(513), 1,
      aux_sym_path_token2,
    ACTIONS(516), 1,
      anon_sym_DOLLAR2,
    STATE(255), 1,
      sym__imm_expansion,
    STATE(279), 1,
      sym__immediate_expansion,
    STATE(101), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2829] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(519), 1,
      anon_sym_LF,
    ACTIONS(521), 1,
      anon_sym_DOLLAR2,
    ACTIONS(524), 1,
      aux_sym_image_alias_token2,
    STATE(221), 1,
      sym__immediate_expansion,
    STATE(278), 1,
      sym__imm_expansion,
    STATE(102), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2852] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(527), 1,
      anon_sym_NONE,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    STATE(103), 1,
      sym_line_continuation,
    STATE(151), 1,
      aux_sym_from_instruction_repeat1,
    STATE(296), 1,
      sym_param,
    STATE(324), 1,
      sym_cmd_instruction,
  [2877] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(483), 1,
      anon_sym_DOLLAR2,
    ACTIONS(485), 1,
      aux_sym_image_alias_token2,
    ACTIONS(531), 1,
      anon_sym_LF,
    STATE(93), 1,
      aux_sym_image_alias_repeat1,
    STATE(104), 1,
      sym_line_continuation,
    STATE(221), 1,
      sym__immediate_expansion,
    STATE(278), 1,
      sym__imm_expansion,
  [2902] = 8,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(509), 1,
      aux_sym_path_token2,
    ACTIONS(511), 1,
      anon_sym_DOLLAR2,
    STATE(101), 1,
      aux_sym_path_repeat1,
    STATE(105), 1,
      sym_line_continuation,
    STATE(255), 1,
      sym__imm_expansion,
    STATE(279), 1,
      sym__immediate_expansion,
  [2927] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(533), 1,
      aux_sym_path_token1,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    STATE(84), 1,
      sym_expansion,
    STATE(106), 1,
      sym_line_continuation,
    STATE(235), 1,
      sym_path,
    STATE(330), 1,
      sym_json_string_array,
  [2952] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(469), 1,
      aux_sym_image_name_token1,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(467), 5,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_SLASH,
      anon_sym_DOT_DOT_SLASH,
  [2969] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(537), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_PLUS2,
    ACTIONS(539), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
      aux_sym_earthfile_local_path_token2,
  [2986] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(541), 1,
      anon_sym_LF,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(543), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(545), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [3004] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(366), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(364), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3020] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(549), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(551), 1,
      anon_sym_DASH_DASH,
    STATE(111), 1,
      sym_line_continuation,
    STATE(139), 1,
      aux_sym_from_instruction_repeat2,
    STATE(213), 1,
      sym_build_arg,
  [3042] = 4,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(558), 1,
      anon_sym_BSLASH_LF,
    STATE(112), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(555), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [3058] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(549), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(551), 1,
      anon_sym_DASH_DASH,
    STATE(113), 1,
      sym_line_continuation,
    STATE(141), 1,
      aux_sym_from_instruction_repeat2,
    STATE(213), 1,
      sym_build_arg,
  [3080] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(562), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(560), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3096] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(564), 1,
      anon_sym_DOLLAR,
    ACTIONS(566), 1,
      aux_sym_expose_port_token1,
    STATE(86), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(115), 1,
      sym_line_continuation,
    STATE(266), 2,
      sym_expansion,
      sym_expose_port,
  [3116] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(568), 1,
      aux_sym__env_key_token1,
    STATE(116), 1,
      sym_line_continuation,
    STATE(144), 1,
      aux_sym_env_instruction_repeat1,
    STATE(314), 1,
      sym__env_key,
    STATE(316), 1,
      sym_env_pair,
    STATE(325), 1,
      sym__spaced_env_pair,
  [3138] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(570), 1,
      anon_sym_BSLASH,
    ACTIONS(572), 1,
      anon_sym_SQUOTE,
    STATE(117), 1,
      sym_line_continuation,
    STATE(148), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(574), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3158] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(570), 1,
      anon_sym_BSLASH,
    ACTIONS(576), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      sym_line_continuation,
    STATE(126), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(574), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3178] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(570), 1,
      anon_sym_BSLASH,
    ACTIONS(578), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(574), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3198] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(121), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(580), 1,
      anon_sym_DOLLAR,
    ACTIONS(582), 1,
      aux_sym_earthfile_local_path_token1,
    STATE(80), 1,
      sym_expansion,
    STATE(120), 1,
      sym_line_continuation,
    STATE(202), 1,
      aux_sym_earthfile_local_path_repeat1,
  [3220] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      aux_sym__env_key_token1,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(298), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3236] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(292), 1,
      aux_sym__env_key_token1,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(290), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3252] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(551), 1,
      anon_sym_DASH_DASH,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(586), 1,
      aux_sym_from_instruction_token2,
    STATE(113), 1,
      aux_sym_from_instruction_repeat2,
    STATE(123), 1,
      sym_line_continuation,
    STATE(213), 1,
      sym_build_arg,
  [3274] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(226), 1,
      anon_sym_PLUS2,
    ACTIONS(588), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym_line_continuation,
    STATE(267), 1,
      sym_target_direct,
    ACTIONS(224), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [3294] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(121), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(590), 1,
      anon_sym_DOLLAR,
    ACTIONS(592), 1,
      aux_sym_earthfile_local_path_token1,
    STATE(24), 1,
      sym_expansion,
    STATE(125), 1,
      sym_line_continuation,
    STATE(202), 1,
      aux_sym_earthfile_local_path_repeat1,
  [3316] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(594), 1,
      anon_sym_BSLASH,
    ACTIONS(597), 1,
      anon_sym_SQUOTE,
    ACTIONS(599), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
    STATE(126), 2,
      sym_line_continuation,
      aux_sym_single_quoted_string_repeat1,
  [3334] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(300), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(298), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3350] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(366), 1,
      aux_sym__env_key_token1,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(364), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3366] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(570), 1,
      anon_sym_BSLASH,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    STATE(126), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(574), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3386] = 5,
    ACTIONS(604), 1,
      anon_sym_LF,
    ACTIONS(608), 1,
      anon_sym_BSLASH_LF,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(606), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [3404] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      aux_sym__env_key_token1,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(262), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3420] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(132), 1,
      sym_line_continuation,
    ACTIONS(292), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(290), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3436] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(264), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(262), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3452] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(387), 1,
      anon_sym_DOLLAR2,
    ACTIONS(389), 1,
      aux_sym_image_digest_token1,
    STATE(66), 1,
      aux_sym_image_digest_repeat1,
    STATE(134), 1,
      sym_line_continuation,
    STATE(167), 1,
      sym__imm_expansion,
    STATE(168), 1,
      sym__immediate_expansion,
  [3474] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(351), 1,
      anon_sym_DOLLAR2,
    ACTIONS(353), 1,
      aux_sym_image_tag_token1,
    STATE(55), 1,
      aux_sym_image_tag_repeat1,
    STATE(135), 1,
      sym_line_continuation,
    STATE(143), 1,
      sym__immediate_expansion,
    STATE(149), 1,
      sym__imm_expansion,
  [3496] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(612), 1,
      aux_sym__env_key_token1,
    STATE(316), 1,
      sym_env_pair,
    STATE(345), 1,
      sym__env_key,
    STATE(136), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [3516] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(570), 1,
      anon_sym_BSLASH,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    STATE(129), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(574), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3536] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(357), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      aux_sym_path_token1,
    ACTIONS(617), 1,
      anon_sym_DASH_DASH,
    STATE(241), 1,
      sym_param,
    STATE(138), 2,
      sym_line_continuation,
      aux_sym_from_instruction_repeat1,
  [3556] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(551), 1,
      anon_sym_DASH_DASH,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(622), 1,
      aux_sym_from_instruction_token2,
    STATE(139), 1,
      sym_line_continuation,
    STATE(141), 1,
      aux_sym_from_instruction_repeat2,
    STATE(213), 1,
      sym_build_arg,
  [3578] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(533), 1,
      aux_sym_path_token1,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    STATE(84), 1,
      sym_expansion,
    STATE(140), 1,
      sym_line_continuation,
    STATE(142), 1,
      aux_sym_copy_instruction_repeat1,
    STATE(309), 1,
      sym_path,
  [3600] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(624), 1,
      anon_sym_LF,
    ACTIONS(626), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(628), 1,
      anon_sym_DASH_DASH,
    STATE(213), 1,
      sym_build_arg,
    STATE(141), 2,
      sym_line_continuation,
      aux_sym_from_instruction_repeat2,
  [3620] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(631), 1,
      aux_sym_path_token1,
    ACTIONS(634), 1,
      anon_sym_DOLLAR,
    STATE(97), 1,
      sym_expansion,
    STATE(323), 1,
      sym_path,
    STATE(142), 2,
      sym_line_continuation,
      aux_sym_copy_instruction_repeat1,
  [3640] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(639), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(637), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3656] = 7,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(641), 1,
      anon_sym_LF,
    ACTIONS(643), 1,
      aux_sym__env_key_token1,
    STATE(136), 1,
      aux_sym_env_instruction_repeat1,
    STATE(144), 1,
      sym_line_continuation,
    STATE(316), 1,
      sym_env_pair,
    STATE(345), 1,
      sym__env_key,
  [3678] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(533), 1,
      aux_sym_path_token1,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    STATE(84), 1,
      sym_expansion,
    STATE(142), 1,
      aux_sym_copy_instruction_repeat1,
    STATE(145), 1,
      sym_line_continuation,
    STATE(298), 1,
      sym_path,
  [3700] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(146), 1,
      sym_line_continuation,
    ACTIONS(300), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(298), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3716] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(366), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(364), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3732] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(570), 1,
      anon_sym_BSLASH,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    STATE(126), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(574), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3752] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(264), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(262), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3768] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(150), 1,
      sym_line_continuation,
    ACTIONS(292), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(290), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3784] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    STATE(151), 1,
      sym_line_continuation,
    STATE(196), 1,
      aux_sym_from_instruction_repeat1,
    STATE(296), 1,
      sym_param,
    STATE(348), 1,
      sym_cmd_instruction,
  [3806] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      aux_sym__env_key_token1,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(445), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3822] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(647), 1,
      anon_sym_LF,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(649), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3837] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      anon_sym_DOLLAR,
    ACTIONS(653), 1,
      aux_sym_image_alias_token1,
    STATE(104), 1,
      sym_expansion,
    STATE(154), 1,
      sym_line_continuation,
    STATE(391), 1,
      sym_image_alias,
  [3856] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(537), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(539), 2,
      aux_sym_from_instruction_token2,
      aux_sym_earthfile_local_path_token2,
  [3871] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(551), 1,
      anon_sym_DASH_DASH,
    ACTIONS(655), 1,
      anon_sym_LF,
    STATE(141), 1,
      aux_sym_from_instruction_repeat2,
    STATE(156), 1,
      sym_line_continuation,
    STATE(213), 1,
      sym_build_arg,
  [3890] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(551), 1,
      anon_sym_DASH_DASH,
    ACTIONS(655), 1,
      anon_sym_LF,
    STATE(157), 1,
      sym_line_continuation,
    STATE(208), 1,
      aux_sym_from_instruction_repeat2,
    STATE(213), 1,
      sym_build_arg,
  [3909] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(158), 1,
      sym_line_continuation,
    ACTIONS(228), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(230), 2,
      aux_sym_from_instruction_token2,
      aux_sym_earthfile_local_path_token2,
  [3924] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(298), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(300), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
  [3939] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(160), 1,
      sym_line_continuation,
    ACTIONS(364), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(366), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
  [3954] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(551), 1,
      anon_sym_DASH_DASH,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(156), 1,
      aux_sym_from_instruction_repeat2,
    STATE(161), 1,
      sym_line_continuation,
    STATE(213), 1,
      sym_build_arg,
  [3973] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(659), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3986] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(661), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3999] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(164), 1,
      sym_line_continuation,
    ACTIONS(290), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(292), 2,
      aux_sym_from_instruction_token2,
      aux_sym_earthfile_local_path_token2,
  [4014] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(663), 1,
      anon_sym_LF,
    STATE(165), 1,
      sym_line_continuation,
    ACTIONS(665), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4029] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(533), 1,
      aux_sym_path_token1,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    STATE(84), 1,
      sym_expansion,
    STATE(166), 1,
      sym_line_continuation,
    STATE(318), 1,
      sym_path,
  [4048] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      aux_sym_from_instruction_token2,
    STATE(167), 1,
      sym_line_continuation,
    ACTIONS(262), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4063] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(669), 1,
      aux_sym_from_instruction_token2,
    STATE(168), 1,
      sym_line_continuation,
    ACTIONS(667), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4078] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(366), 1,
      aux_sym_from_instruction_token2,
    STATE(169), 1,
      sym_line_continuation,
    ACTIONS(364), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4093] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(673), 1,
      anon_sym_DOLLAR2,
    STATE(170), 1,
      sym_line_continuation,
    ACTIONS(671), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4108] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      anon_sym_LF,
    STATE(171), 1,
      sym_line_continuation,
    ACTIONS(677), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4123] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(679), 1,
      anon_sym_LF,
    ACTIONS(683), 1,
      anon_sym_EQ,
    STATE(172), 1,
      sym_line_continuation,
    ACTIONS(681), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [4140] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      anon_sym_DOLLAR,
    ACTIONS(653), 1,
      aux_sym_image_alias_token1,
    STATE(104), 1,
      sym_expansion,
    STATE(173), 1,
      sym_line_continuation,
    STATE(387), 1,
      sym_image_alias,
  [4159] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(174), 1,
      sym_line_continuation,
    ACTIONS(262), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(264), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
  [4174] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(175), 1,
      sym_line_continuation,
    ACTIONS(228), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(230), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
  [4189] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_LF,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(687), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4204] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(177), 1,
      sym_line_continuation,
    ACTIONS(290), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(292), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
  [4219] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(178), 1,
      sym_line_continuation,
    ACTIONS(298), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(300), 2,
      aux_sym_from_instruction_token2,
      aux_sym_earthfile_local_path_token2,
  [4234] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      sym_line_continuation,
    STATE(199), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(691), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [4251] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(693), 1,
      anon_sym_LF,
    STATE(180), 1,
      sym_line_continuation,
    ACTIONS(695), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4266] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      anon_sym_DOLLAR,
    ACTIONS(653), 1,
      aux_sym_image_alias_token1,
    STATE(104), 1,
      sym_expansion,
    STATE(181), 1,
      sym_line_continuation,
    STATE(363), 1,
      sym_image_alias,
  [4285] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(298), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4298] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(268), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
  [4313] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(222), 1,
      anon_sym_AT,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      aux_sym_from_instruction_token2,
    STATE(184), 1,
      sym_line_continuation,
    STATE(306), 1,
      sym_image_digest,
  [4332] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(185), 1,
      sym_line_continuation,
    ACTIONS(364), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4345] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(262), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4358] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      aux_sym_path_token1,
    ACTIONS(701), 1,
      anon_sym_EQ,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(437), 2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [4375] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(703), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(705), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4390] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(189), 1,
      sym_line_continuation,
    ACTIONS(707), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4403] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(709), 2,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
    ACTIONS(711), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [4418] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(292), 1,
      aux_sym_from_instruction_token2,
    STATE(191), 1,
      sym_line_continuation,
    ACTIONS(290), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4433] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(192), 1,
      sym_line_continuation,
    ACTIONS(262), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(264), 2,
      aux_sym_from_instruction_token2,
      aux_sym_earthfile_local_path_token2,
  [4448] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(193), 1,
      sym_line_continuation,
    ACTIONS(228), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4461] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(364), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(366), 2,
      aux_sym_from_instruction_token2,
      aux_sym_earthfile_local_path_token2,
  [4476] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      aux_sym_from_instruction_token2,
    STATE(195), 1,
      sym_line_continuation,
    ACTIONS(298), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4491] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(357), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(713), 1,
      anon_sym_DASH_DASH,
    STATE(296), 1,
      sym_param,
    STATE(196), 2,
      sym_line_continuation,
      aux_sym_from_instruction_repeat1,
  [4508] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(197), 1,
      sym_line_continuation,
    ACTIONS(290), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4521] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_DOLLAR2,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(300), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4536] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(718), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
    STATE(199), 2,
      sym_line_continuation,
      aux_sym_json_string_repeat1,
  [4551] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(200), 1,
      sym_line_continuation,
    ACTIONS(721), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4564] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(290), 1,
      anon_sym_DOLLAR2,
    STATE(201), 1,
      sym_line_continuation,
    ACTIONS(292), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4579] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(723), 1,
      anon_sym_DOLLAR,
    ACTIONS(725), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(728), 1,
      aux_sym_earthfile_local_path_token1,
    STATE(202), 2,
      sym_line_continuation,
      aux_sym_earthfile_local_path_repeat1,
  [4596] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      anon_sym_DOLLAR,
    ACTIONS(653), 1,
      aux_sym_image_alias_token1,
    STATE(104), 1,
      sym_expansion,
    STATE(203), 1,
      sym_line_continuation,
    STATE(378), 1,
      sym_image_alias,
  [4615] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(204), 1,
      sym_line_continuation,
    ACTIONS(730), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4628] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(228), 1,
      anon_sym_DOLLAR2,
    STATE(205), 1,
      sym_line_continuation,
    ACTIONS(230), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4643] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      aux_sym_json_string_repeat1,
    STATE(206), 1,
      sym_line_continuation,
    ACTIONS(691), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [4660] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      anon_sym_DOLLAR,
    ACTIONS(653), 1,
      aux_sym_image_alias_token1,
    STATE(104), 1,
      sym_expansion,
    STATE(207), 1,
      sym_line_continuation,
    STATE(379), 1,
      sym_image_alias,
  [4679] = 6,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(551), 1,
      anon_sym_DASH_DASH,
    ACTIONS(734), 1,
      anon_sym_LF,
    STATE(141), 1,
      aux_sym_from_instruction_repeat2,
    STATE(208), 1,
      sym_line_continuation,
    STATE(213), 1,
      sym_build_arg,
  [4698] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      aux_sym_path_token1,
    ACTIONS(738), 1,
      anon_sym_DOLLAR,
    STATE(99), 1,
      sym_expansion,
    STATE(209), 1,
      sym_line_continuation,
    STATE(328), 1,
      sym_path,
  [4717] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(740), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(742), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_expansion,
    STATE(210), 1,
      sym_line_continuation,
    STATE(311), 1,
      sym__user_name_or_group,
  [4736] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(262), 1,
      anon_sym_DOLLAR2,
    STATE(211), 1,
      sym_line_continuation,
    ACTIONS(264), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4751] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(364), 1,
      anon_sym_DOLLAR2,
    STATE(212), 1,
      sym_line_continuation,
    ACTIONS(366), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4766] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      anon_sym_LF,
    STATE(213), 1,
      sym_line_continuation,
    ACTIONS(746), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [4780] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_LF,
    STATE(214), 1,
      sym_line_continuation,
    ACTIONS(300), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4794] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(215), 1,
      sym_line_continuation,
    ACTIONS(298), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4806] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(748), 1,
      anon_sym_LF,
    ACTIONS(750), 1,
      sym__non_newline_whitespace,
    STATE(216), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [4820] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(217), 1,
      sym_line_continuation,
    ACTIONS(753), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4832] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
    ACTIONS(757), 1,
      sym_variable,
    STATE(218), 1,
      sym_line_continuation,
    STATE(287), 1,
      sym__expansion_body,
  [4848] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(759), 1,
      anon_sym_LBRACE,
    ACTIONS(761), 1,
      sym_variable,
    STATE(194), 1,
      sym__expansion_body,
    STATE(219), 1,
      sym_line_continuation,
  [4864] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(763), 1,
      anon_sym_LBRACE,
    ACTIONS(765), 1,
      sym_variable,
    STATE(128), 1,
      sym__expansion_body,
    STATE(220), 1,
      sym_line_continuation,
  [4880] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(221), 1,
      sym_line_continuation,
    ACTIONS(767), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4892] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(769), 1,
      anon_sym_LBRACE,
    ACTIONS(771), 1,
      sym_variable,
    STATE(67), 1,
      sym__expansion_body,
    STATE(222), 1,
      sym_line_continuation,
  [4908] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
    ACTIONS(757), 1,
      sym_variable,
    STATE(223), 1,
      sym_line_continuation,
    STATE(226), 1,
      sym__expansion_body,
  [4924] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(773), 1,
      anon_sym_LBRACE,
    ACTIONS(775), 1,
      sym_variable,
    STATE(169), 1,
      sym__expansion_body,
    STATE(224), 1,
      sym_line_continuation,
  [4940] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(225), 1,
      sym_line_continuation,
    ACTIONS(290), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4952] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(226), 1,
      sym_line_continuation,
    ACTIONS(228), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4964] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(759), 1,
      anon_sym_LBRACE,
    ACTIONS(761), 1,
      sym_variable,
    STATE(158), 1,
      sym__expansion_body,
    STATE(227), 1,
      sym_line_continuation,
  [4980] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(777), 1,
      anon_sym_COMMA2,
    ACTIONS(780), 1,
      anon_sym_RBRACK,
    STATE(228), 2,
      sym_line_continuation,
      aux_sym_json_string_array_repeat1,
  [4994] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      anon_sym_LBRACE,
    ACTIONS(784), 1,
      sym_variable,
    STATE(110), 1,
      sym__expansion_body,
    STATE(229), 1,
      sym_line_continuation,
  [5010] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      sym_variable,
    STATE(92), 1,
      sym__expansion_body,
    STATE(230), 1,
      sym_line_continuation,
  [5026] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      sym_variable,
    STATE(85), 1,
      sym__expansion_body,
    STATE(231), 1,
      sym_line_continuation,
  [5042] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      anon_sym_LF,
    STATE(232), 1,
      sym_line_continuation,
    ACTIONS(792), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [5056] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(796), 1,
      sym_variable,
    STATE(175), 1,
      sym__expansion_body,
    STATE(233), 1,
      sym_line_continuation,
  [5072] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(796), 1,
      sym_variable,
    STATE(160), 1,
      sym__expansion_body,
    STATE(234), 1,
      sym_line_continuation,
  [5088] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(798), 1,
      anon_sym_LF,
    ACTIONS(800), 1,
      sym__non_newline_whitespace,
    STATE(235), 1,
      sym_line_continuation,
    STATE(265), 1,
      aux_sym_volume_instruction_repeat1,
  [5104] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      anon_sym_LF,
    STATE(236), 1,
      sym_line_continuation,
    ACTIONS(804), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [5118] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    ACTIONS(808), 1,
      sym_variable,
    STATE(237), 1,
      sym_line_continuation,
    STATE(260), 1,
      sym__expansion_body,
  [5134] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(812), 1,
      sym_variable,
    STATE(59), 1,
      sym__expansion_body,
    STATE(238), 1,
      sym_line_continuation,
  [5150] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    ACTIONS(808), 1,
      sym_variable,
    STATE(239), 1,
      sym_line_continuation,
    STATE(254), 1,
      sym__expansion_body,
  [5166] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(814), 1,
      anon_sym_LBRACE,
    ACTIONS(816), 1,
      sym_variable,
    STATE(193), 1,
      sym__expansion_body,
    STATE(240), 1,
      sym_line_continuation,
  [5182] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(497), 1,
      aux_sym_path_token1,
    STATE(241), 1,
      sym_line_continuation,
    ACTIONS(495), 2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [5196] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(814), 1,
      anon_sym_LBRACE,
    ACTIONS(816), 1,
      sym_variable,
    STATE(185), 1,
      sym__expansion_body,
    STATE(242), 1,
      sym_line_continuation,
  [5212] = 5,
    ACTIONS(818), 1,
      anon_sym_LF,
    ACTIONS(820), 1,
      anon_sym_BSLASH_LF,
    STATE(30), 1,
      sym_required_line_continuation,
    STATE(243), 1,
      sym_line_continuation,
    STATE(247), 1,
      aux_sym_shell_command_repeat2,
  [5228] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(290), 1,
      anon_sym_LF,
    STATE(244), 1,
      sym_line_continuation,
    ACTIONS(292), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [5242] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(228), 1,
      anon_sym_LF,
    STATE(245), 1,
      sym_line_continuation,
    ACTIONS(230), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [5256] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(822), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      sym_variable,
    STATE(147), 1,
      sym__expansion_body,
    STATE(246), 1,
      sym_line_continuation,
  [5272] = 4,
    ACTIONS(826), 1,
      anon_sym_LF,
    ACTIONS(828), 1,
      anon_sym_BSLASH_LF,
    STATE(30), 1,
      sym_required_line_continuation,
    STATE(247), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [5286] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
    ACTIONS(833), 1,
      sym_variable,
    STATE(205), 1,
      sym__expansion_body,
    STATE(248), 1,
      sym_line_continuation,
  [5302] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(835), 1,
      anon_sym_COMMA2,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_json_string_array_repeat1,
    STATE(249), 1,
      sym_line_continuation,
  [5318] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
    ACTIONS(833), 1,
      sym_variable,
    STATE(212), 1,
      sym__expansion_body,
    STATE(250), 1,
      sym_line_continuation,
  [5334] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(839), 1,
      anon_sym_LF,
    STATE(251), 1,
      sym_line_continuation,
    ACTIONS(841), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [5348] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(843), 1,
      anon_sym_DQUOTE,
    STATE(252), 1,
      sym_line_continuation,
    ACTIONS(845), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [5362] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      aux_sym_path_token2,
    STATE(253), 1,
      sym_line_continuation,
    ACTIONS(298), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5376] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(366), 1,
      aux_sym_path_token2,
    STATE(254), 1,
      sym_line_continuation,
    ACTIONS(364), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5390] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      aux_sym_path_token2,
    STATE(255), 1,
      sym_line_continuation,
    ACTIONS(262), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5404] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(847), 1,
      anon_sym_LF,
    STATE(256), 1,
      sym_line_continuation,
    ACTIONS(849), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [5418] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(851), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(853), 1,
      anon_sym_DASH_DASH,
    STATE(257), 1,
      sym_line_continuation,
    STATE(326), 1,
      sym_param,
  [5434] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(853), 1,
      anon_sym_DASH_DASH,
    ACTIONS(855), 1,
      sym__version_instruction_semver,
    STATE(258), 1,
      sym_line_continuation,
    STATE(319), 1,
      sym_param,
  [5450] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    ACTIONS(859), 1,
      sym_variable,
    STATE(259), 1,
      sym_line_continuation,
    STATE(273), 1,
      sym__expansion_body,
  [5466] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      aux_sym_path_token2,
    STATE(260), 1,
      sym_line_continuation,
    ACTIONS(228), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5480] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    ACTIONS(859), 1,
      sym_variable,
    STATE(261), 1,
      sym_line_continuation,
    STATE(281), 1,
      sym__expansion_body,
  [5496] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(812), 1,
      sym_variable,
    STATE(32), 1,
      sym__expansion_body,
    STATE(262), 1,
      sym_line_continuation,
  [5512] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(580), 1,
      anon_sym_DOLLAR,
    ACTIONS(582), 1,
      aux_sym_earthfile_local_path_token1,
    STATE(80), 1,
      sym_expansion,
    STATE(263), 1,
      sym_line_continuation,
  [5528] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(292), 1,
      aux_sym_path_token2,
    STATE(264), 1,
      sym_line_continuation,
    ACTIONS(290), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5542] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(800), 1,
      sym__non_newline_whitespace,
    ACTIONS(861), 1,
      anon_sym_LF,
    STATE(216), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(265), 1,
      sym_line_continuation,
  [5558] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(863), 1,
      anon_sym_LF,
    STATE(266), 1,
      sym_line_continuation,
    ACTIONS(865), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [5572] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(867), 1,
      anon_sym_LF,
    STATE(267), 1,
      sym_line_continuation,
    ACTIONS(869), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DASH_DASH,
  [5586] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(871), 1,
      anon_sym_EQ,
    STATE(268), 1,
      sym_line_continuation,
    ACTIONS(437), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5600] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(671), 1,
      aux_sym_path_token2,
    STATE(269), 1,
      sym_line_continuation,
    ACTIONS(673), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5614] = 5,
    ACTIONS(820), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(873), 1,
      anon_sym_LF,
    STATE(30), 1,
      sym_required_line_continuation,
    STATE(270), 1,
      sym_line_continuation,
    STATE(283), 1,
      aux_sym_shell_command_repeat2,
  [5630] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(875), 1,
      anon_sym_LBRACE,
    ACTIONS(877), 1,
      sym_variable,
    STATE(245), 1,
      sym__expansion_body,
    STATE(271), 1,
      sym_line_continuation,
  [5646] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(292), 1,
      aux_sym_path_token2,
    STATE(272), 1,
      sym_line_continuation,
    ACTIONS(290), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5660] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      aux_sym_path_token2,
    STATE(273), 1,
      sym_line_continuation,
    ACTIONS(228), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5674] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      aux_sym_path_token2,
    STATE(274), 1,
      sym_line_continuation,
    ACTIONS(262), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5688] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(590), 1,
      anon_sym_DOLLAR,
    ACTIONS(592), 1,
      aux_sym_earthfile_local_path_token1,
    STATE(24), 1,
      sym_expansion,
    STATE(275), 1,
      sym_line_continuation,
  [5704] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(881), 1,
      aux_sym_earthfile_local_path_token1,
    STATE(276), 1,
      sym_line_continuation,
    ACTIONS(879), 2,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_SLASH,
  [5718] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    ACTIONS(885), 1,
      anon_sym_DQUOTE,
    STATE(277), 1,
      sym_line_continuation,
    STATE(282), 1,
      sym_json_string,
  [5734] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(278), 1,
      sym_line_continuation,
    ACTIONS(262), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5746] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(671), 1,
      aux_sym_path_token2,
    STATE(279), 1,
      sym_line_continuation,
    ACTIONS(673), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5760] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(437), 1,
      sym__version_instruction_semver,
    ACTIONS(439), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(887), 1,
      anon_sym_EQ,
    STATE(280), 1,
      sym_line_continuation,
  [5776] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(366), 1,
      aux_sym_path_token2,
    STATE(281), 1,
      sym_line_continuation,
    ACTIONS(364), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5790] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(835), 1,
      anon_sym_COMMA2,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      aux_sym_json_string_array_repeat1,
    STATE(282), 1,
      sym_line_continuation,
  [5806] = 5,
    ACTIONS(820), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(891), 1,
      anon_sym_LF,
    STATE(30), 1,
      sym_required_line_continuation,
    STATE(247), 1,
      aux_sym_shell_command_repeat2,
    STATE(283), 1,
      sym_line_continuation,
  [5822] = 5,
    ACTIONS(820), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(891), 1,
      anon_sym_LF,
    STATE(30), 1,
      sym_required_line_continuation,
    STATE(243), 1,
      aux_sym_shell_command_repeat2,
    STATE(284), 1,
      sym_line_continuation,
  [5838] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      aux_sym_path_token2,
    STATE(285), 1,
      sym_line_continuation,
    ACTIONS(298), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [5852] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(469), 1,
      aux_sym_path_token1,
    STATE(286), 1,
      sym_line_continuation,
    ACTIONS(467), 2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [5866] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(287), 1,
      sym_line_continuation,
    ACTIONS(364), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5878] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(893), 1,
      anon_sym_LF,
    ACTIONS(895), 1,
      aux_sym_from_instruction_token2,
    STATE(288), 1,
      sym_line_continuation,
  [5891] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(897), 1,
      aux_sym_mount_param_param_token1,
    STATE(44), 1,
      sym_mount_param_param,
    STATE(289), 1,
      sym_line_continuation,
  [5904] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(586), 1,
      aux_sym_from_instruction_token2,
    STATE(290), 1,
      sym_line_continuation,
  [5917] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(677), 1,
      aux_sym__env_key_token1,
    STATE(291), 1,
      sym_line_continuation,
  [5930] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(899), 1,
      aux_sym_param_token1,
    ACTIONS(901), 1,
      anon_sym_mount,
    STATE(292), 1,
      sym_line_continuation,
  [5943] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      sym__version_instruction_semver,
    ACTIONS(469), 1,
      aux_sym_arg_instruction_token2,
    STATE(293), 1,
      sym_line_continuation,
  [5956] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_LF,
    ACTIONS(687), 1,
      aux_sym__env_key_token1,
    STATE(294), 1,
      sym_line_continuation,
  [5969] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(549), 1,
      aux_sym_from_instruction_token2,
    STATE(295), 1,
      sym_line_continuation,
  [5982] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(296), 1,
      sym_line_continuation,
    ACTIONS(495), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5993] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(903), 1,
      aux_sym_path_token1,
    ACTIONS(905), 1,
      anon_sym_DOLLAR,
    STATE(297), 1,
      sym_line_continuation,
  [6006] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(907), 1,
      anon_sym_LF,
    ACTIONS(909), 1,
      sym__non_newline_whitespace,
    STATE(298), 1,
      sym_line_continuation,
  [6019] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(911), 1,
      anon_sym_LF,
    ACTIONS(913), 1,
      aux_sym_from_instruction_token2,
    STATE(299), 1,
      sym_line_continuation,
  [6032] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(300), 1,
      sym_line_continuation,
    ACTIONS(467), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [6043] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(915), 1,
      anon_sym_LF,
    ACTIONS(917), 1,
      anon_sym_EQ,
    STATE(301), 1,
      sym_line_continuation,
  [6056] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(647), 1,
      anon_sym_LF,
    ACTIONS(649), 1,
      aux_sym__env_key_token1,
    STATE(302), 1,
      sym_line_continuation,
  [6069] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(663), 1,
      anon_sym_LF,
    ACTIONS(665), 1,
      aux_sym__env_key_token1,
    STATE(303), 1,
      sym_line_continuation,
  [6082] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(885), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      sym_line_continuation,
    STATE(313), 1,
      sym_json_string,
  [6095] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(305), 1,
      sym_line_continuation,
    ACTIONS(919), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6106] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(921), 1,
      anon_sym_LF,
    ACTIONS(923), 1,
      aux_sym_from_instruction_token2,
    STATE(306), 1,
      sym_line_continuation,
  [6119] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(925), 1,
      anon_sym_LF,
    ACTIONS(927), 1,
      aux_sym__env_key_token1,
    STATE(307), 1,
      sym_line_continuation,
  [6132] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(929), 1,
      anon_sym_LF,
    ACTIONS(931), 1,
      aux_sym_from_instruction_token2,
    STATE(308), 1,
      sym_line_continuation,
  [6145] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(909), 1,
      sym__non_newline_whitespace,
    ACTIONS(933), 1,
      anon_sym_LF,
    STATE(309), 1,
      sym_line_continuation,
  [6158] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(935), 1,
      anon_sym_LF,
    ACTIONS(937), 1,
      anon_sym_EQ,
    STATE(310), 1,
      sym_line_continuation,
  [6171] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(939), 1,
      anon_sym_LF,
    ACTIONS(941), 1,
      anon_sym_COLON,
    STATE(311), 1,
      sym_line_continuation,
  [6184] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(897), 1,
      aux_sym_mount_param_param_token1,
    STATE(78), 1,
      sym_mount_param_param,
    STATE(312), 1,
      sym_line_continuation,
  [6197] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(313), 1,
      sym_line_continuation,
    ACTIONS(780), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6208] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(943), 1,
      anon_sym_EQ,
    ACTIONS(945), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(314), 1,
      sym_line_continuation,
  [6221] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(315), 1,
      sym_line_continuation,
    ACTIONS(947), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6232] = 4,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(949), 1,
      anon_sym_LF,
    ACTIONS(951), 1,
      aux_sym__env_key_token1,
    STATE(316), 1,
      sym_line_continuation,
  [6245] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(317), 1,
      sym_line_continuation,
    ACTIONS(953), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [6256] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    STATE(318), 1,
      sym_line_continuation,
    ACTIONS(748), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [6267] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(955), 1,
      sym__version_instruction_semver,
    STATE(319), 1,
      sym_line_continuation,
  [6277] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(957), 1,
      anon_sym_LF,
    STATE(320), 1,
      sym_line_continuation,
  [6287] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(959), 1,
      anon_sym_LF,
    STATE(321), 1,
      sym_line_continuation,
  [6297] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(961), 1,
      anon_sym_LF,
    STATE(322), 1,
      sym_line_continuation,
  [6307] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(963), 1,
      sym__non_newline_whitespace,
    STATE(323), 1,
      sym_line_continuation,
  [6317] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(965), 1,
      anon_sym_LF,
    STATE(324), 1,
      sym_line_continuation,
  [6327] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(967), 1,
      anon_sym_LF,
    STATE(325), 1,
      sym_line_continuation,
  [6337] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(969), 1,
      aux_sym_arg_instruction_token2,
    STATE(326), 1,
      sym_line_continuation,
  [6347] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(971), 1,
      aux_sym_target_token1,
    STATE(327), 1,
      sym_line_continuation,
  [6357] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(973), 1,
      anon_sym_LF,
    STATE(328), 1,
      sym_line_continuation,
  [6367] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(975), 1,
      anon_sym_SLASH,
    STATE(329), 1,
      sym_line_continuation,
  [6377] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(977), 1,
      anon_sym_LF,
    STATE(330), 1,
      sym_line_continuation,
  [6387] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(979), 1,
      anon_sym_EQ,
    STATE(331), 1,
      sym_line_continuation,
  [6397] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(981), 1,
      anon_sym_LF,
    STATE(332), 1,
      sym_line_continuation,
  [6407] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(983), 1,
      anon_sym_LF,
    STATE(333), 1,
      sym_line_continuation,
  [6417] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(985), 1,
      anon_sym_LF,
    STATE(334), 1,
      sym_line_continuation,
  [6427] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(987), 1,
      anon_sym_LF,
    STATE(335), 1,
      sym_line_continuation,
  [6437] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(989), 1,
      aux_sym_build_arg_token1,
    STATE(336), 1,
      sym_line_continuation,
  [6447] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(991), 1,
      aux_sym__anon_comment_token1,
    STATE(337), 1,
      sym_line_continuation,
  [6457] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(993), 1,
      anon_sym_EQ,
    STATE(338), 1,
      sym_line_continuation,
  [6467] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(995), 1,
      anon_sym_LF,
    STATE(339), 1,
      sym_line_continuation,
  [6477] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(997), 1,
      anon_sym_LF,
    STATE(340), 1,
      sym_line_continuation,
  [6487] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(999), 1,
      anon_sym_LF,
    STATE(341), 1,
      sym_line_continuation,
  [6497] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_EQ,
    STATE(342), 1,
      sym_line_continuation,
  [6507] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      anon_sym_EQ,
    STATE(343), 1,
      sym_line_continuation,
  [6517] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1001), 1,
      aux_sym_param_token1,
    STATE(344), 1,
      sym_line_continuation,
  [6527] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(943), 1,
      anon_sym_EQ,
    STATE(345), 1,
      sym_line_continuation,
  [6537] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1003), 1,
      aux_sym_target_token1,
    STATE(346), 1,
      sym_line_continuation,
  [6547] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1005), 1,
      aux_sym_param_token1,
    STATE(347), 1,
      sym_line_continuation,
  [6557] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1007), 1,
      anon_sym_LF,
    STATE(348), 1,
      sym_line_continuation,
  [6567] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1009), 1,
      aux_sym__expansion_body_token1,
    STATE(349), 1,
      sym_line_continuation,
  [6577] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1011), 1,
      anon_sym_LF,
    STATE(350), 1,
      sym_line_continuation,
  [6587] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1013), 1,
      ts_builtin_sym_end,
    STATE(351), 1,
      sym_line_continuation,
  [6597] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1015), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      sym_line_continuation,
  [6607] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1017), 1,
      aux_sym_param_token2,
    STATE(353), 1,
      sym_line_continuation,
  [6617] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1019), 1,
      anon_sym_LF,
    STATE(354), 1,
      sym_line_continuation,
  [6627] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1021), 1,
      aux_sym_project_instruction_token2,
    STATE(355), 1,
      sym_line_continuation,
  [6637] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1023), 1,
      aux_sym_param_token1,
    STATE(356), 1,
      sym_line_continuation,
  [6647] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1025), 1,
      aux_sym_project_instruction_token2,
    STATE(357), 1,
      sym_line_continuation,
  [6657] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    STATE(358), 1,
      sym_line_continuation,
  [6667] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1029), 1,
      anon_sym_LF,
    STATE(359), 1,
      sym_line_continuation,
  [6677] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1031), 1,
      aux_sym_param_token2,
    STATE(360), 1,
      sym_line_continuation,
  [6687] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      sym_line_continuation,
  [6697] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1035), 1,
      aux_sym_param_token2,
    STATE(362), 1,
      sym_line_continuation,
  [6707] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1037), 1,
      anon_sym_LF,
    STATE(363), 1,
      sym_line_continuation,
  [6717] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1039), 1,
      aux_sym__expansion_body_token1,
    STATE(364), 1,
      sym_line_continuation,
  [6727] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1041), 1,
      aux_sym_param_token1,
    STATE(365), 1,
      sym_line_continuation,
  [6737] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1043), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      sym_line_continuation,
  [6747] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1045), 1,
      aux_sym_param_token2,
    STATE(367), 1,
      sym_line_continuation,
  [6757] = 3,
    ACTIONS(826), 1,
      anon_sym_LF,
    ACTIONS(1047), 1,
      anon_sym_BSLASH_LF,
    STATE(368), 1,
      sym_line_continuation,
  [6767] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(953), 1,
      anon_sym_EQ,
    STATE(369), 1,
      sym_line_continuation,
  [6777] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1049), 1,
      anon_sym_RBRACE,
    STATE(370), 1,
      sym_line_continuation,
  [6787] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1051), 1,
      aux_sym_param_token2,
    STATE(371), 1,
      sym_line_continuation,
  [6797] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(647), 1,
      anon_sym_EQ,
    STATE(372), 1,
      sym_line_continuation,
  [6807] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(663), 1,
      anon_sym_EQ,
    STATE(373), 1,
      sym_line_continuation,
  [6817] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1053), 1,
      anon_sym_RBRACE,
    STATE(374), 1,
      sym_line_continuation,
  [6827] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1055), 1,
      anon_sym_LF,
    STATE(375), 1,
      sym_line_continuation,
  [6837] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1057), 1,
      aux_sym_mount_param_param_token1,
    STATE(376), 1,
      sym_line_continuation,
  [6847] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1059), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      sym_line_continuation,
  [6857] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1061), 1,
      anon_sym_LF,
    STATE(378), 1,
      sym_line_continuation,
  [6867] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1063), 1,
      anon_sym_LF,
    STATE(379), 1,
      sym_line_continuation,
  [6877] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1065), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      sym_line_continuation,
  [6887] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1067), 1,
      anon_sym_LF,
    STATE(381), 1,
      sym_line_continuation,
  [6897] = 3,
    ACTIONS(1069), 1,
      anon_sym_LF,
    ACTIONS(1071), 1,
      anon_sym_BSLASH_LF,
    STATE(382), 1,
      sym_line_continuation,
  [6907] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1073), 1,
      anon_sym_RBRACE,
    STATE(383), 1,
      sym_line_continuation,
  [6917] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1075), 1,
      anon_sym_LF,
    STATE(384), 1,
      sym_line_continuation,
  [6927] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1077), 1,
      anon_sym_EQ,
    STATE(385), 1,
      sym_line_continuation,
  [6937] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1079), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      sym_line_continuation,
  [6947] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1081), 1,
      anon_sym_LF,
    STATE(387), 1,
      sym_line_continuation,
  [6957] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1083), 1,
      anon_sym_RBRACE,
    STATE(388), 1,
      sym_line_continuation,
  [6967] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1085), 1,
      aux_sym_param_token2,
    STATE(389), 1,
      sym_line_continuation,
  [6977] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1087), 1,
      anon_sym_RBRACE,
    STATE(390), 1,
      sym_line_continuation,
  [6987] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1089), 1,
      anon_sym_LF,
    STATE(391), 1,
      sym_line_continuation,
  [6997] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      sym_line_continuation,
  [7007] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1093), 1,
      anon_sym_LF,
    STATE(393), 1,
      sym_line_continuation,
  [7017] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1095), 1,
      anon_sym_RBRACE,
    STATE(394), 1,
      sym_line_continuation,
  [7027] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1097), 1,
      anon_sym_RBRACE,
    STATE(395), 1,
      sym_line_continuation,
  [7037] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1099), 1,
      aux_sym__expansion_body_token1,
    STATE(396), 1,
      sym_line_continuation,
  [7047] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1101), 1,
      aux_sym__expansion_body_token1,
    STATE(397), 1,
      sym_line_continuation,
  [7057] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1103), 1,
      aux_sym__expansion_body_token1,
    STATE(398), 1,
      sym_line_continuation,
  [7067] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1105), 1,
      aux_sym__expansion_body_token1,
    STATE(399), 1,
      sym_line_continuation,
  [7077] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1107), 1,
      aux_sym__expansion_body_token1,
    STATE(400), 1,
      sym_line_continuation,
  [7087] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1109), 1,
      aux_sym__expansion_body_token1,
    STATE(401), 1,
      sym_line_continuation,
  [7097] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1111), 1,
      aux_sym__expansion_body_token1,
    STATE(402), 1,
      sym_line_continuation,
  [7107] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1113), 1,
      aux_sym__expansion_body_token1,
    STATE(403), 1,
      sym_line_continuation,
  [7117] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1115), 1,
      aux_sym__expansion_body_token1,
    STATE(404), 1,
      sym_line_continuation,
  [7127] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1117), 1,
      aux_sym__expansion_body_token1,
    STATE(405), 1,
      sym_line_continuation,
  [7137] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1119), 1,
      aux_sym__expansion_body_token1,
    STATE(406), 1,
      sym_line_continuation,
  [7147] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1121), 1,
      aux_sym__expansion_body_token1,
    STATE(407), 1,
      sym_line_continuation,
  [7157] = 3,
    ACTIONS(129), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1123), 1,
      aux_sym__expansion_body_token1,
    STATE(408), 1,
      sym_line_continuation,
  [7167] = 1,
    ACTIONS(1125), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 253,
  [SMALL_STATE(7)] = 302,
  [SMALL_STATE(8)] = 352,
  [SMALL_STATE(9)] = 402,
  [SMALL_STATE(10)] = 447,
  [SMALL_STATE(11)] = 492,
  [SMALL_STATE(12)] = 532,
  [SMALL_STATE(13)] = 569,
  [SMALL_STATE(14)] = 606,
  [SMALL_STATE(15)] = 636,
  [SMALL_STATE(16)] = 668,
  [SMALL_STATE(17)] = 702,
  [SMALL_STATE(18)] = 734,
  [SMALL_STATE(19)] = 768,
  [SMALL_STATE(20)] = 802,
  [SMALL_STATE(21)] = 836,
  [SMALL_STATE(22)] = 865,
  [SMALL_STATE(23)] = 900,
  [SMALL_STATE(24)] = 931,
  [SMALL_STATE(25)] = 961,
  [SMALL_STATE(26)] = 991,
  [SMALL_STATE(27)] = 1019,
  [SMALL_STATE(28)] = 1043,
  [SMALL_STATE(29)] = 1073,
  [SMALL_STATE(30)] = 1103,
  [SMALL_STATE(31)] = 1133,
  [SMALL_STATE(32)] = 1167,
  [SMALL_STATE(33)] = 1186,
  [SMALL_STATE(34)] = 1217,
  [SMALL_STATE(35)] = 1244,
  [SMALL_STATE(36)] = 1273,
  [SMALL_STATE(37)] = 1296,
  [SMALL_STATE(38)] = 1315,
  [SMALL_STATE(39)] = 1334,
  [SMALL_STATE(40)] = 1361,
  [SMALL_STATE(41)] = 1390,
  [SMALL_STATE(42)] = 1411,
  [SMALL_STATE(43)] = 1440,
  [SMALL_STATE(44)] = 1459,
  [SMALL_STATE(45)] = 1482,
  [SMALL_STATE(46)] = 1501,
  [SMALL_STATE(47)] = 1528,
  [SMALL_STATE(48)] = 1555,
  [SMALL_STATE(49)] = 1582,
  [SMALL_STATE(50)] = 1611,
  [SMALL_STATE(51)] = 1640,
  [SMALL_STATE(52)] = 1669,
  [SMALL_STATE(53)] = 1698,
  [SMALL_STATE(54)] = 1727,
  [SMALL_STATE(55)] = 1756,
  [SMALL_STATE(56)] = 1785,
  [SMALL_STATE(57)] = 1814,
  [SMALL_STATE(58)] = 1845,
  [SMALL_STATE(59)] = 1868,
  [SMALL_STATE(60)] = 1887,
  [SMALL_STATE(61)] = 1916,
  [SMALL_STATE(62)] = 1944,
  [SMALL_STATE(63)] = 1962,
  [SMALL_STATE(64)] = 1988,
  [SMALL_STATE(65)] = 2006,
  [SMALL_STATE(66)] = 2028,
  [SMALL_STATE(67)] = 2056,
  [SMALL_STATE(68)] = 2074,
  [SMALL_STATE(69)] = 2100,
  [SMALL_STATE(70)] = 2126,
  [SMALL_STATE(71)] = 2154,
  [SMALL_STATE(72)] = 2180,
  [SMALL_STATE(73)] = 2208,
  [SMALL_STATE(74)] = 2226,
  [SMALL_STATE(75)] = 2252,
  [SMALL_STATE(76)] = 2278,
  [SMALL_STATE(77)] = 2298,
  [SMALL_STATE(78)] = 2316,
  [SMALL_STATE(79)] = 2334,
  [SMALL_STATE(80)] = 2352,
  [SMALL_STATE(81)] = 2380,
  [SMALL_STATE(82)] = 2400,
  [SMALL_STATE(83)] = 2424,
  [SMALL_STATE(84)] = 2452,
  [SMALL_STATE(85)] = 2478,
  [SMALL_STATE(86)] = 2495,
  [SMALL_STATE(87)] = 2518,
  [SMALL_STATE(88)] = 2535,
  [SMALL_STATE(89)] = 2560,
  [SMALL_STATE(90)] = 2577,
  [SMALL_STATE(91)] = 2602,
  [SMALL_STATE(92)] = 2619,
  [SMALL_STATE(93)] = 2636,
  [SMALL_STATE(94)] = 2661,
  [SMALL_STATE(95)] = 2684,
  [SMALL_STATE(96)] = 2701,
  [SMALL_STATE(97)] = 2718,
  [SMALL_STATE(98)] = 2743,
  [SMALL_STATE(99)] = 2764,
  [SMALL_STATE(100)] = 2789,
  [SMALL_STATE(101)] = 2806,
  [SMALL_STATE(102)] = 2829,
  [SMALL_STATE(103)] = 2852,
  [SMALL_STATE(104)] = 2877,
  [SMALL_STATE(105)] = 2902,
  [SMALL_STATE(106)] = 2927,
  [SMALL_STATE(107)] = 2952,
  [SMALL_STATE(108)] = 2969,
  [SMALL_STATE(109)] = 2986,
  [SMALL_STATE(110)] = 3004,
  [SMALL_STATE(111)] = 3020,
  [SMALL_STATE(112)] = 3042,
  [SMALL_STATE(113)] = 3058,
  [SMALL_STATE(114)] = 3080,
  [SMALL_STATE(115)] = 3096,
  [SMALL_STATE(116)] = 3116,
  [SMALL_STATE(117)] = 3138,
  [SMALL_STATE(118)] = 3158,
  [SMALL_STATE(119)] = 3178,
  [SMALL_STATE(120)] = 3198,
  [SMALL_STATE(121)] = 3220,
  [SMALL_STATE(122)] = 3236,
  [SMALL_STATE(123)] = 3252,
  [SMALL_STATE(124)] = 3274,
  [SMALL_STATE(125)] = 3294,
  [SMALL_STATE(126)] = 3316,
  [SMALL_STATE(127)] = 3334,
  [SMALL_STATE(128)] = 3350,
  [SMALL_STATE(129)] = 3366,
  [SMALL_STATE(130)] = 3386,
  [SMALL_STATE(131)] = 3404,
  [SMALL_STATE(132)] = 3420,
  [SMALL_STATE(133)] = 3436,
  [SMALL_STATE(134)] = 3452,
  [SMALL_STATE(135)] = 3474,
  [SMALL_STATE(136)] = 3496,
  [SMALL_STATE(137)] = 3516,
  [SMALL_STATE(138)] = 3536,
  [SMALL_STATE(139)] = 3556,
  [SMALL_STATE(140)] = 3578,
  [SMALL_STATE(141)] = 3600,
  [SMALL_STATE(142)] = 3620,
  [SMALL_STATE(143)] = 3640,
  [SMALL_STATE(144)] = 3656,
  [SMALL_STATE(145)] = 3678,
  [SMALL_STATE(146)] = 3700,
  [SMALL_STATE(147)] = 3716,
  [SMALL_STATE(148)] = 3732,
  [SMALL_STATE(149)] = 3752,
  [SMALL_STATE(150)] = 3768,
  [SMALL_STATE(151)] = 3784,
  [SMALL_STATE(152)] = 3806,
  [SMALL_STATE(153)] = 3822,
  [SMALL_STATE(154)] = 3837,
  [SMALL_STATE(155)] = 3856,
  [SMALL_STATE(156)] = 3871,
  [SMALL_STATE(157)] = 3890,
  [SMALL_STATE(158)] = 3909,
  [SMALL_STATE(159)] = 3924,
  [SMALL_STATE(160)] = 3939,
  [SMALL_STATE(161)] = 3954,
  [SMALL_STATE(162)] = 3973,
  [SMALL_STATE(163)] = 3986,
  [SMALL_STATE(164)] = 3999,
  [SMALL_STATE(165)] = 4014,
  [SMALL_STATE(166)] = 4029,
  [SMALL_STATE(167)] = 4048,
  [SMALL_STATE(168)] = 4063,
  [SMALL_STATE(169)] = 4078,
  [SMALL_STATE(170)] = 4093,
  [SMALL_STATE(171)] = 4108,
  [SMALL_STATE(172)] = 4123,
  [SMALL_STATE(173)] = 4140,
  [SMALL_STATE(174)] = 4159,
  [SMALL_STATE(175)] = 4174,
  [SMALL_STATE(176)] = 4189,
  [SMALL_STATE(177)] = 4204,
  [SMALL_STATE(178)] = 4219,
  [SMALL_STATE(179)] = 4234,
  [SMALL_STATE(180)] = 4251,
  [SMALL_STATE(181)] = 4266,
  [SMALL_STATE(182)] = 4285,
  [SMALL_STATE(183)] = 4298,
  [SMALL_STATE(184)] = 4313,
  [SMALL_STATE(185)] = 4332,
  [SMALL_STATE(186)] = 4345,
  [SMALL_STATE(187)] = 4358,
  [SMALL_STATE(188)] = 4375,
  [SMALL_STATE(189)] = 4390,
  [SMALL_STATE(190)] = 4403,
  [SMALL_STATE(191)] = 4418,
  [SMALL_STATE(192)] = 4433,
  [SMALL_STATE(193)] = 4448,
  [SMALL_STATE(194)] = 4461,
  [SMALL_STATE(195)] = 4476,
  [SMALL_STATE(196)] = 4491,
  [SMALL_STATE(197)] = 4508,
  [SMALL_STATE(198)] = 4521,
  [SMALL_STATE(199)] = 4536,
  [SMALL_STATE(200)] = 4551,
  [SMALL_STATE(201)] = 4564,
  [SMALL_STATE(202)] = 4579,
  [SMALL_STATE(203)] = 4596,
  [SMALL_STATE(204)] = 4615,
  [SMALL_STATE(205)] = 4628,
  [SMALL_STATE(206)] = 4643,
  [SMALL_STATE(207)] = 4660,
  [SMALL_STATE(208)] = 4679,
  [SMALL_STATE(209)] = 4698,
  [SMALL_STATE(210)] = 4717,
  [SMALL_STATE(211)] = 4736,
  [SMALL_STATE(212)] = 4751,
  [SMALL_STATE(213)] = 4766,
  [SMALL_STATE(214)] = 4780,
  [SMALL_STATE(215)] = 4794,
  [SMALL_STATE(216)] = 4806,
  [SMALL_STATE(217)] = 4820,
  [SMALL_STATE(218)] = 4832,
  [SMALL_STATE(219)] = 4848,
  [SMALL_STATE(220)] = 4864,
  [SMALL_STATE(221)] = 4880,
  [SMALL_STATE(222)] = 4892,
  [SMALL_STATE(223)] = 4908,
  [SMALL_STATE(224)] = 4924,
  [SMALL_STATE(225)] = 4940,
  [SMALL_STATE(226)] = 4952,
  [SMALL_STATE(227)] = 4964,
  [SMALL_STATE(228)] = 4980,
  [SMALL_STATE(229)] = 4994,
  [SMALL_STATE(230)] = 5010,
  [SMALL_STATE(231)] = 5026,
  [SMALL_STATE(232)] = 5042,
  [SMALL_STATE(233)] = 5056,
  [SMALL_STATE(234)] = 5072,
  [SMALL_STATE(235)] = 5088,
  [SMALL_STATE(236)] = 5104,
  [SMALL_STATE(237)] = 5118,
  [SMALL_STATE(238)] = 5134,
  [SMALL_STATE(239)] = 5150,
  [SMALL_STATE(240)] = 5166,
  [SMALL_STATE(241)] = 5182,
  [SMALL_STATE(242)] = 5196,
  [SMALL_STATE(243)] = 5212,
  [SMALL_STATE(244)] = 5228,
  [SMALL_STATE(245)] = 5242,
  [SMALL_STATE(246)] = 5256,
  [SMALL_STATE(247)] = 5272,
  [SMALL_STATE(248)] = 5286,
  [SMALL_STATE(249)] = 5302,
  [SMALL_STATE(250)] = 5318,
  [SMALL_STATE(251)] = 5334,
  [SMALL_STATE(252)] = 5348,
  [SMALL_STATE(253)] = 5362,
  [SMALL_STATE(254)] = 5376,
  [SMALL_STATE(255)] = 5390,
  [SMALL_STATE(256)] = 5404,
  [SMALL_STATE(257)] = 5418,
  [SMALL_STATE(258)] = 5434,
  [SMALL_STATE(259)] = 5450,
  [SMALL_STATE(260)] = 5466,
  [SMALL_STATE(261)] = 5480,
  [SMALL_STATE(262)] = 5496,
  [SMALL_STATE(263)] = 5512,
  [SMALL_STATE(264)] = 5528,
  [SMALL_STATE(265)] = 5542,
  [SMALL_STATE(266)] = 5558,
  [SMALL_STATE(267)] = 5572,
  [SMALL_STATE(268)] = 5586,
  [SMALL_STATE(269)] = 5600,
  [SMALL_STATE(270)] = 5614,
  [SMALL_STATE(271)] = 5630,
  [SMALL_STATE(272)] = 5646,
  [SMALL_STATE(273)] = 5660,
  [SMALL_STATE(274)] = 5674,
  [SMALL_STATE(275)] = 5688,
  [SMALL_STATE(276)] = 5704,
  [SMALL_STATE(277)] = 5718,
  [SMALL_STATE(278)] = 5734,
  [SMALL_STATE(279)] = 5746,
  [SMALL_STATE(280)] = 5760,
  [SMALL_STATE(281)] = 5776,
  [SMALL_STATE(282)] = 5790,
  [SMALL_STATE(283)] = 5806,
  [SMALL_STATE(284)] = 5822,
  [SMALL_STATE(285)] = 5838,
  [SMALL_STATE(286)] = 5852,
  [SMALL_STATE(287)] = 5866,
  [SMALL_STATE(288)] = 5878,
  [SMALL_STATE(289)] = 5891,
  [SMALL_STATE(290)] = 5904,
  [SMALL_STATE(291)] = 5917,
  [SMALL_STATE(292)] = 5930,
  [SMALL_STATE(293)] = 5943,
  [SMALL_STATE(294)] = 5956,
  [SMALL_STATE(295)] = 5969,
  [SMALL_STATE(296)] = 5982,
  [SMALL_STATE(297)] = 5993,
  [SMALL_STATE(298)] = 6006,
  [SMALL_STATE(299)] = 6019,
  [SMALL_STATE(300)] = 6032,
  [SMALL_STATE(301)] = 6043,
  [SMALL_STATE(302)] = 6056,
  [SMALL_STATE(303)] = 6069,
  [SMALL_STATE(304)] = 6082,
  [SMALL_STATE(305)] = 6095,
  [SMALL_STATE(306)] = 6106,
  [SMALL_STATE(307)] = 6119,
  [SMALL_STATE(308)] = 6132,
  [SMALL_STATE(309)] = 6145,
  [SMALL_STATE(310)] = 6158,
  [SMALL_STATE(311)] = 6171,
  [SMALL_STATE(312)] = 6184,
  [SMALL_STATE(313)] = 6197,
  [SMALL_STATE(314)] = 6208,
  [SMALL_STATE(315)] = 6221,
  [SMALL_STATE(316)] = 6232,
  [SMALL_STATE(317)] = 6245,
  [SMALL_STATE(318)] = 6256,
  [SMALL_STATE(319)] = 6267,
  [SMALL_STATE(320)] = 6277,
  [SMALL_STATE(321)] = 6287,
  [SMALL_STATE(322)] = 6297,
  [SMALL_STATE(323)] = 6307,
  [SMALL_STATE(324)] = 6317,
  [SMALL_STATE(325)] = 6327,
  [SMALL_STATE(326)] = 6337,
  [SMALL_STATE(327)] = 6347,
  [SMALL_STATE(328)] = 6357,
  [SMALL_STATE(329)] = 6367,
  [SMALL_STATE(330)] = 6377,
  [SMALL_STATE(331)] = 6387,
  [SMALL_STATE(332)] = 6397,
  [SMALL_STATE(333)] = 6407,
  [SMALL_STATE(334)] = 6417,
  [SMALL_STATE(335)] = 6427,
  [SMALL_STATE(336)] = 6437,
  [SMALL_STATE(337)] = 6447,
  [SMALL_STATE(338)] = 6457,
  [SMALL_STATE(339)] = 6467,
  [SMALL_STATE(340)] = 6477,
  [SMALL_STATE(341)] = 6487,
  [SMALL_STATE(342)] = 6497,
  [SMALL_STATE(343)] = 6507,
  [SMALL_STATE(344)] = 6517,
  [SMALL_STATE(345)] = 6527,
  [SMALL_STATE(346)] = 6537,
  [SMALL_STATE(347)] = 6547,
  [SMALL_STATE(348)] = 6557,
  [SMALL_STATE(349)] = 6567,
  [SMALL_STATE(350)] = 6577,
  [SMALL_STATE(351)] = 6587,
  [SMALL_STATE(352)] = 6597,
  [SMALL_STATE(353)] = 6607,
  [SMALL_STATE(354)] = 6617,
  [SMALL_STATE(355)] = 6627,
  [SMALL_STATE(356)] = 6637,
  [SMALL_STATE(357)] = 6647,
  [SMALL_STATE(358)] = 6657,
  [SMALL_STATE(359)] = 6667,
  [SMALL_STATE(360)] = 6677,
  [SMALL_STATE(361)] = 6687,
  [SMALL_STATE(362)] = 6697,
  [SMALL_STATE(363)] = 6707,
  [SMALL_STATE(364)] = 6717,
  [SMALL_STATE(365)] = 6727,
  [SMALL_STATE(366)] = 6737,
  [SMALL_STATE(367)] = 6747,
  [SMALL_STATE(368)] = 6757,
  [SMALL_STATE(369)] = 6767,
  [SMALL_STATE(370)] = 6777,
  [SMALL_STATE(371)] = 6787,
  [SMALL_STATE(372)] = 6797,
  [SMALL_STATE(373)] = 6807,
  [SMALL_STATE(374)] = 6817,
  [SMALL_STATE(375)] = 6827,
  [SMALL_STATE(376)] = 6837,
  [SMALL_STATE(377)] = 6847,
  [SMALL_STATE(378)] = 6857,
  [SMALL_STATE(379)] = 6867,
  [SMALL_STATE(380)] = 6877,
  [SMALL_STATE(381)] = 6887,
  [SMALL_STATE(382)] = 6897,
  [SMALL_STATE(383)] = 6907,
  [SMALL_STATE(384)] = 6917,
  [SMALL_STATE(385)] = 6927,
  [SMALL_STATE(386)] = 6937,
  [SMALL_STATE(387)] = 6947,
  [SMALL_STATE(388)] = 6957,
  [SMALL_STATE(389)] = 6967,
  [SMALL_STATE(390)] = 6977,
  [SMALL_STATE(391)] = 6987,
  [SMALL_STATE(392)] = 6997,
  [SMALL_STATE(393)] = 7007,
  [SMALL_STATE(394)] = 7017,
  [SMALL_STATE(395)] = 7027,
  [SMALL_STATE(396)] = 7037,
  [SMALL_STATE(397)] = 7047,
  [SMALL_STATE(398)] = 7057,
  [SMALL_STATE(399)] = 7067,
  [SMALL_STATE(400)] = 7077,
  [SMALL_STATE(401)] = 7087,
  [SMALL_STATE(402)] = 7097,
  [SMALL_STATE(403)] = 7107,
  [SMALL_STATE(404)] = 7117,
  [SMALL_STATE(405)] = 7127,
  [SMALL_STATE(406)] = 7137,
  [SMALL_STATE(407)] = 7147,
  [SMALL_STATE(408)] = 7157,
  [SMALL_STATE(409)] = 7167,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(257),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(359),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(258),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(357),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(238),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(38),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(222),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(79),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_earthfile_local_path, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_earthfile_local_path, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_earthfile_local_path, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_earthfile_local_path, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 2), SHIFT_REPEAT(231),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 2), SHIFT_REPEAT(108),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(292),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_earthfile_ref, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(229),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(143),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 19),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 19),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(246),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(114),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(114),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(312),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 15),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 15),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(163),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(242),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(220),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(152),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(331),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(50),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(137),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_instruction_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_instruction_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_instruction_repeat1, 2), SHIFT_REPEAT(347),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 12),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(337),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(234),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(183),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(224),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(168),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 2), SHIFT_REPEAT(219),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 2), SHIFT_REPEAT(155),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(163),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(242),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 2, .production_id = 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(170),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(250),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 15),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 15),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(269),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(261),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_instruction_repeat1, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_instruction_repeat1, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(271),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(109),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(279),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(239),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(218),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(221),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_earthfile_local_path_repeat2, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(112),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_earthfile_ref, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(190),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(190),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(369),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_instruction_repeat1, 2), SHIFT_REPEAT(344),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_instruction_repeat2, 2),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_instruction_repeat2, 2),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_from_instruction_repeat2, 2), SHIFT_REPEAT(336),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_instruction_repeat1, 2), SHIFT_REPEAT(97),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat1, 2), SHIFT_REPEAT(259),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_instruction, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_instruction, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 4),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 10),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 10),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_instruction_repeat1, 2), SHIFT_REPEAT(365),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(252),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat1, 2),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat1, 2), SHIFT_REPEAT(276),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_earthfile_local_path_repeat1, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_instruction, 4),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_instruction_repeat2, 1),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_instruction_repeat2, 1),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(166),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2), SHIFT_REPEAT(304),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 15),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 15),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [828] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(204),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 2),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_direct, 2),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_direct, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_earthfile_ref, 2),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_earthfile_ref, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_earthfile_local_path_repeat1, 1),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_earthfile_local_path_repeat1, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_instruction, 3),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_instruction_repeat1, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_instruction_repeat1, 2),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 7),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 11),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 11),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_instruction, 2),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_instruction, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 13),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [1013] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_instruction, 3),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 8),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 11),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6, .production_id = 18),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_instruction, 5, .production_id = 16),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 17),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [1071] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 16),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_instruction, 4, .production_id = 8),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_instruction, 4, .production_id = 14),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
