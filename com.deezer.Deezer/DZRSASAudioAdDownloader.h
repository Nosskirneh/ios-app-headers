//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRPlayableAdContentDownloader-Protocol.h"

@class NSString;

@interface DZRSASAudioAdDownloader : NSObject <DZRPlayableAdContentDownloader>
{
    CDUnknownBlockType _urlBuilder;
}

+ (id)downloader;
+ (id)downloaderWithUrlBuilder:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType urlBuilder; // @synthesize urlBuilder=_urlBuilder;
- (void).cxx_destruct;
- (void)downloadWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

