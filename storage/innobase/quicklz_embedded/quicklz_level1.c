#define QLZ_STREAMING_BUFFER 0
#define QLZ_COMPRESSION_LEVEL 1
#define qlz_size_decompressed innobase_qlz_size_decompressed1
#define qlz_size_compressed innobase_qlz_size_compressed1
#define qlz_compress innobase_qlz_compress1
#define qlz_decompress innobase_qlz_decompress1
#define qlz_get_setting innobase_qlz_get_setting1
#define qlz_state_compress innobase_qlz_state_compress1
#define qlz_state_decompress innobase_qlz_state_decompress1
#include "quicklz_embedded/quicklz.c"
