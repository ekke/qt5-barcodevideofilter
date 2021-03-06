#ifndef CAMERAIMAGE_H
#define CAMERAIMAGE_H

#include <QImage>
#include <QString>
#include <QVideoFrame>

class VideoFrameWrapper
{
public:
    VideoFrameWrapper();
    VideoFrameWrapper(const QVideoFrame &input);
    ~VideoFrameWrapper();

    int getWidth() const;
    int getHeight() const;
    unsigned char *getData() const;
  
    bool frameToImage(const QVideoFrame &input);

private:
    void updateBuffer(const QVideoFrame &input);
    int m_width;
    int m_height;
    unsigned char *m_data;    
};

#endif //CAMERAIMAGE_H
