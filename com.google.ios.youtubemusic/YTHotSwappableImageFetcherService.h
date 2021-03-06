//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTFetcherService-Protocol.h"
#import "YTHotConfigObserver-Protocol.h"

@class GIMMe, NSString;
@protocol YTFetcherService;

@interface YTHotSwappableImageFetcherService : NSObject <YTHotConfigObserver, YTFetcherService>
{
    _Bool _useCronet;
    id <YTFetcherService> _sessionFetcherService;
    id <YTFetcherService> _cronetFetcherService;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)fetcherService;
- (void)hotConfigDidChange:(id)arg1;
- (id)fetcherTaskWithRequest:(id)arg1 configuration:(id)arg2 URLResponseHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)fetcherTaskWithRequest:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

