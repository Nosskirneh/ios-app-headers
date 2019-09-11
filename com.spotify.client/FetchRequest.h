//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKNHTTPRequest, NSMutableArray, NSString, NSURL;

@interface FetchRequest : NSObject
{
    NSMutableArray *_completionBlocks;
    GCKNHTTPRequest *_request;
    NSString *_cacheFileName;
    NSURL *_cacheFileURL;
}

@property(readonly, nonatomic) NSURL *cacheFileURL; // @synthesize cacheFileURL=_cacheFileURL;
@property(readonly, nonatomic) NSString *cacheFileName; // @synthesize cacheFileName=_cacheFileName;
@property(readonly, nonatomic) GCKNHTTPRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)completeWithImage:(id)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1 cacheFileName:(id)arg2 cacheFileURL:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

