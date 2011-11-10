/*
This file is part of SysVMsgQueue.

    SysVMsgQueue is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    SysVMsgQueue is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with SysVMsgQueue.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>

long msgqSize(int qid)
//---------------------
{
   struct msqid_ds status;

   memset(&status, 0, sizeof(status));
   if (msgctl(qid, IPC_STAT, &status))
      return -1;
   return status.msg_qnum;
}

long msgqLastReceive(int qid)
//------------------------
{
   struct msqid_ds status;

   memset(&status, 0, sizeof(status));
   if (msgctl(qid, IPC_STAT, &status))
      return -1;
   return status.msg_rtime;
}

long msgqLastSend(int qid)
//------------------------
{
   struct msqid_ds status;

   memset(&status, 0, sizeof(status));
   if (msgctl(qid, IPC_STAT, &status))
      return -1;
   return status.msg_stime;
}

