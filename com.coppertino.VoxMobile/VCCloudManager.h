//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VCAPIManager.h"

@class TMMemoryCache;

@interface VCCloudManager : VCAPIManager
{
    TMMemoryCache *_urlCache;
}

+ (id)sharedManager;
@property(retain, nonatomic) TMMemoryCache *urlCache; // @synthesize urlCache=_urlCache;
- (void).cxx_destruct;
- (id)urlForRequest:(id)arg1;
- (void)_getDownloadURLForID:(id)arg1 inHandler:(CDUnknownBlockType)arg2;
- (void)getDownloadURLForID:(id)arg1 inHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

