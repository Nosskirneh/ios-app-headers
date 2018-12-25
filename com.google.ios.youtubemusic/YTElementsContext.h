//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTPriorityLoader;
@protocol YTElementsDispatcher, YTElementsFontLoader, YTElementsImageDownloader, YTElementsLogger, YTElementsResourceLoader, YTElementsRuntimeConfig, YTElementsStoreProtocol, YTElementsUpdateQueue, YTResponder;

@interface YTElementsContext : NSObject
{
    id <YTResponder> _responder;
    id <YTElementsDispatcher> _dispatcher;
    id <YTElementsLogger> _logger;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) id <YTElementsLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <YTElementsDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTPriorityLoader *priorityLoader;
@property(readonly, nonatomic) id <YTElementsImageDownloader> imageDownloader;
@property(readonly, nonatomic) id <YTElementsRuntimeConfig> runtimeConfig;
@property(readonly, nonatomic) id <YTElementsFontLoader> fontLoader;
@property(readonly, nonatomic) id <YTElementsResourceLoader> resourceLoader;
@property(readonly, nonatomic) id <YTElementsStoreProtocol> store;
@property(readonly, nonatomic) id <YTElementsUpdateQueue> updateQueue;
- (id)init;
- (id)initWithResponder:(id)arg1;

@end
