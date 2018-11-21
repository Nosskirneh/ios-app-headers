//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MSACompressedFrame : NSObject
{
    NSData *_conversionBuffer;
    _Bool _isValid;
    unsigned char _endianess;
    unsigned char _pixelFormat;
    unsigned int _frameCompression;
    float _compressionQuality;
    NSData *_imageData;
    unsigned long long _imageHash;
    struct CGRect _rect;
}

+ (id)compressedFrame:(id)arg1 withEndianess:(_Bool)arg2 compression:(unsigned int)arg3 pixelFormat:(unsigned char)arg4 compressionQuality:(float)arg5;
@property(readonly, nonatomic) unsigned long long imageHash; // @synthesize imageHash=_imageHash;
@property(readonly, nonatomic) float compressionQuality; // @synthesize compressionQuality=_compressionQuality;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) unsigned char pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) unsigned int frameCompression; // @synthesize frameCompression=_frameCompression;
@property(readonly, nonatomic) unsigned char endianess; // @synthesize endianess=_endianess;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (void).cxx_destruct;
- (void)compressFrameAsJPEG:(id)arg1;
- (void)compressFrameAsZLIB;
- (void)compressFrame:(id)arg1;
- (void)convertFromBGRA:(id)arg1;
- (void)convertFromABGR:(id)arg1;
- (void)convertFromARGB:(id)arg1;
- (void)convertFromRGBA:(id)arg1;
- (void)convertPixelFormat:(id)arg1;
- (void)generateFrame:(id)arg1;
- (id)init;

@end

