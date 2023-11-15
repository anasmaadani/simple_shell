#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>
#include <ctype.h>
#include <errno.h>
#include <sys/wait.h>


#define STORAGE_SIZE 1024
extern char **environ;


char *copy_str2(char *str_dest, const char *str_source2);
char **split_str2(char *inputed_string, const char *_delim, int *word_counter);
char *input_read2();
size_t lenstr_1(const char *inpt_string);
void free_word2(char **arr_ofwords, int n_ofwords);

int file_exit2(const char *path_of_file2);
char *_direct_pat2(const char *path_of_direc, const char *name_of_cmd);
char *copy_get2();

int _execute_fork2(char **array_cmd_args2,
char *input_ofusr,
char *name_ofshell2, int counter_ofcmd, int n);
char *my_path2(const char *cmd_name2);
void exe_cmd_withexecve2(char *cmod2, char **arrayy_ofword2);
void wait_kid_proce2(pid_t child_p_id2, int *Exit_status);
void _execute_bn2(char **array_cmd_args2);

char *cat_string2(char *dest_string,
const char *source_string);
char *_dup_str2(const char *Strings);
int cmp_str2(const char *first_String,
const char *second_String, size_t n_of_max_length);
int _atoy3(const char *string_convert2);

ssize_t the_get_line2(char **str,
size_t *output_SZ, FILE *reading_file);
int the_read_input2(char *input_ch);
void *the_re_allocation2(void *old_memo_ptr,
size_t new_memo_size2);
void the_buf_upto2(char **buf_, size_t *ptr_of_buff2,
char *new_bufdata, size_t curr_pos);
void *the_memry_copy2(void *dest_ptr, const void *res_ptr, size_t n_bytes);


int the_handle_cmd2(char **array_ofwrd2, char *User_inp,
char *my_shell_name, int counting_Cmd, int n);
void the_hand_env2(void);
int the_env_set2(const char *name_ofenv, const char *new_val, int env_flag);
int the_unsetenvs2(const char *name_ofenvire);

void the_cd_comend2(char **array_of_words);

char *the_env_vars2(const char *env_ofchars2, char **ptr_toenvire);
void the_error2(const char *msg_toprinterr2);
char *the_getdir2(const char *path_ofdirec);
char *the_handle_cwd2();
void the_swit_currdir2(const char *ptr_todirec);
void the_exe_commnde_withexecve(char *cmd, char **wordArray2);

int the_cmp_str2(const char *compared_ch, const char *chartocompare);


int the_exe_cmd2(char *input_strcmd2, char *name_ofprogram2, int _counter);

void the_print_errors2(char *err_counter2, char *name_ofprogram2,
char *cmd_name2d, char *err_msgouput);
int the_valid_word2(char *str_tobechecked);
char *the_int_to_string2(int n_ofInt);
void the_handle_signs2(int n_signal);
void the_handle_exits2(char **wordArray2,
char *uInput, char *shellN, int contre, int nX);
void the_exer2(char **array_ofstr, int contr, char *shell);
int the_digits2(int k);
#endif

