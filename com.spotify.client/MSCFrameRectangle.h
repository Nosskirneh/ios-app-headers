//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MSCFrameProperties, NSData;

@interface MSCFrameRectangle : NSObject
{
    unsigned char _scalingPercentageHorizontal;
    unsigned char _scalingPercentageVertical;
    unsigned int _datahash;
    MSCFrameProperties *_properties;
    NSData *_data;
    struct CGRect _rectangle;
}

+ (unsigned int)selectCompressionFromAllowedCompressions:(unsigned int)arg1;
+ (id)createTestImageFrameWithRect:(struct CGRect)arg1 compression:(unsigned int)arg2 pixelFormat:(unsigned char)arg3 endianess:(unsigned char)arg4 quality:(float)arg5;
+ (id)createWhiteImageFrameWithRect:(struct CGRect)arg1 compression:(unsigned int)arg2 pixelFormat:(unsigned char)arg3 endianess:(unsigned char)arg4 quality:(float)arg5;
@property unsigned int datahash; // @synthesize datahash=_datahash;
@property(retain) NSData *data; // @synthesize data=_data;
@property unsigned char scalingPercentageVertical; // @synthesize scalingPercentageVertical=_scalingPercentageVertical;
@property unsigned char scalingPercentageHorizontal; // @synthesize scalingPercentageHorizontal=_scalingPercentageHorizontal;
@property(retain) MSCFrameProperties *properties; // @synthesize properties=_properties;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
- (void).cxx_destruct;
- (id)compressData:(id)arg1 withQuality:(float)arg2 originalBitmapInfo:(unsigned int)arg3;
- (void)generateTestImageInGraphicsContext;
- (void)generateWhiteImageInGraphicsContext;
- (void)createAsTestImageWithCompressionQuality:(float)arg1 andSelector:(SEL)arg2;
- (id)initWithRect:(struct CGRect)arg1 frameProperties:(id)arg2 imageData:(id)arg3 hashOfImageData:(unsigned int)arg4;
- (id)initWithRect:(struct CGRect)arg1 frameProperties:(id)arg2 horizontalScaling:(unsigned char)arg3 verticalScaling:(unsigned char)arg4 imageData:(id)arg5 hashOfImageData:(unsigned int)arg6;
- (id)init;

@end

