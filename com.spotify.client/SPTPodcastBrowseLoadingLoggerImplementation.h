//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastBrowseLoadingLogger-Protocol.h"

@class NSString, NSURL;
@protocol SPTPerformanceMetricsViewLoggerFactory, SPTViewLogger;

@interface SPTPodcastBrowseLoadingLoggerImplementation : NSObject <SPTPodcastBrowseLoadingLogger>
{
    id <SPTPerformanceMetricsViewLoggerFactory> _viewLoggerFactory;
    id <SPTViewLogger> _viewLogger;
    NSURL *_pageURI;
    NSString *_pageIdentifier;
}

@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) id <SPTPerformanceMetricsViewLoggerFactory> viewLoggerFactory; // @synthesize viewLoggerFactory=_viewLoggerFactory;
- (void).cxx_destruct;
- (void)logLoadingCancelled;
- (void)logLoadingFailed;
- (void)logLoadingCompleted;
- (void)logLoadingStarted;
- (id)initWithViewLoggerFactory:(id)arg1 pageURI:(id)arg2 pageIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

