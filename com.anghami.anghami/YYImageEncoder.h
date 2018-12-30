//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface YYImageEncoder : NSObject
{
    NSMutableArray *_images;
    NSMutableArray *_durations;
    _Bool _lossless;
    unsigned long long _type;
    unsigned long long _loopCount;
    double _quality;
}

+ (id)encodeImageWithDecoder:(id)arg1 type:(unsigned long long)arg2 quality:(double)arg3;
+ (id)encodeImage:(id)arg1 type:(unsigned long long)arg2 quality:(double)arg3;
@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(nonatomic) _Bool lossless; // @synthesize lossless=_lossless;
@property(nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)encodeToFile:(id)arg1;
- (id)encode;
- (id)_encodeWebP;
- (id)_encodeAPNG;
- (_Bool)_encodeWithImageIO:(id)arg1;
- (id)_encodeWithImageIO;
- (struct CGImage *)_newCGImageFromIndex:(unsigned long long)arg1 decoded:(_Bool)arg2;
- (void)_encodeImageWithDestination:(struct CGImageDestination *)arg1 imageCount:(unsigned long long)arg2;
- (struct CGImageDestination *)_newImageDestination:(id)arg1 imageCount:(unsigned long long)arg2;
- (_Bool)_imageIOAvaliable;
- (void)addImageWithFile:(id)arg1 duration:(double)arg2;
- (void)addImageWithData:(id)arg1 duration:(double)arg2;
- (void)addImage:(id)arg1 duration:(double)arg2;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;

@end

