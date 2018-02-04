#include <MonoGlobal.h>
#include <string.h>

void taskProcImage(UArg a0)
{
        VLIB_CCHandle ccHandle;
        double points[3][TARGET_NUM];
        Pose pose = {{1/0,1/0,1/0},{1/0,1/0,1/0}};
        void *buffer_CC;
        int sizeCC;
        char status;
        
        // Copy debug image into buffer;
        recvEMIF(emifRecvAddr,image);

        //Threshold
        IMG_thr_le2min_8(image,threshold,IMG_WIDTH,IMG_HEIGHT,IMG_THRES);

        //Binarize
        VLIB_packMask32(threshold,binary,IMG_SIZE);

        //Connected component analysis
        connectedComponent(binary,&ccHandle,&buffer_CC,&sizeCC);

        //Blob Analysis
        status = blob(&ccHandle,&points);
       if(status<0)
       goto emifSend;

        //Pose Calculation
        poseCalc(&points,&pose);
        
        //Send result
        emifSend:
        sendEMIF(emifSendAddr,&pose,status);

        Memory_free(NULL,buffer_CC,sizeCC);
}
