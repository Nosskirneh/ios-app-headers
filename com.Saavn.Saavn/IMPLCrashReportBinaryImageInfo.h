//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMPLCrashReportProcessorInfo, NSString;

@interface IMPLCrashReportBinaryImageInfo : NSObject
{
    IMPLCrashReportProcessorInfo *_processorInfo;
    unsigned long long _baseAddress;
    unsigned long long _imageSize;
    NSString *_imageName;
    _Bool _hasImageUUID;
    NSString *_imageUUID;
}

@property(readonly, nonatomic) NSString *imageUUID; // @synthesize imageUUID=_imageUUID;
@property(readonly, nonatomic) _Bool hasImageUUID; // @synthesize hasImageUUID=_hasImageUUID;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) unsigned long long imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) unsigned long long imageBaseAddress; // @synthesize imageBaseAddress=_baseAddress;
@property(readonly, nonatomic) IMPLCrashReportProcessorInfo *codeType; // @synthesize codeType=_processorInfo;
- (void)dealloc;
- (id)initWithCodeType:(id)arg1 baseAddress:(unsigned long long)arg2 size:(unsigned long long)arg3 name:(id)arg4 uuid:(id)arg5;

@end

