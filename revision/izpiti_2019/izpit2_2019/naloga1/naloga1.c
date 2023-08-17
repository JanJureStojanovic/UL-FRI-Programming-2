#include <stdio.h>

void count_color_components(const char *filename, int *counts) {

    FILE *input_file = fopen(filename, "rb");

    fseek(input_file, 0, SEEK_END);
    long file_size = ftell(input_file);
    rewind(input_file);

    int num_pixels = file_size / 3;

    int r_gt_0_g_0_b_0_count = 0;
    int r_0_g_gt_0_b_0_count = 0;
    int r_0_g_0_b_gt_0_count = 0;

    unsigned char pixel[3];

    for (int i = 0; i < num_pixels; i++) {
        fread(pixel, sizeof(unsigned char), 3, input_file);
        unsigned char r = pixel[0];
        unsigned char g = pixel[1];
        unsigned char b = pixel[2];

        if (r > 0 && g == 0 && b == 0) {
            r_gt_0_g_0_b_0_count++;
        } else if (r == 0 && g > 0 && b == 0) {
            r_0_g_gt_0_b_0_count++;
        } else if (r == 0 && g == 0 && b > 0) {
            r_0_g_0_b_gt_0_count++;
        }
    }

    fclose(input_file);

    counts[0] = r_gt_0_g_0_b_0_count;
    counts[1] = r_0_g_gt_0_b_0_count;
    counts[2] = r_0_g_0_b_gt_0_count;
}

void write_output(const char *filename, const int *counts) {

    FILE *output_file = fopen(filename, "w");

    for (int i = 0; i < 3; i++) {
        fprintf(output_file, "%d\n", counts[i]);
    }

    fclose(output_file);
}

int main() {
    char input_filename[21];
    int n;
    char output_filename[21];

    scanf("%s", input_filename);
    scanf("%d", &n);
    scanf("%s", output_filename);

    int counts[3];
    count_color_components(input_filename, counts);

    write_output(output_filename, counts);

    return 0;
}


