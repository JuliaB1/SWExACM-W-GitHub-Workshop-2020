#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void help_options() {
	printf("--------------------------\n");
	printf("Executed with '--help':\n\n");
	printf("Supported arguments:\n");
	printf("routine\n");
	printf("surprise\n");
	printf("--------------------------\n");
}

int main(int argc, char* argv[]) {
	if(argc == 1) {
		fprintf(stderr, "Wrong number of operands. Exiting...\n");
		fprintf(stderr, "Run with `--help`\n");
		exit(1);
	}

	// Help options
	if(strncmp(argv[1], "--help", 6) == 0) {
		help_options();
		fprintf(stdout, "Run any of the specified options as follows: ./quarantineRoutine [OPTION]\n");
		fprintf(stdout, "Exiting...\n");
		exit(0);
	}

	if(strncmp(argv[1], "routine", 7) == 0) {
		fprintf(stdout, "8:00AM Wake Up\n");
		fprintf(stdout, "8:01AM Fall Asleep\n");
		fprintf(stdout, "10:00AM Wake Up Again\n");
		fprintf(stdout, "10:30AM Breakfast\n");
		fprintf(stdout, "11:45AM Work\n");
		fprintf(stdout, "12:00PM Reward hard work by watching Tiger King\n");
		fprintf(stdout, "3:00PM Reward hard work by watching a few TikToks\n");
		fprintf(stdout, "5:00PM Nap #1\n");
		fprintf(stdout, "7:00PM Watch tutorial on dalgona coffee/make bread\n");
		fprintf(stdout, "8:00PM Nap #2\n");
		fprintf(stdout, "10:00PM Dinner\n");
		fprintf(stdout, "10:30PM More Tiger King\n");
		fprintf(stdout, "12:00AM Dinner #2? Breakfast? Time doesn't exist anymore\n");
		fprintf(stdout, "1:00AM More TikToks\n");
		fprintf(stdout, "2:00AM Sleep\n");
	}

	if(strncmp(argv[1], "surprise", 8) == 0) {
		char** ptr = NULL;
		*ptr = "my productivity";
	}

	if(strncmp(argv[1], "up2you", 6) == 0) {
		fprintf(stdout, "hi\n");
	}
}
