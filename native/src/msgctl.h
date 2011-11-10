#ifndef __MSGCTL_H
#define __MSGCTL_H

long msgqSize(int qid);
long msgqLastReceive(int qid);
long msgqLastSend(int qid);

#endif