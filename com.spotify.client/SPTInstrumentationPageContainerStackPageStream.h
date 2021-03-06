//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationPageContainerPageStreamDelegate-Protocol.h"
#import "SPTInstrumentationPageStream-Protocol.h"

@class NSString, SPTInstrumentationPageView, SPTInstrumentationStackedPageStream;

@interface SPTInstrumentationPageContainerStackPageStream : NSObject <SPTInstrumentationPageStream, SPTInstrumentationPageContainerPageStreamDelegate>
{
    SPTInstrumentationStackedPageStream *_stack;
}

+ (id)keyPathsForValuesAffectingCurrentPageView;
@property(retain, nonatomic) SPTInstrumentationStackedPageStream *stack; // @synthesize stack=_stack;
- (void).cxx_destruct;
- (void)pageStream:(id)arg1 didSpawnChildPageStream:(id)arg2;
- (void)pushPageStream:(id)arg1;
@property(readonly, nonatomic) SPTInstrumentationPageView *currentPageView;
- (id)initWithPageContainer:(id)arg1 deviceClock:(id)arg2 stackedPageStream:(id)arg3 messagingHandler:(id)arg4 navigationListProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

