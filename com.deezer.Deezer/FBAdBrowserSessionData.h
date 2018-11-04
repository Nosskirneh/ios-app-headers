//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface FBAdBrowserSessionData : NSObject
{
    NSURL *_url;
    unsigned long long _handlerTimeMs;
    unsigned long long _loadStartMs;
    unsigned long long _responseEndMs;
    unsigned long long _domContentLoadedMs;
    unsigned long long _scrollReadyMs;
    unsigned long long _loadFinishMs;
    unsigned long long _sessionFinishMs;
}

+ (unsigned long long)currentTimeMs;
+ (void)initialize;
@property(nonatomic) unsigned long long sessionFinishMs; // @synthesize sessionFinishMs=_sessionFinishMs;
@property(nonatomic) unsigned long long loadFinishMs; // @synthesize loadFinishMs=_loadFinishMs;
@property(nonatomic) unsigned long long scrollReadyMs; // @synthesize scrollReadyMs=_scrollReadyMs;
@property(nonatomic) unsigned long long domContentLoadedMs; // @synthesize domContentLoadedMs=_domContentLoadedMs;
@property(nonatomic) unsigned long long responseEndMs; // @synthesize responseEndMs=_responseEndMs;
@property(nonatomic) unsigned long long loadStartMs; // @synthesize loadStartMs=_loadStartMs;
@property(nonatomic) unsigned long long handlerTimeMs; // @synthesize handlerTimeMs=_handlerTimeMs;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)dataMap;
- (id)initWithURL:(id)arg1 withHandlerTime:(unsigned long long)arg2 withLoadStart:(unsigned long long)arg3 withResponseEnd:(unsigned long long)arg4 withDOMContentLoaded:(unsigned long long)arg5 withScrollReady:(unsigned long long)arg6 withLoadFinish:(unsigned long long)arg7 withSessionFinish:(unsigned long long)arg8;

@end

