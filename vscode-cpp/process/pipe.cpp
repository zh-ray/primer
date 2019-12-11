#include <windows.h>
#include <stdio.h>

int main(void)
{
    HANDLE PipeHandle;
    //DWORD BytesRead;
    //CHAR buffer[1024] = {0};

    if ((PipeHandle = CreateNamedPipe("\\\\.\\Pipe\\mypipt",PIPE_ACCESS_DUPLEX,PIPE_TYPE_BYTE|PIPE_READMODE_BYTE,1,0,0,1000,NULL)) == INVALID_HANDLE_VALUE)
    {
        printf("CreateNamedPipe failed with error %x \n", GetLastError());
        return 0;
    }
    printf("Server is now running \n");

    if (ConnectNamedPipe(PipeHandle,NULL) == 0)
    {
        printf("ConnectNamedPipe failed with error %x \n", GetLastError());
        CloseHandle(PipeHandle);
        return 0;
    }
}