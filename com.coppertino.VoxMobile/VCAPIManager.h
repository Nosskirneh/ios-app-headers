//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AFHTTPSessionManager;

@interface VCAPIManager : NSObject
{
    AFHTTPSessionManager *_requestManager;
}

@property(retain, nonatomic) AFHTTPSessionManager *requestManager; // @synthesize requestManager=_requestManager;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)sendRequest:(id)arg1;
- (id)urlForRequest:(id)arg1;

@end
