#ifndef LZF_H
#define LZF_H

unsigned int lzf_decompress(
    const void *  const in_data,
    unsigned int  in_len,
    void *        out_data, 
    unsigned int  out_len);

#endif
